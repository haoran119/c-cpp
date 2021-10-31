# 学习笔记之Windows Programming

* [Get Started with Win32 and C++ - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/learnwin32/learn-to-program-for-windows)
  * The aim of this Get Started series is to teach you how to write a desktop program in C++ using Win32 and COM APIs.
  * In the first module, you'll learn step-by-step how to create and show a window. Later modules will introduce the Component Object Model (COM), graphics and text, and user input.
* [Windows API - Wikipedia](https://en.wikipedia.org/wiki/Windows_API)
  * The Windows API, informally WinAPI, is Microsoft's core set of application programming interfaces (APIs) available in the Microsoft Windows operating systems. The name Windows API collectively refers to several different platform implementations that are often referred to by their own names (for example, Win32 API); see the versions section. Almost all Windows programs interact with the Windows API. On the Windows NT line of operating systems, a small number (such as programs started early in the Windows startup process) use the Native API.[1]
  * Developer support is available in the form of a software development kit, Microsoft Windows SDK, providing documentation and tools needed to build software based on the Windows API and associated Windows interfaces.
  * The Windows API (Win32) is focused mainly on the programming language C[2] in that its exposed functions and data structures are described in that language in recent versions of its documentation. However, the API may be used by any programming language compiler or assembler able to handle the (well-defined) low-level data structures along with the prescribed calling conventions for calls and callbacks. Similarly, the internal implementation of the API's function has been developed in several languages, historically.[3] Despite the fact that C is not an object-oriented programming language, the Windows API and Windows have both historically been described as object-oriented. There have also been many wrapper classes and extensions (from Microsoft and others) for object-oriented languages that make this object-oriented structure more explicit (Microsoft Foundation Class Library (MFC), Visual Component Library (VCL), GDI+, etc.). For instance, Windows 8 provides the Windows API and the WinRT API, which is implemented in C++[4] and is object-oriented by design.[4]
* [c-cpp/学习笔记之ATL & MFC at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BATL%20%26%20MFC)
* [c-cpp/学习笔记之Component Object Model (COM) at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BComponent%20Object%20Model%20(COM))
* [GetExitCodeThread function (processthreadsapi.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread?redirectedfrom=MSDN)
  * Retrieves the termination status of the specified thread.
  * Return value
    * If the function succeeds, the return value is nonzero.
    * If the function fails, the return value is zero. To get extended error information, call GetLastError.
  * Remarks
    * This function returns immediately. If the specified thread has not terminated and the function succeeds, the status returned is STILL_ACTIVE. If the thread has terminated and the function succeeds, the status returned is one of the following values:
    * The exit value specified in the ExitThread or TerminateThread function.
    * The return value from the thread function.
    * The exit value of the thread's process.
  * [c++ - How can you get the return value of a Windows thread? - Stack Overflow](https://stackoverflow.com/questions/7100441/how-can-you-get-the-return-value-of-a-windows-thread)
