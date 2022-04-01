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
* [CComVariant class | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl/reference/ccomvariant-class?view=msvc-170)
  * This class wraps the VARIANT type, providing a member indicating the type of data stored.
  * [VARIANT (oaidl.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/oaidl/ns-oaidl-variant)
    * VARIANTARG describes arguments passed within DISPPARAMS, and VARIANT to specify variant data that cannot be passed by reference.
    * When a variant refers to another variant by using the VT_VARIANT | VT_BYREF vartype, the variant being referred to cannot also be of type VT_VARIANT | VT_BYREF. VARIANTs can be passed by value, even if VARIANTARGs cannot.
* [Using CString | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/using-cstring?view=msvc-160)
  * The topics in this section describe how to program with CString. For reference documentation about the CString class, see the documentation for CStringT.
  * To use CString, include the atlstr.h header.
  * The CString, CStringA, and CStringW classes are specializations of a class template called CStringT based on the type of character data they support.
  * A CStringW object contains the wchar_t type and supports Unicode strings. A CStringA object contains the char type, and supports single-byte and multi-byte (MBCS) strings. A CString object supports either the char type or the wchar_t type, depending on whether the MBCS symbol or the UNICODE symbol is defined at compile time.
  * A CString object keeps character data in a CStringData object. CString accepts NULL-terminated C-style strings. CString tracks the string length for faster performance, but it also retains the NULL character in the stored character data to support conversion to LPCWSTR. CString includes the null terminator when it exports a C-style string. You can insert a NULL at other locations in a CString, but it may produce unexpected results.
  * The following set of string classes can be used without linking an MFC library, with or without CRT support: CAtlString, CAtlStringA, and CAtlStringW.
  * CString is used in native projects. For managed-code (C++/CLI) projects, use System::String.
  * To add more capabilities than CString, CStringA, or CStringW currently offer, you should create a subclass of CStringT that contains the additional features.
  * [CString Operations Relating to C-Style Strings | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/cstring-operations-relating-to-c-style-strings?view=msvc-160)
  * [CString::operator LPCTSTR | Microsoft Docs](https://docs.microsoft.com/en-us/previous-versions/visualstudio/visual-studio-6.0/aa300569(v=vs.60)?redirectedfrom=MSDN)
  * [c++ - What is LPCTSTR? - Software Engineering Stack Exchange](https://softwareengineering.stackexchange.com/questions/194764/what-is-lpctstr)
    * LPCTSTR = L‌ong P‌ointer to a C‌onst T‌CHAR STR‌ing (Don't worry, a long pointer is the same as a pointer. There were two flavors of pointers under 16-bit windows.)
    * Here's the table:
      * LPSTR = char*
      * LPCSTR = const char*
      * LPWSTR = wchar_t*
      * LPCWSTR = const wchar_t*
      * LPTSTR = char* or wchar_t* depending on _UNICODE
      * LPCTSTR = const char* or const wchar_t* depending on _UNICODE
  * [[MS-DTYP]: LPCSTR | Microsoft Docs](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dtyp/f8d4fe46-6be8-44c9-8823-615a21d17a61)
  * [[MS-DTYP]: LPCWSTR | Microsoft Docs](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dtyp/76f10dd8-699d-45e6-a53c-5aefc586da20)
  * [CSimpleStringT Class | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/reference/csimplestringt-class?view=msvc-170)
    * [CSimpleStringT::GetString](https://docs.microsoft.com/en-us/cpp/atl-mfc-shared/reference/csimplestringt-class?view=msvc-170#getstring)
      * Retrieves the character string.
      * Return Value
        * A pointer to a null-terminated character string.
