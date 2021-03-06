											MODULE('WINAPI')
												!DCL_API_SHCreateDirectoryEx(LONG pHwnd, *cSTRING lpPathName, LONG pSECURITY_ATTRIBUTES),LONG,PASCAL,RAW,NAME( 'SHCreateDirectoryExA' )
												DCL_API_Access(*cstring,short),short,raw,name('_access')
												DCL_API_AllocConsole(),DCL_API_BOOL,RAW,PASCAL,NAME('AllocConsole')
												DCL_API_BringWindowToTop(UNSIGNED),UNSIGNED,PASCAL,NAME('BringWindowToTop')
												DCL_API_CallNextHookEx(Long,Long,Long,Long),Long,Raw,Pascal,NAME('CallNextHookEx')
												DCL_API_CallWindowProc(LONG,UNSIGNED,UNSIGNED,UNSIGNED,LONG),LONG,PASCAL,NAME('CallWindowProcA')
												DCL_API_Chmod(*Cstring,ulong),DCL_API_bool,Pascal,Raw,Name('SetFileAttributesA')
												DCL_API_CloseHandle(unsigned),DCL_API_BOOL,PASCAL,proc,Name('CloseHandle')
												DCL_API_CopyFile(*cstring szFileName, *cstring szNewFileName, DCL_API_bool bFailIfExists),DCL_API_bool,raw,pascal,name('CopyFileA')
												DCL_API_CreateDirectory(*cSTRING lpPathName, LONG ),DCL_API_BOOL,PASCAL,RAW,NAME( 'CreateDirectoryA' )
												DCL_API_CreateFile(*cstring,ulong,ulong,long,ulong,ulong,unsigned),unsigned,PASCAL,RAW,Name('CreateFileA')
												DCL_API_CreateMutex (<*LONG>,SIGNED,<*CSTRING>),UNSIGNED,RAW,PASCAL,NAME('CreateMutexA')
												DCL_API_CreatePipe(long,long,long,long),ulong,PASCAL,RAW,NAME('CreatePipe')
												DCL_API_CreateProcess (ULONG lpApplicationName, ULONG lpCommandLine, ULONG lpProcessAttributes, ULONG lpThreadAttributes, DCL_API_BOOL bInheritHandles, DCL_API_DWORD dwCreationFlags, DCL_API_LPVOID lpEnvironment, ULONG lpCurrentDirectory, ULONG lpStartupInfo, ULONG lpProcessInformation),DCL_API_BOOL,RAW,PASCAL,NAME('CreateProcessA')
												DCL_API_DeleteFile(*cstring szFileName),DCL_API_bool,name('DeleteFileA'),raw,pascal
												DCL_API_DuplicateHandle(DCL_API_HANDLE, DCL_API_HANDLE, DCL_API_HANDLE, DCL_API_HANDLE, DCL_API_DWORD, DCL_API_BOOL, DCL_API_DWORD),DCL_API_BOOL,PASCAL,RAW,Name('DuplicateHandle')
												DCL_API_EnumWindows(Long,Long),proc,pascal,byte,NAME('EnumWindows')
												DCL_API_ExitWindows(ulong, signed),signed,PASCAL,NAME('ExitWindowsEx')
												DCL_API_FileTimeToLocalFileTime(*DCL_API_FILETIMEType,*DCL_API_FILETIMEType),DCL_API_BOOL,PASCAL,RAW,Name('FileTimeToLocalFileTime')
												DCL_API_FileTimeToSystemTime(*DCL_API_FILETIMEType,*DCL_API_SYSTEMTIME lpSystemTime),DCL_API_BOOL,PASCAL,RAW,Name('FileTimeToSystemTime')
												DCL_API_FindClose( LONG hFindFile ),DCL_API_BOOL,RAW,PASCAL,PROC,NAME('FINDClose')
												DCL_API_FindFirstFile( *CSTRING lpFileName, *DCL_API_WIN32_FIND_DATA ),LONG,RAW,PASCAL,NAME('FindFirstFileA')
												DCL_API_FindResource(LONG,LONG,LONG),LONG,PASCAL,RAW,NAME('FindResourceA')
												DCL_API_FNSplit(*CSTRING Path, *CSTRING Drv, *CSTRING Dir, *CSTRING Nme, *CSTRING Ext),SIGNED,PROC,RAW,NAME('_fnsplit')
												DCL_API_FormatMessage(DCL_API_DWORD,LONG,DCL_API_DWORD,DCL_API_DWORD,*CSTRING,DCL_API_DWORD,LONG),DCL_API_DWORD,PASCAL,RAW,NAME('FormatMessageA')
												DCL_API_FreeConsole(),DCL_API_BOOL,RAW,PASCAL,NAME('FreeConsole')
												DCL_API_FreeLibrary(LONG),DCL_API_BOOL,RAW,PASCAL,NAME('FreeLibrary')
												DCL_API_FreeResource(LONG),LONG,PASCAL,NAME('FreeResource')
												DCL_API_GetComputerName(*CSTRING,*ULONG),DCL_API_BOOL,PASCAL,RAW,NAME('GetComputerNameA'),PROC
												DCL_API_GetCurrentProcess(),DCL_API_HWND,PASCAL,RAW,NAME('GetCurrentProcess')
												DCL_API_GetDesktopWindow(),DCL_API_HWND,PASCAL,RAW,NAME('GetDesktopWindow()')
												DCL_API_GetDOSEnv(string),string,NAME('GetDOSEnv')
												DCL_API_GetDriveType(*LPCSTR),UNSIGNED,PASCAL,RAW,NAME('GetDriveTypeA')
												DCL_API_GetEnvironment(*CSTRING),CSTRING,RAW,NAME('_GETENV')
												DCL_API_GetExitCodeProcess (DCL_API_HANDLE hProcess,ULONG lpExitCode),DCL_API_BOOL,PASCAL,NAME('GetExitCodeProcess')
												DCL_API_GetFileSize(unsigned,<*ulong>),ulong,PASCAL,Name('GetFileSize')
												DCL_API_GetFileTime(unsigned,*DCL_API_FILETIMEType,*DCL_API_FILETIMEType,*DCL_API_FILETIMEType),DCL_API_BOOL,PASCAL,RAW,NAME('GetFileTime')
												DCL_API_GetForegroundWindow(),UNSIGNED,PASCAL,NAME('GetForegroundWindow')
												DCL_API_GetLastError(),LONG,PASCAL,NAME('GetLastError')
												DCL_API_GetModuleFileName(UNSIGNED,*CSTRING,LONG),LONG,PASCAL,RAW,NAME('GetModuleFileNameA')
												DCL_API_GetModuleHandle(*LPCSTR),DCL_API_HMODULE,PASCAL,RAW,NAME('GetModuleHandleA')
												DCL_API_GetModuleHandle(LONG),LONG,PASCAL,RAW,NAME('GetModuleHandleA')
												DCL_API_GetModuleUsage(DCL_API_HINSTANCE),SIGNED,PASCAL,NAME('GetModuleUsage')
												DCL_API_GetNextWindow(DCL_API_HWND, DCL_API_WORD),DCL_API_HWND,PASCAL,NAME('GetNextWindow')
												DCL_API_GetNumTasks(),SIGNED,PASCAL,NAME('GetNumTasks()')
												DCL_API_GetPrivateProfileString(*LPCSTR,*LPCSTR,*LPCSTR,*LPSTR,DCL_API_DWORD,*LPCSTR),DCL_API_DWORD,PASCAL,RAW,NAME('GetPrivateProfileStringA')
												DCL_API_GetProcAddress(LONG, *CSTRING),ULONG,RAW,PASCAL,NAME('GetProcAddress')
												DCL_API_GetStdHandle(LONG),ULONG,PROC,PASCAL,RAW,NAME('GetStdHandle')
												DCL_API_GetTempFileName(*cstring,*cstring,UNSIGNED,*cstring),UNSIGNED,PASCAL,RAW,NAME('GetTempFileNameA'),proc
												DCL_API_GetTempPathA(long,*cstring),Long,PASCAL,RAW,proc,name('GetTempPathA')
												DCL_API_GetVersion(),DCL_API_DWORD,PASCAL,NAME('GetVersion()')
												DCL_API_GetVersionEx(ULONG),DCL_API_BOOL,PASCAL,RAW,NAME('GetVersionExA')
												DCL_API_GetWindow(DCL_API_HWND,UNSIGNED),DCL_API_HWND,PASCAL,NAME('GetWindow')
												DCL_API_GetWindowRect(DCL_API_HWND, *RECT),DCL_API_BOOL,PASCAL,RAW,NAME('GetWindowRect')
												DCL_API_GetWindowsDirectory(*LPSTR,UNSIGNED),UNSIGNED,PASCAL,RAW,NAME('GetWindowsDirectoryA')
												DCL_API_GetWindowTask(DCL_API_HWND),DCL_API_HTASK,PASCAL,NAME('GetWindowTask')
												DCL_API_GetWindowText(DCL_API_HWND,*LPSTR,SIGNED),SIGNED,PASCAL,RAW,NAME('GetWindowTextA')
												DCL_API_GetWindowText(UNSIGNED, LONG,SIGNED),SIGNED,PASCAL,RAW,NAME('GetWindowTextA')
												DCL_API_GetWindowTextLength(DCL_API_HWND),SIGNED,PASCAL,NAME('GetWindowTextLengthA')
												DCL_API_GetWindowThreadProcessId(unsigned,*ulong),ulong,PASCAL,NAME('GetWindowThreadProcessId')
												DCL_API_GlobalAlloc(UNSIGNED,ulong),unsigned,PASCAL,name('GlobalAlloc')
												DCL_API_GlobalFree(unsigned),unsigned,PASCAL,proc,Name('GlobalFree')
												DCL_API_GlobalLock(unsigned),LONG,PASCAL,name('GlobalLock')
												DCL_API_GlobalMemoryStatus(*MEMORYSTATUS),PASCAL,RAW,NAME('GlobalMemoryStatus(')
												DCL_API_globalsize(unsigned),ulong,pascal,Name('GlobalSize')
												DCL_API_globalunlock(unsigned),long,pascal,proc,Name('GlobalUnlock')
												DCL_API_Incr(*LONG),LONG,PASCAL,PROC,NAME('InterlockedIncrement')
												DCL_API_InvalidateRect(UNSIGNED hWnd1, LONG lpRect, SIGNED bErase),PASCAL,NAME('InvalidateRect')
												DCL_API_LoadIcon(UNSIGNED,LONG),UNSIGNED,PASCAL,NAME('LoadIconA')
												DCL_API_LoadLibrary(*CSTRING),ULONG,RAW,PASCAL,NAME('LoadLibraryA')
												DCL_API_LoadLibrary(Long),Long,Raw,Pascal,Name('LoadLibraryA')
												DCL_API_LoadResource(LONG, LONG),LONG,PASCAL,NAME('LoadResource')
												DCL_API_LocalFileTimeToFileTime(*DCL_API_FILETIMEType,*DCL_API_FILETIMEType),DCL_API_BOOL,PASCAL,RAW,Name('LocalFileTimeToFileTime')
												DCL_API_LockResource(LONG),ULONG,PASCAL,NAME('LockResource')
												DCL_API_LStrCpy(*CString,LONG),LONG,PASCAL,RAW,PROC,NAME('LStrCpy(')
												DCL_API_LtoA(LONG,*CSTRING,SIGNED),ULONG,RAW,NAME('_ltoa'),PROC
												DCL_API_memcpy(LONG,LONG,UNSIGNED),NAME('_memcpy')
												DCL_API_memset(LONG,LONG,UNSIGNED),NAME('_memset')
												DCL_API_MkDir(*cstring),short,raw,name('_mkdir')
												DCL_API_MoveWindow(UNSIGNED hWnd1, SIGNED X, SIGNED y, SIGNED nWidht, SIGNED nHeight, SIGNED bRepaint),PASCAL,NAME('MoveWindow')
												DCL_API_OutputDebugString(*CString),RAW,PASCAL,NAME('OutputDebugStringA')
												DCL_API_PostMessage(UNSIGNED,UNSIGNED,UNSIGNED,LONG),proc,pascal,BYTE,NAME('PostMessageA')
												DCL_API_ReadFile(ulong,long,ulong,long,long),long,pascal,raw,Name('ReadFile')
												DCL_API_RegCloseKey(DCL_API_HKEY),LONG,PASCAL,NAME('RegCloseKey')
												DCL_API_RegCreateKey(DCL_API_HKEY,*LPCSTR,DCL_API_DWORD,*LPSTR,DCL_API_DWORD,DCL_API_DWORD,*DCL_API_DWORD,*DCL_API_HKEY,*DCL_API_DWORD),LONG,PASCAL,RAW,NAME('RegCreateKeyExA')
												DCL_API_RegCreateKeyEx(LONG,LONG,LONG,LONG,LONG,LONG,LONG,LONG,LONG),LONG,PASCAL,RAW,NAME('RegCreateKeyExA')
												DCL_API_RegDeleteKey(DCL_API_HKEY,*LPCSTR),LONG,PASCAL,NAME('RegDeleteKeyA')
												DCL_API_RegEnumKey(DCL_API_HKEY,DCL_API_DWORD,*LPSTR,DCL_API_DWORD),LONG,PASCAL,RAW,NAME('RegEnumKeyA')
												DCL_API_RegOpenKey(DCL_API_HKEY,*LPCSTR,DCL_API_DWORD,DCL_API_DWORD,*DCL_API_HKEY),LONG,PASCAL,RAW,NAME('RegOpenKeyExA')
												DCL_API_RegQueryValue(DCL_API_HKEY,*LPCSTR,*DCL_API_DWORD,*DCL_API_DWORD,*CSTRING,*DCL_API_DWORD),LONG,PASCAL,RAW,NAME('RegQueryValueExA')
												DCL_API_RegSetValue(DCL_API_HKEY,*LPCSTR,DCL_API_DWORD,DCL_API_DWORD,LONG,DCL_API_DWORD),LONG,PASCAL,RAW,NAME('RegSetValueExA')
												DCL_API_RegSetValueEx(LONG,LONG,LONG,LONG,LONG,LONG),LONG,RAW,PASCAL,NAME('RegSetValueExA')
												DCL_API_Remove(*cstring),short,raw,name('_remove')
												DCL_API_Rename(*cstring, *cstring), short, raw, name('_rename')
												DCL_API_ReplaceFile(*cstring szFileName, *cstring szReplacementFileName, long lpBackupFileName, long dwReplaceFlags, long lpExclude = 0, long lpReserved = 0),DCL_API_bool,raw,pascal,name('ReplaceFileA')
												DCL_API_RmDir(*CSTRING),SHORT, RAW, NAME('_rmdir')
												DCL_API_SendMessage(UNSIGNED hwnd1, UNSIGNED uMsg, SIGNED wParam, LONG lParam),LONG,PASCAL,PROC,NAME('SendMessage')
												DCL_API_SetEnvironmentVariableA(*CSTRING,*CSTRING),DCL_API_BOOL,PASCAL,RAW,NAME('SetEnvironmentVariableA')
												DCL_API_SetFilePointer(UNSIGNED, LONG, LONG, ULONG),ULONG,PROC,PASCAL,RAW,Name('SetFilePointer')
												DCL_API_SetFileTime(unsigned,*DCL_API_FILETIMEType,*DCL_API_FILETIMEType,*DCL_API_FILETIMEType),DCL_API_BOOL,PASCAL,RAW,NAME('SetFileTime')
												DCL_API_SetFocus(UNSIGNED),UNSIGNED,PASCAL      ! Returns last window with focus,NAME('SetFocus')
												DCL_API_SetForegroundWindow(UNSIGNED),DCL_API_BOOL,PASCAL,NAME('SetForegroundWindow')
												DCL_API_SetHandleInformation( DCL_API_HANDLE, DCL_API_DWORD, DCL_API_DWORD),ULONG,PROC,PASCAL,RAW,NAME('SetHandleInformation')
												DCL_API_SetStdHandle(LONG, DCL_API_HANDLE),ULONG,PROC,PASCAL,RAW,NAME('SetStdHandle')
												DCL_API_SetWindowLong(UNSIGNED,SIGNED,LONG),LONG,RAW,PASCAL,NAME('SetWindowLongA')
												DCL_API_SetWindowPos(UNSIGNED,UNSIGNED,SHORT,SHORT,SHORT,SHORT,USHORT),SHORT,PASCAL,NAME('SetWindowPos')
												DCL_API_SetWindowsHookEx(Long,Long,Long,Long),Long,Raw,Pascal,Name('SetWindowsHookExA')
												DCL_API_Shell_NotifyIcon(ULONG,LONG),DCL_API_BOOL,PASCAL,NAME('Shell_NotifyIconA')
												DCL_API_ShellExecute(UNSIGNED,*CSTRING,*CSTRING,*CSTRING,*CSTRING,SIGNED),UNSIGNED,PASCAL,RAW,NAME('ShellExecuteA')
												DCL_API_ShowWindow(UNSIGNED,SIGNED),SIGNED,PASCAL,PROC,NAME('ShowWindow')    
												DCL_API_SizeofResource(LONG, LONG),ULONG,PASCAL,NAME('SizeofResource')
												DCL_API_Sleep(ULONG),PASCAL,NAME('Sleep')
												DCL_API_sndPlaySound(*LPCSTR,UNSIGNED),DCL_API_BOOL,PROC,pascal,raw,NAME('sndPlaySoundA')
												DCL_API_SystemTimeToFileTime(*DCL_API_SYSTEMTIME lpSystemTime, *DCL_API_FILETIMEType),DCL_API_BOOL,PASCAL,RAW,NAME('SystemTimeToFileTime')
												DCL_API_UnhookWindowsHookEx(Long),DCL_API_Bool,Raw,Pascal,NAME('UnhookWindowsHookEx')
												DCL_API_vsCallWinProc(LONG,UNSIGNED,UNSIGNED,UNSIGNED,LONG),LONG,PASCAL,NAME('CallWindowProcA')
												DCL_API_WaitForMultipleObjects(LONG,LONG,LONG,LONG),RAW,LONG,PASCAL,PROC, NAME('WaitForMultipleObjects')
												DCL_API_WaitForSingleObject(UNSIGNED, ULONG), UNSIGNED, PASCAL, NAME('WaitForSingleObject')
												DCL_API_WinExec(*LPCSTR,UNSIGNED),UNSIGNED,PASCAL,RAW,NAME('WinExec')
												DCL_API_WriteFile(unsigned,long,ulong,*ulong,long),DCL_API_BOOL,PASCAL,RAW,proc,Name('WriteFile')
												!moai_CloseHandle(UNSIGNED),SIGNED,PROC,PASCAL,NAME('CloseHandle')
												!moai_CreateMutex(ULONG,SIGNED,<*CSTRING>),UNSIGNED,RAW,PASCAL,NAME('CreateMutexA')                 
												!moai_GetLastError(),SIGNED,PASCAL,NAME('GetLastError')
											END      
