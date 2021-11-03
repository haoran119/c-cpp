# 学习笔记之Component Object Model (COM)

* [Component Object Model (COM) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/com/component-object-model--com--portal)
  * Purpose
    * COM is a platform-independent, distributed, object-oriented system for creating binary software components that can interact. COM is the foundation technology for Microsoft's OLE (compound documents) and ActiveX (Internet-enabled components) technologies.
  * Where applicable
    * COM objects can be created with a variety of programming languages. Object-oriented languages, such as C++, provide programming mechanisms that simplify the implementation of COM objects. These objects can be within a single process, in other processes, even on remote computers.
* [Component Object Model - Wikipedia](https://en.wikipedia.org/wiki/Component_Object_Model)
  * Component Object Model (COM) is a binary-interface standard for software components introduced by Microsoft in 1993. It is used to enable inter-process communication object creation in a large range of programming languages. COM is the basis for several other Microsoft technologies and frameworks, including OLE, OLE Automation, Browser Helper Object, ActiveX, COM+, DCOM, the Windows shell, DirectX, UMDF and Windows Runtime. The essence of COM is a language-neutral way of implementing objects that can be used in environments different from the one in which they were created, even across machine boundaries. For well-authored components, COM allows reuse of objects with no knowledge of their internal implementation, as it forces component implementers to provide well-defined interfaces that are separated from the implementation. The different allocation semantics of languages are accommodated by making objects responsible for their own creation and destruction through reference-counting. Type conversion casting between different interfaces of an object is achieved through the QueryInterface method. The preferred method of "inheritance" within COM is the creation of sub-objects to which method "calls" are delegated.
  * COM is an interface technology defined and implemented as standard only on Microsoft Windows and Apple's Core Foundation 1.3 and later plug-in application programming interface (API).[1] The latter only implements a subset of the whole COM interface.[2] For some applications, COM has been replaced at least to some extent by the Microsoft .NET framework, and support for Web Services through the Windows Communication Foundation (WCF). However, COM objects can be used with all .NET languages through .NET COM Interop. Networked DCOM uses binary proprietary formats, while WCF encourages the use of XML-based SOAP messaging. COM is very similar to other component software interface technologies, such as CORBA and Enterprise JavaBeans, although each has its own strengths and weaknesses. Unlike C++, COM provides a stable application binary interface (ABI) that does not change between compiler releases.[3] This makes COM interfaces attractive for object-oriented C++ libraries that are to be used by clients compiled using different compiler versions.
* [Is component object model still used?](https://livebook.manning.com/book/powershell-in-depth-second-edition/chapter-34/)
  * .NET Framework, folks relied on an earlier technology called the Component Object Model (COM). COM is basically a set of rules that enable developers to write software components that can easily interoperate. COM is still in wide use today, although it's considered an older cousin to the . NET Framework.
* [c++ - What is COM (Component Object Model) in a nutshell? - Stack Overflow](https://stackoverflow.com/questions/455687/what-is-com-component-object-model-in-a-nutshell)
* [Essential COM - Don Box - Google Books](https://books.google.co.uk/books?id=kfRWvKSePmAC&dq=essential+com&printsec=frontcover&source=bn&hl=en&sa=X&oi=book_result&ct=result#v=onepage&q=essential%20com&f=false)
* [Migrating COM/DCOM Applications in Microsoft .NET Framework](https://www.c-sharpcorner.com/article/migrating-comdcom-applications-in-microsoft-net-framework/)
* [Managed and Unmanaged Code - Key Differences - ParTech](https://www.partech.nl/en/publications/2021/03/managed-and-unmanaged-code---key-differences#)
  * DIFFERENCE BETWEEN MANAGED AND UNMANAGED CODE?
    * Managed code is the one that is executed by the CLR of the .NET framework while unmanaged or unsafe code is executed by the operating system.
    * The managed code provides security to the code while undamaged code creates security threats.
    * In unsafe or unmanaged code the unsafe modifier is used to write the block of code while any other code written outside the unsafe code block is managed code.
    * Memory buffer overflow problems do not occur in managed code as it is taken care of by the runtime environment but these problems occur in unmanaged code.
    * Runtime services are provided in managed code while they are not provided in unmanaged code.
    * Source code is first converted to intermediate language and then to native language in managed code while it is directly converted into the native language in unmanaged code.
    * Unmanaged code provides low-level access while managed code does not provide that.
    * In unsafe or unmanaged code the unsafe modifier is used to write the block of code while any other code written outside the unsafe code block is managed code.
* [Compiler COM Support | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/compiler-com-support?view=msvc-160)
  * The Microsoft C++ compiler can directly read component object model (COM) type libraries and translate the contents into C++ source code that can be included in the compilation. Language extensions are available to facilitate COM programming on the client side for desktop apps.
  * By using the #import preprocessor directive, the compiler can read a type library and convert it into a C++ header file that describes the COM interfaces as classes. A set of #import attributes is available for user control of the content for the resulting type library header files.
  * You can use the __declspec extended attribute uuid to assign a globally unique identifier (GUID) to a COM object. The keyword __uuidof can be used to extract the GUID associated with a COM object. Another __declspec attribute, property, can be used to specify the get and set methods for a data member of a COM object.
  * A set of COM support global functions and classes is provided to support the VARIANT and BSTR types, implement smart pointers, and encapsulate the error object thrown by _com_raise_error:
    * Compiler COM Global Functions
    * _bstr_t
    * _com_error
    * _com_ptr_t
    * _variant_t
  * [BSTR | Microsoft Docs](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/automat/bstr)
    * A BSTR (Basic string or binary string) is a string data type that is used by COM, Automation, and Interop functions. Use the BSTR data type in all interfaces that will be accessed from script.
  * [_bstr_t class | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/bstr-t-class?view=msvc-160)
    * A _bstr_t object encapsulates the BSTR data type. The class manages resource allocation and deallocation through function calls to SysAllocString and SysFreeString and other BSTR APIs when appropriate. The _bstr_t class uses reference counting to avoid excessive overhead.
  * [_bstr_t::operator +=, _bstr_t::operator + | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/bstr-t-operator-add-equal-plus?view=msvc-160)
    * Appends characters to the end of the _bstr_t object, or concatenates two strings.
  * [_bstr_t::wchar_t*, _bstr_t::char* | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/bstr-t-wchar-t-star-bstr-t-char-star?view=msvc-160)
    * Returns the BSTR characters as a narrow or wide character array.
* [HRESULT - Wikipedia](https://en.wikipedia.org/wiki/HRESULT)
  * In the field of computer programming, the HRESULT is a data type used in Windows operating systems, and the earlier IBM/Microsoft OS/2 operating system, to represent error conditions, and warning conditions.
  * The original purpose of HRESULTs was to formally lay out ranges of error codes for both public and Microsoft internal use in order to prevent collisions between error codes in different subsystems of the OS/2 operating system.
  * HRESULTs are numerical error codes. Various bits within an HRESULT encode information about the nature of the error code, and where it came from.
  * HRESULT error codes are most commonly encountered in COM programming, where they form the basis for a standardized COM error handling convention.
  * [HRESULT | Microsoft Docs](https://docs.microsoft.com/en-us/office/client-developer/outlook/mapi/hresult)
  * [Common HRESULT Values - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/com/com-error-codes-1)
  * [COM Error Codes (Generic) (Winerror.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/com/com-error-codes-1)
* [Universally unique identifier - Wikipedia](https://en.wikipedia.org/wiki/Universally_unique_identifier)
  * A universally unique identifier (UUID) is a 128-bit label used for information in computer systems. The term globally unique identifier (GUID) is also used, often in software created by Microsoft.[1]
  * When generated according to the standard methods, UUIDs are, for practical purposes, unique. Their uniqueness does not depend on a central registration authority or coordination between the parties generating them, unlike most other numbering schemes. While the probability that a UUID will be duplicated is not zero, it is close enough to zero to be negligible.[2][3]
  * Thus, anyone can create a UUID and use it to identify something with near certainty that the identifier does not duplicate one that has already been, or will be, created to identify something else. Information labeled with UUIDs by independent parties can therefore be later combined into a single database or transmitted on the same channel, with a negligible probability of duplication.
  * Adoption of UUIDs is widespread, with many computing platforms providing support for generating them and for parsing their textual representation.
  * [GUID - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/guiddef/ns-guiddef-guid)
    * A GUID identifies an object such as a COM interfaces, or a COM class object, or a manager entry-point vector (EPV). A GUID is a 128-bit value consisting of one group of 8 hexadecimal digits, followed by three groups of 4 hexadecimal digits each, followed by one group of 12 hexadecimal digits. The following example GUID shows the groupings of hexadecimal digits in a GUID: 6B29FC40-CA47-1067-B31D-00DD010662DA.
    * The GUID structure stores a GUID.
  * [CLSIDFromString function (combaseapi.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/combaseapi/nf-combaseapi-clsidfromstring)
    * Converts a string generated by the StringFromCLSID function back into the original CLSID.
  * [CoCreateGuid function (combaseapi.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/combaseapi/nf-combaseapi-cocreateguid?redirectedfrom=MSDN)
    * Creates a GUID, a unique 128-bit integer used for CLSIDs and interface identifiers.
    * [windows - What's the C++ version of Guid.NewGuid()? - Stack Overflow](https://stackoverflow.com/questions/1327157/whats-the-c-version-of-guid-newguid)
  * [StringFromGUID2 function (combaseapi.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/combaseapi/nf-combaseapi-stringfromguid2)
    * Converts a globally unique identifier (GUID) into a string of printable characters.
  * [StringFromCLSID function (combaseapi.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/combaseapi/nf-combaseapi-stringfromclsid?redirectedfrom=MSDN)
    * Converts a CLSID into a string of printable characters. Different CLSIDs always convert to different strings.
    * [c++ - Print a GUID variable - Stack Overflow](https://stackoverflow.com/questions/1672677/print-a-guid-variable)
