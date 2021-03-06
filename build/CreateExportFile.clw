!---------------------------------------------------------------------------------------------!
! Copyright (c) 2012, CoveComm Inc.
! All rights reserved.
!---------------------------------------------------------------------------------------------!
!region
! 
! Redistribution and use in source and binary forms, with or without
! modification, are permitted provided that the following conditions are met: 
! 
! 1. Redistributions of source code must retain the above copyright notice, this
!    list of conditions and the following disclaimer. 
! 2. Redistributions in binary form must reproduce the above copyright notice,
!    this list of conditions and the following disclaimer in the documentation
!    and/or other materials provided with the distribution. 
! 3. The use of this software in a paid-for programming toolkit (that is, a commercial 
!    product that is intended to assist in the process of writing software) is 
!    not permitted.
! 
! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
! ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
! WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
! DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
! ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
! (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
! LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
! ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
! (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
! SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
! 
! The views and conclusions contained in the software and documentation are those
! of the authors and should not be interpreted as representing official policies, 
! either expressed or implied, of www.DevRoadmaps.com or www.ClarionMag.com.
! 
! If you find this software useful, please support its creation and maintenance
! by taking out a subscription to www.DevRoadmaps.com.
!---------------------------------------------------------------------------------------------!
!endregion

  PROGRAM


                                            MAP
                                            END

	include('DCL_System_ExpFileWriter.inc'),once
    include('DCL_System_IO_AsciiFile.inc'),once
    include('DCL_System_String.inc'),once

MaxFilePathLength equate(FILE:MaxFilePath + FILE:MaxFileName + 1)

ExpWriter                               DCL_System_ExpFileWriter
ListOfIncludeFiles                      DCL_System_IO_AsciiFile
TextFileName                            cstring(MaxFilePathLength)
IncludeFile                             cstring(MaxFilePathLength)
IniFileName                             cstring(MaxFilePathLength)
OriginalDirectory                       cstring(MaxFilePathLength)
WorkingDirectory                        cstring(MaxFilePathLength)
str                                     DCL_System_String
pos                                     long
ExpFileName                             cstring(100)

    CODE
    
    ! Save the current directory
    OriginalDirectory = longpath()
    
    ExpFileName = command(1)
    if ExpFileName = ''
        message('You must specify the name of the DLL (without extension) for which you are creating an EXP file as the first command line parameter')
        SetExitCode(99)
        return
    end
    
    
    ! Set the working directory from the command line, defaulting to the current directory
    WorkingDirectory = command(2)
    if WorkingDirectory = '' then WorkingDirectory = longpath().
    SetPath(WorkingDirectory)

    ! Look in the INI file for the text file containing the list of class headers to export
    IniFileName = '.\' & ExpFileName & '_Exports.ini'
    !message('using ini file ' & IniFileName)
    TextFileName = GetIni('Settings','FileWithListOfClassHeadersToExport','ClassHeadersToExport.txt',IniFileName)

    ! Write back the INI file just in case it doesn't yet exist
    PutIni('Settings','FileWithListOfClassHeadersToExport',TextFileName,IniFileName)

    ! Read in the header file names and add them to the EXP writer
    if ListOfIncludeFiles.OpenFile(TextFileName) = Level:Benign
        loop
            if ListOfIncludeFiles.Read(IncludeFile) <> Level:Benign then break.
            ExpWriter.AddClassHeaderFile(clip(IncludeFile))
        end
        ListOfIncludeFiles.CloseFile()
    end

    ! Look in the INI file for the text file containing the list of custom export statements
    TextFileName = GetIni('Settings','FileWithListOfCustomExports','CustomExports.txt',IniFileName)

    ! Write back the INI file just in case it doesn't yet exist
    PutIni('Settings','FileWithListOfCustomExports',TextFileName,IniFileName)

    ! Read in any custom export statements and add them
    if ListOfIncludeFiles.OpenFile(TextFileName) = Level:Benign
        loop
            if ListOfIncludeFiles.Read(IncludeFile) <> Level:Benign then break.
            ExpWriter.AddCustomExportStatement(clip(IncludeFile))
        end
        ListOfIncludeFiles.CloseFile()
    end

    ExpWriter.WriteExpFile('DevRoadmapsClarion')	
    Setpath(OriginalDirectory)