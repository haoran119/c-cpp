# 学习笔记之ATL & MFC

* [Microsoft C/C++ Documentation | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/?view=msvc-160)
  * [ATL COM Desktop Components | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl/atl-com-desktop-components?view=msvc-160)
    * The ATL Reference documents the Active Template Library (ATL), a set of template-based C++ classes that simplify the programming of Component Object Model (COM) objects. COM is a binary specification for creating and consuming software components on Windows. To fully take advantage of ATL, a working familiarity with COM is highly recommended. For more information about COM, see Component Object Model (COM).
    * [Active Template Library (ATL) Concepts | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl/active-template-library-atl-concepts?view=msvc-160)
      * The Active Template Library (ATL) is a set of template-based C++ classes that let you create small, fast Component Object Model (COM) objects. It has special support for key COM features, including stock implementations, dual interfaces, standard COM enumerator interfaces, connection points, tear-off interfaces, and ActiveX controls.
      * If you do a lot of ATL programming, you will want to learn more about COM and .NET attributes, which is designed to simplify COM programming. For more information, see Attributed Programming. (COM and .NET attributes are not to be confused with the [[attribute]] feature in the C++ standard.)
  * [MFC Desktop Applications | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/mfc/mfc-desktop-applications?view=msvc-160)
    * The Microsoft Foundation Class (MFC) Library provides an object-oriented wrapper over much of the Win32 and COM APIs. Although it can be used to create very simple desktop applications, it is most useful when you need to develop more complex user interfaces with multiple controls. You can use MFC to create applications with Office-style user interfaces. For documentation on the Windows platform itself, see Windows documentation. For information on building Windows applications in C++ without MFC, see Build desktop Windows apps using the Win32 API.
  * [ATL-MFC Shared Classes | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/atl-mfc-shared-classes?view=msvc-160)
    * These utility classes can be used in any native C++ project without requiring any MFC DLL.
    * [Classes Shared by MFC and ATL | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/reference/classes-shared-by-mfc-and-atl?view=msvc-160)
      * [CTime Class | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/reference/ctime-class?view=msvc-160)
        * Represents an absolute time and date.
        * [CTime::GetCurrentTime](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/reference/ctime-class?view=msvc-160#getcurrenttime)
        * [CTime::Format](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/reference/ctime-class?view=msvc-160#format)
        * [strftime, wcsftime, _strftime_l, _wcsftime_l | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l?view=msvc-160)
