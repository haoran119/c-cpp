# 学习笔记之C / C++

* [C++ Language Reference | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/cpp-language-reference?view=msvc-160)
  * [Welcome back to C++ - Modern C++ | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-160)
* [cppreference.com](https://en.cppreference.com/w/)
* [cplusplus.com - The C++ Resources Network](http://www.cplusplus.com/)
* [Learn C++ – Skill up with our free tutorials](https://www.learncpp.com/)
* [C++ Tutorial](https://www.tutorialspoint.com/cplusplus/index.htm)
  * [The C++ Standard Library Tutorial](https://www.tutorialspoint.com/cpp_standard_library/index.htm)
* [C++ Programming Language - GeeksforGeeks](https://www.geeksforgeeks.org/c-plus-plus/?ref=shm)
* [fffaraz/awesome-cpp: A curated list of awesome C++ (or C) frameworks, libraries, resources, and shiny things.](https://github.com/fffaraz/awesome-cpp)
* [Clean Code - Uncle Bob / Lesson 1 - YouTube](https://www.youtube.com/watch?v=7EmboKQH8lM)
* [Cᐩᐩ Weekly With Jason Turner - YouTube](https://www.youtube.com/channel/UCxHAlbZQNFU2LgEtiqd2Maw)
* [Compiler Explorer](https://godbolt.org/)
* [Coliru - Compile, link and run](http://coliru.stacked-crooked.com/)
* [C++ Insights](https://cppinsights.io/)

#

* [c-cpp/面试总结之C-C++ at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E9%9D%A2%E8%AF%95%E6%80%BB%E7%BB%93%E4%B9%8BC-C%2B%2B)
* [c-cpp/学习笔记之C++入门到精通 at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BC%2B%2B%E5%85%A5%E9%97%A8%E5%88%B0%E7%B2%BE%E9%80%9A)
* [c-cpp/学习笔记之Windows Programming at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BWindows%20Programming)
* [学习笔记之C++ How to Program(part) - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2010/10/26/1860906.html)
* [学习笔记之C++ Primer中文版（第五版） - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/7071876.html)
* [学习笔记之高质量C++/C编程指南 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/5577934.html)
* [学习笔记之Linux开发(C语言) - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/5122821.html)
* [学习笔记之C/C++指针使用常见的坑 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8464520.html)
* [学习笔记之C++入门到精通（名师教学·手把手教会）【职坐标】_腾讯课堂 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/7904482.html)

## Resources

### C++ Core Guidelines
* [PPP Style Guide](https://www.stroustrup.com/Programming/PPP-style.pdf)
* [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
  * This document is a set of guidelines for using C++ well. The aim of this document is to help people to use modern C++ effectively. By “modern C++” we mean effective use of the ISO C++ standard (currently C++17, but almost all of our recommendations also apply to C++14 and C++11).
  * [In: Introduction](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-introduction)
  * [P: Philosophy](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-philosophy)
    * P.1: Express ideas directly in code
    * P.2: Write in ISO Standard C++
    * P.3: Express intent
    * P.4: Ideally, a program should be statically type safe
    * P.5: Prefer compile-time checking to run-time checking
    * P.6: What cannot be checked at compile time should be checkable at run time
    * P.7: Catch run-time errors early
    * P.8: Don’t leak any resources
    * P.9: Don’t waste time or space
    * P.10: Prefer immutable data to mutable data
    * P.11: Encapsulate messy constructs, rather than spreading through the code
    * P.12: Use supporting tools as appropriate
    * P.13: Use support libraries as appropriate
  * [I: Interfaces](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-interfaces)
    * I.1: Make interfaces explicit
    * I.2: Avoid non-const global variables
    * I.3: Avoid singletons
    * I.4: Make interfaces precisely and strongly typed
    * I.5: State preconditions (if any)
    * I.6: Prefer Expects() for expressing preconditions
    * I.7: State postconditions
    * I.8: Prefer Ensures() for expressing postconditions
    * I.9: If an interface is a template, document its parameters using concepts
    * I.10: Use exceptions to signal a failure to perform a required task
    * I.11: Never transfer ownership by a raw pointer (T*) or reference (T&)
    * I.12: Declare a pointer that must not be null as not_null
    * I.13: Do not pass an array as a single pointer
    * I.22: Avoid complex initialization of global objects
    * I.23: Keep the number of function arguments low
    * I.24: Avoid adjacent parameters that can be invoked by the same arguments in either order with different meaning
    * I.25: Prefer empty abstract classes as interfaces to class hierarchies
    * I.26: If you want a cross-compiler ABI, use a C-style subset
    * I.27: For stable library ABI, consider the Pimpl idiom
    * I.30: Encapsulate rule violations
  * [F: Functions](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-functions)
  * [C: Classes and class hierarchies](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-class)
  * [Enum: Enumerations](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-enum)
  * [R: Resource management](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-resource)
  * [ES: Expressions and statements](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-expr)
  * [Per: Performance](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-performance)
  	* Per.1: Don’t optimize without reason
  	* Per.2: Don’t optimize prematurely
  	* Per.3: Don’t optimize something that’s not performance critical
  	* Per.4: Don’t assume that complicated code is necessarily faster than simple code
  	* Per.5: Don’t assume that low-level code is necessarily faster than high-level code
  	* Per.6: Don’t make claims about performance without measurements
  	* Per.7: Design to enable optimization
  	* Per.10: Rely on the static type system
  	* Per.11: Move computation from run time to compile time
  	* Per.12: Eliminate redundant aliases
  	* Per.13: Eliminate redundant indirections
  	* Per.14: Minimize the number of allocations and deallocations
  	* Per.15: Do not allocate on a critical branch
  	* Per.16: Use compact data structures
  	* Per.17: Declare the most used member of a time-critical struct first
  	* Per.18: Space is time
  	* Per.19: Access memory predictably
  	* Per.30: Avoid context switches on the critical path
  * [CP: Concurrency and parallelism](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-concurrency)
  	* CP.1: Assume that your code will run as part of a multi-threaded program
  	* CP.2: Avoid data races
  	* CP.3: Minimize explicit sharing of writable data
  	* CP.4: Think in terms of tasks, rather than threads
  	* CP.8: Don’t try to use volatile for synchronization
  	* CP.9: Whenever feasible use tools to validate your concurrent code
  	* See also:
  	* CP.con: Concurrency
  		* CP.20: Use RAII, never plain lock()/unlock()
  		* CP.21: Use std::lock() or std::scoped_lock to acquire multiple mutexes
  		* CP.22: Never call unknown code while holding a lock (e.g., a callback)
  		* CP.23: Think of a joining thread as a scoped container
  		* CP.24: Think of a thread as a global container
  		* CP.25: Prefer gsl::joining_thread over std::thread
  		* CP.26: Don’t detach() a thread
  		* CP.31: Pass small amounts of data between threads by value, rather than by reference or pointer
  		* CP.32: To share ownership between unrelated threads use shared_ptr
  		* CP.40: Minimize context switching
  		* CP.41: Minimize thread creation and destruction
  		* CP.42: Don’t wait without a condition
  		* CP.43: Minimize time spent in a critical section
  		* CP.44: Remember to name your lock_guards and unique_locks
  		* CP.50: Define a mutex together with the data it guards. Use synchronized_value\<T> where possible
  	* CP.coro: Coroutines
  	* CP.par: Parallelism
  	* CP.mess: Message passing
  	* CP.vec: Vectorization
  	* CP.free: Lock-free programming
  	* CP.etc: Etc. concurrency rules
  * [E: Error handling](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-errors)
  * [Con: Constants and immutability](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-const)
  * [T: Templates and generic programming](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-templates)
  * [CPL: C-style programming](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-cpl)
  * [SF: Source files](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-source)
  * [SL: The Standard Library](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-stdlib)
	* Supporting sections:
		* A: Architectural ideas
		* NR: Non-Rules and myths
		* RF: References
		* Pro: Profiles
		* GSL: Guidelines support library
		* NL: Naming and layout rules
		* FAQ: Answers to frequently asked questions
		* Appendix A: Libraries
		* Appendix B: Modernizing code
		* Appendix C: Discussion
		* Appendix D: Supporting tools
		* Glossary
		* To-do: Unclassified proto-rules
	* You can sample rules for specific language features:
		* assignment: regular types – prefer initialization – copy – move – other operations – default
		* class: data – invariant – members – helpers – concrete types – ctors, =, and dtors – hierarchy – operators
		* concept: rules – in generic programming – template arguments – semantics
		* constructor: invariant – establish invariant – throw – default – not needed – explicit – delegating – virtual
		* derived class: when to use – as interface – destructors – copy – getters and setters – multiple inheritance – overloading – slicing – dynamic_cast
		* destructor: and constructors – when needed? – must not fail
		* exception: errors – throw – for errors only – noexcept – minimize try – what if no exceptions?
		* for: range-for and for – for and while – for-initializer – empty body – loop variable – loop variable type ???
		* function: naming – single operation – no throw – arguments – argument passing – multiple return values – pointers – lambdas
		* inline: small functions – in headers
		* initialization: always – prefer {} – lambdas – in-class initializers – class members – factory functions
		* lambda expression: when to use
		* operator: conventional – avoid conversion operators – and lambdas
		* public, private, and protected: information hiding – consistency – protected
		* static_assert: compile-time checking – and concepts
		* struct: for organizing data – use if no invariant – no private members
		* template: abstraction – containers – concepts
		* unsigned: and signed – bit manipulation
		* virtual: interfaces – not virtual – destructor – never fail

### [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)

### Effective C++
* [学习笔记之Effective C++ 2nd Edition - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2011/04/24/1930631.html)
* [Effective C++学习笔记](https://mp.weixin.qq.com/s/Sn-AeA41-ZjLzCMtmNnx_A)

### More Effective C++
* [35 个 More Effective C++ 改善编程与设计的最佳方法 | 原力计划](https://mp.weixin.qq.com/s/PQbkpjUScbYIywo4tsIdqw)

## C

* [在C语言中如何高效地复制和连接字符串？](https://mp.weixin.qq.com/s/qhbIb_Th1RyOyYBDfef1BQ)
  * https://developers.redhat.com/blog/2019/08/12/efficient-string-copying-and-concatenation-in-c/
* [const 并不能加快 C 代码的运行速度？](https://mp.weixin.qq.com/s/coeuXmY81c4WH_cJ3nsxCg)
  * https://theartofmachinery.com/2019/08/12/c_const_isnt_for_performance.html
* [C 语言结构体成员赋值的深拷贝和浅拷贝 (qq.com)](https://mp.weixin.qq.com/s/ItjirJ4SrMX2H22ig_laaQ)
* [C 语言未初始化的局部变量是多少？ (qq.com)](https://mp.weixin.qq.com/s/_JljAFBK_1UlnPgIGkKsjg)
* [C 语言发展史的点点滴滴 (qq.com)](https://mp.weixin.qq.com/s/NInTU_CagWlCEfhWhgYeOA)
* [这几道 C/C++ 题涉及你的知识盲区？](https://mp.weixin.qq.com/s/0lWx9M8J5Xa2Mo9jLRdG-g)
  * 8个C语言面试题，涉及指针、运算、函数、内存，看看你能做出几个
* [C语言中的“三字母词”坑了工程师](https://mp.weixin.qq.com/s/dsV2rYG6cEJI7IlLNSwwcg)
  * https://blog.csdn.net/daheiantian/article/details/6095507
  * "??/"会被编译器当作 /，变成C语言的换行符（多行代码连接符）。于是这段代码等同于// 注释语句 a = b+c ;就会被注释掉。

## C++

* [最好的 5 个 C++ 网站](https://mp.weixin.qq.com/s/v3PoPBYI3uJAsQeqQQQlfA)
  * [cppreference](https://en.cppreference.com/w/)
    * cppreference 即 C++ 参考手册，这个网站始终是我的首选，因为它非常简洁，可读性也很强，不但更新及时（已经到 C++20 了），还提供了很好的示例。
  * [LearnCpp](http://www.learncpp.com/)
    * 这可以说是最好的 C++ 教程网站了，组织结构非常好，而且内容丰富、易于理解（涵盖面很广，讲解也很细致），会进行定期更新，并增加一些新的主题。毫不夸张的说，它就像一本 C++ 在线书籍。
  * [Cplusplus](http://www.cplusplus.com/)
    * 这也是一个学习 C++ 的优秀网站，除了提供相应的教程之外，还有一个很棒的论坛。和其它网站相比，它的价值更多体现在参考上，因为里面解释了许多编程概念，如果对某个特定的东西感到困惑，那么这些概念将会很有帮助。（吐槽一下，更新不及时！）
  * [TutorialsPoint](https://www.tutorialspoint.com/cplusplus/index.htm)
    * Tutorialspoint 是一个顶级网站，之所以这么说，是因为你想学的任何技术（包括 C++），它几乎都提供了详细的教程。保存好就对了，超级有用。（顺便再介绍一个 GeeksForGeeks）
  * [Awesome C++](https://github.com/fffaraz/awesome-cpp)
    * 想必很多人都知道 GitHub 上的 Awesome-XXX 系列的资源整理，awesome-cpp 就是 fffaraz 发起维护的 C++ 资源列表，内容包括：标准库、Web 应用框架、人工智能、数据库、图片处理、机器学习、日志、代码分析等。这个嘛，可以用到老 O(∩_∩)O哈哈~！
* [万字长文解析C++ 基础知识！初学者必看的一篇 (qq.com)](https://mp.weixin.qq.com/s/w7sKDO-YkfR2ZRwKyam4Pw)
  * C++ 注释
  * C++ 数据类型
    * 基本的内置类型
    * typedef 声明
    * 枚举类型
  * C++ 变量作用域
    * 局部变量
    * 全局变量
    * 初始化局部变量和全局变量
  * C++ 常量
    * 整数常量
    * 浮点常量
    * 布尔常量
    * 字符常量
    * 字符串常量
    * 定义常量
      * #define 预处理器
      * const 关键字
  * C++ 修饰符类型
  * C++ 中的类型限定符
  * C++ 存储类
    * auto 存储类
    * register 存储类
    * static 存储类
    * extern 存储类
    * mutable 存储类
  * C++ 运算符
    * 算术运算符
    * 关系运算符
    * 逻辑运算符
    * 位运算符
    * 赋值运算符
    * 杂项运算符
    * C++ 中的运算符优先级
* [C/C++ PK 各大编程语言](https://mp.weixin.qq.com/s/zTuPyQRkjkVWp_KIjMh_Kw)
* [C++ 后端开发路线](https://mp.weixin.qq.com/s/QvFQEjUPEw_2zexaZi6GNQ)

### Basics

* [<bits/stdc++.h> in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/bitsstdc-h-c/)
  * It is basically a header file that includes every standard library. In programming contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
In programming contests, people do focus more on finding the algorithm to solve a problem than on software engineering. From, software engineering perspective, it is a good idea to minimize the include. If you use it actually includes a lot of files, which your program may not need, thus increases both compile time and program size unnecessarily.
* [一个合格的ACMer的代码当中，都藏着哪些秘密？ (qq.com)](https://mp.weixin.qq.com/s/0_qWix8jARKulLFKUR5UNg)

#### Compiler

* [C++17 - Wikipedia](https://en.wikipedia.org/wiki/C%2B%2B17)
	* Compiler support
		* GCC has had complete support for C++17 language features since version 8.[48]
		* Clang 5 and later supports all C++17 language features.[49]
		* Visual Studio 2017 15.8 (MSVC 19.15) and later supports all C++17 language features.[50][51]

##### [GCC](https://gcc.gnu.org/)

* GCC, the GNU Compiler Collection - GNU Project
* [Makefile相关资料 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2010/10/08/1846067.html)
* [[ZZ]C++编译器—gcc的用法 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2010/10/08/1845888.html)
* [[ZZ]make命令与makefile文件的写法 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2010/10/08/1846070.html)
* [C++ Standards Support in GCC - GNU Project](https://gcc.gnu.org/projects/cxx-status.html#cxx17)
	* C++17 Support in GCC
		* GCC has almost full support for the previous revision of the C++ standard, which was published in 2017. Some library features are missing or incomplete, as described in the library documentation.
		* C++17 features are available since GCC 5. This mode is the default in GCC 11; it can be explicitly selected with the -std=c++17 command-line flag, or -std=gnu++17 to enable GNU extensions as well.
* [CMake - Wikipedia](https://en.wikipedia.org/wiki/CMake)
	* [CMake Tutorial — CMake 3.23.0-rc2 Documentation](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
	* [Examples | CMake](https://cmake.org/examples/)
* [GDB (Step by Step Introduction) - GeeksforGeeks](https://www.geeksforgeeks.org/gdb-step-by-step-introduction/)

#### Data Types

* [Data Type Ranges | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170)
* [【ZZ】C++11之统一初始化语法 | 桃子的博客志 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/8674208.html)
* [std::size_t - cppreference.com](https://en.cppreference.com/w/cpp/types/size_t)
	* std::size_t is the unsigned integer type of the result of the sizeof operator as well as the sizeof... operator and the alignof operator (since C++11).
	* The bit width of std::size_t is not less than 16.(since C++11)
* [Wide character - Wikipedia](https://en.wikipedia.org/wiki/Wide_character)
  * A wide character is a computer character datatype that generally has a size greater than the traditional 8-bit character. The increased datatype size allows for the use of larger coded character sets.
  * Programming specifics
    * The C and C++ standard libraries include a number of facilities for dealing with wide characters and strings composed of them. The wide characters are defined using datatype wchar_t, which in the original C90 standard was defined as
    * "an integral type whose range of values can represent distinct codes for all members of the largest extended character set specified among the supported locales" (ISO 9899:1990 §4.1.5)
    * Both C and C++ introduced fixed-size character types char16_t and char32_t in the 2011 revisions of their respective standards to provide unambiguous representation of 16-bit and 32-bit Unicode transformation formats, leaving wchar_t implementation-defined. The ISO/IEC 10646:2003 Unicode standard 4.0 says that:
    * "The width of wchar_t is compiler-specific and can be as small as 8 bits. Consequently, programs that need to be portable across any C or C++ compiler should not use wchar_t for storing Unicode text. The wchar_t type is intended for storing compiler-defined wide characters, which may be Unicode characters in some compilers."[3]
  * [wchar_t - C++ Reference](https://www.cplusplus.com/reference/cwchar/wchar_t)
    * Wide character
    * Type whose range of values can represent distinct codes for all members of the largest extended character set specified among the supported locales.
    * In C++, wchar_t is a distinct fundamental type (and thus it is not defined in /<cwchar/> nor any other header).
    * In C, this is a typedef of an integral type.
  * [Fundamental types - cppreference.com](https://en.cppreference.com/w/cpp/language/types)
    * wchar_t - type for wide character representation (see wide strings). Required to be large enough to represent any supported character code point (32 bits on systems that support Unicode. A notable exception is Windows, where wchar_t is 16 bits and holds UTF-16 code units) It has the same size, signedness, and alignment as one of the integer types, but is a distinct type.
  * [char, wchar_t, char8_t, char16_t, char32_t | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/char-wchar-t-char16-t-char32-t?view=msvc-160)
    * The types char, wchar_t, char8_t, char16_t, and char32_t are built-in types that represent alphanumeric characters, non-alphanumeric glyphs, and non-printing characters.
    * The wchar_t type is an implementation-defined wide character type. In the Microsoft compiler, it represents a 16-bit wide character used to store Unicode encoded as UTF-16LE, the native character type on Windows operating systems. The wide character versions of the Universal C Runtime (UCRT) library functions use wchar_t and its pointer and array types as parameters and return values, as do the wide character versions of the native Windows API.
	* [c++ - how to convert char array to wchar_t array? - Stack Overflow](https://stackoverflow.com/questions/3074776/how-to-convert-char-array-to-wchar-t-array)
		* [mbstowcs_s, _mbstowcs_s_l | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l?view=msvc-170)
    ```c++
    #include <iostream>
    #include <stdlib.h>
    #include <string>

    using namespace std;
    using namespace System;

    int main()
    {
        char *orig = "Hello, World!";
        cout << orig << " (char *)" << endl;

        // Convert to a wchar_t*
        size_t origsize = strlen(orig) + 1;
        const size_t newsize = 100;
        size_t convertedChars = 0;
        wchar_t wcstring[newsize];
        mbstowcs_s(&convertedChars, wcstring, origsize, orig, _TRUNCATE);
        wcscat_s(wcstring, L" (wchar_t *)");
        wcout << wcstring << endl;
    }
    ```
  * [Predefined macros | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-160)
    * _NATIVE_WCHAR_T_DEFINED Defined as 1 when the /Zc:wchar_t compiler option is set. Otherwise, undefined.
    * [/Zc:wchar_t (wchar_t Is Native Type) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/build/reference/zc-wchar-t-wchar-t-is-native-type?view=msvc-160)
      * Parse wchar_t as a built-in type according to the C++ standard.
* [谈一谈 C++ 中的值的类型 (qq.com)](https://mp.weixin.qq.com/s/MQNIkeS3eMUmaezyUL8ZkQ)

##### [struct](https://en.cppreference.com/w/cpp/keyword/struct)

* C++ keywords: struct
	* [declaration of a compound type](https://en.cppreference.com/w/cpp/language/class)
	* [declaration of a scoped enumeration type (since C++11)](https://en.cppreference.com/w/cpp/language/enum)
	* If a function or a variable exists in scope with the name identical to the name of a non-union class type, struct can be prepended to the name for disambiguation, resulting in an [elaborated type specifier](https://en.cppreference.com/w/cpp/language/elaborated_type_specifier)
* [Struct declaration - cppreference.com](https://en.cppreference.com/w/c/language/struct)
	* A struct is a type consisting of a sequence of members whose storage is allocated in an ordered sequence (as opposed to union, which is a type consisting of a sequence of members whose storage overlaps).
* [Struct and union initialization - cppreference.com](https://en.cppreference.com/w/c/language/struct_initialization)
```c++
#include <stdio.h>
#include <time.h>
 
int main(void)
{
    char buff[70];
    // designated initializers simplify the use of structs whose
    // order of members is unspecified
    struct tm my_time = { .tm_year=2012-1900, .tm_mon=9, .tm_mday=9,
                          .tm_hour=8, .tm_min=10, .tm_sec=20 };
    strftime(buff, sizeof buff, "%A %c", &my_time);
    puts(buff);
}
```
* [C/C++ 结构体就这样被攻克了！](https://mp.weixin.qq.com/s/-RoBZ9Gge-6HtYH8tUS8xw)
  * 结构体的声明与定义
    * 声明
    * 定义
    * 访问结构体成员
    * 初始化结构体
    * 对齐
  * 结构体嵌套
  * 结构体数组
  * 结构体指针
  * 传递结构体信息
    * 传递结构体变量
    * 传递指向结构体变量的指针
  * 动态申请结构体
  * 实战：建立一个图书馆数据库
  * 单链表
    * 在单链表中插入元素
    * 搜索单链表
    * 插入结点到指定位置
    * 删除结点
  * 内存池
  * typedef
    * 给数据类型起别名
    * 结构体的搭档
    * 进阶
  * 共用体
    * 声明
    * 初始化
  * 枚举
  * 位域

##### [Enumeration](https://en.cppreference.com/w/cpp/language/enum)

* An enumeration is a distinct type whose value is restricted to a range of values (see below for details), which may include several explicitly named constants ("enumerators"). The values of the constants are values of an integral type known as the underlying type of the enumeration.
* Unscoped enumerations
	* `enum Color { red, green, blue };`
* Scoped enumerations
	* `enum class Color { red, green = 20, blue };`

##### [decltype](https://en.cppreference.com/w/cpp/language/decltype)

* Inspects the declared type of an entity or the type and value category of an expression.
* Keywords decltype
	* [decltype specifier](https://en.cppreference.com/w/cpp/language/decltype) (since C++11)
	* [decltype(auto)](https://en.cppreference.com/w/cpp/language/auto) (since C++14)

##### Literals

* Literals are the tokens of a C++ program that represent constant values embedded in the source code.
	* [integer literals](https://en.cppreference.com/w/cpp/language/integer_literal) are decimal, octal, hexadecimal or binary numbers of integer type.
		* Allows values of integer type to be used in expressions directly.
		* (no suffix)	
			* int
			* long int
			* long long int (since C++11)
		* u or U	
			* unsigned int
			* unsigned long int
			* unsigned long long int (since C++11)
		* l or L	
			* long int
			* long long int (since C++11)
		* both l/L and u/U	
			* unsigned long int
			* unsigned long long int (since C++11)
		* ll or LL	
			* long long int (since C++11)
		* both ll/LL and u/U	
			* unsigned long long int (since C++11)
		* z or Z	
			* the signed version of std::size_t (since C++23)
		* both z/Z and u/U	
			* std::size_t (since C++23)
	* [character literals](https://en.cppreference.com/w/cpp/language/character_literal) are individual characters of type
		* char or wchar_t
		* char16_t or char32_t(since C++11)
		* char8_t(since C++20)
	* [floating-point literals](https://en.cppreference.com/w/cpp/language/floating_literal) are values of type float, double, or long double
		* suffix, if present, is one of f, F, l, or L. The suffix determines the type of the floating-point literal:
			* (no suffix) defines double
			* f F defines float
			* l L defines long double
			* Optional single quotes (') may be inserted between the digits as a separator; they are ignored during compilation.(since C++14)
		* [为什么将 0.1f 改为 0 会使性能降低 10 倍？](https://mp.weixin.qq.com/s/bMacxnC_JBuqFDz8k2fp3w)
			* http://cenalulu.github.io/linux/about-denormalized-float-number/
	* [string literals](https://en.cppreference.com/w/cpp/language/string_literal) are sequences of characters of type
		* const char[] or const wchar_t[]
		* const char16_t[] or const char32_t[](since C++11)
		* const char8_t[](since C++20)
	* [boolean literals](https://en.cppreference.com/w/cpp/language/bool_literal) are values of type bool, that is true and false
	* [nullptr](https://en.cppreference.com/w/cpp/language/nullptr) is the pointer literal which specifies a null pointer value
	* [user-defined literals](https://en.cppreference.com/w/cpp/language/user_literal) are constant values of user-specified type(since C++11)
	* [NL.11: Make literals readable](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#nl11-make-literals-readable)
		* Reason Readability.
		* Example Use digit separators to avoid long strings of digits
		```c++
		auto c = 299'792'458; // m/s2
		auto q2 = 0b0000'1111'0000'0000;
		auto ss_number = 123'456'7890;
		```
		* Example Use literal suffixes where clarification is needed
		```c++
		auto hello = "Hello!"s; // a std::string
		auto world = "world";   // a C-style string
		auto interval = 100ms;  // using <chrono>
		```
		* Note Literals should not be sprinkled all over the code as “magic constants”, but it is still a good idea to make them readable where they are defined. It is easy to make a typo in a long string of integers.
		* Enforcement Flag long digit sequences. The trouble is to define “long”; maybe 7.

##### [Type conversions](https://www.cplusplus.com/doc/tutorial/typecasting/)
 
* Implicit conversion
	* [C.164: Avoid implicit conversion operators](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c164-avoid-implicit-conversion-operators)
		* Reason 
			* Implicit conversions can be essential (e.g., double to int) but often cause surprises (e.g., String to C-style string).
		* Note 
			* Prefer explicitly named conversions until a serious need is demonstrated. By “serious need” we mean a reason that is fundamental in the application domain (such as an integer to complex number conversion) and frequently needed. Do not introduce implicit conversions (through conversion operators or non-explicit constructors) just to gain a minor convenience.
* Implicit conversions with classes
* Keyword explicit
	* [explicit specifier - cppreference.com](https://en.cppreference.com/w/cpp/language/explicit)
		* expression	-	contextually converted constant expression of type bool
			1) Specifies that a constructor or conversion function (since C++11) or deduction guide (since C++17) is explicit, that is, it cannot be used for implicit conversions and copy-initialization.
			2) The explicit specifier may be used with a constant expression. The function is explicit if and only if that constant expression evaluates to true. (since C++20)
		* The explicit specifier may only appear within the decl-specifier-seq of the declaration of a constructor or conversion function (since C++11) within its class definition.
* [如何避免类构造函数中的隐式转换](https://mp.weixin.qq.com/s/VrMHxOwDkzTIfPFXVuaOJw)
	* 为了避免这种情况的发生，C++提供了explicit关键字，通过在构造函数前加上该关键字可以避免隐式类型转换。当然，explicit也有其自身的生效范围。如：
	* explicit只能对具有一个参数的构造函数有效。如果有多个可能不生效
	* 如果构造函数存在多个参数，那么需要将其余的参数以默认值参数的方式使用。这样explicit关键字将继续生效。
* Type casting
	* Unrestricted explicit type-casting allows to convert any pointer into any other pointer type, independently of the types they point to. The subsequent call to member result will produce either a run-time error or some other unexpected results.
	* In order to control these types of conversions between classes, we have four specific casting operators: dynamic_cast, reinterpret_cast, static_cast and const_cast. Their format is to follow the new type enclosed between angle-brackets (<>) and immediately after, the expression to be converted between parentheses.
		* dynamic_cast <new_type> (expression)
		* reinterpret_cast <new_type> (expression)
		* static_cast <new_type> (expression)
		* const_cast <new_type> (expression)
	* The traditional type-casting equivalents to these expressions would be:
		* (new_type) expression
		* new_type (expression)
	* but each one with its own special characteristics
* [dynamic_cast conversion - cppreference.com](https://en.cppreference.com/w/cpp/language/dynamic_cast)
	* Safely converts pointers and references to classes up, down, and sideways along the inheritance hierarchy.
	* If the cast is successful, dynamic_cast returns a value of type new-type. If the cast fails and new-type is a pointer type, it returns a null pointer of that type. If the cast fails and new-type is a reference type, it throws an exception that matches a handler of type std::bad_cast.
```c++
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell {
private:
    string scrollName;
public:
    Spell(): scrollName("") { }
    Spell(string name): scrollName(name) { }
    virtual ~Spell() { }
    string revealScrollName() {
        return scrollName;
    }
};

class Fireball : public Spell {
private: int power;
public:
    Fireball(int power): power(power) { }
    void revealFirepower(){
        cout << "Fireball: " << power << endl;
    }
};

class Frostbite : public Spell {
private: int power;
public:
    Frostbite(int power): power(power) { }
    void revealFrostpower(){
        cout << "Frostbite: " << power << endl;
    }
};

class Thunderstorm : public Spell {
private: int power;
public:
    Thunderstorm(int power): power(power) { }
    void revealThunderpower(){
        cout << "Thunderstorm: " << power << endl;
    }
};

class Waterbolt : public Spell {
private: int power;
public:
    Waterbolt(int power): power(power) { }
    void revealWaterpower(){
        cout << "Waterbolt: " << power << endl;
    }
};

class SpellJournal {
public:
    static string journal;
    static string read() {
        return journal;
    }
};
string SpellJournal::journal = "";

void counterspell(Spell *spell)
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    if (auto* fb = dynamic_cast<Fireball*>(spell)) {
        fb->revealFirepower();
    }
    else if (auto* fb = dynamic_cast<Frostbite*>(spell)) {
        fb->revealFrostpower();
    }
    else if (auto* ts = dynamic_cast<Thunderstorm*>(spell)) {
        ts->revealThunderpower();
    }
    else if (auto* wb = dynamic_cast<Waterbolt*>(spell)) {
        wb->revealWaterpower();
    }
    else {
        const auto spellN = spell->revealScrollName();
        const auto spellJ = SpellJournal::read();
        const auto nSpellN = spellN.length();
        const auto nSpellJ = spellJ.length();
        // pay attention to the size of vector
        vector<vector<int> > vResult(nSpellN + 1, vector<int>(nSpellJ + 1, 0));

        for (auto i = 1; i <= nSpellN; ++ i) {
            for (auto j = 1; j <= nSpellJ; ++ j) {
                if (spellN.at(i - 1) == spellJ.at(j - 1)) {
                    vResult[i][j] = vResult[i - 1][j - 1] + 1;
                }
                else {
                    vResult[i][j] = max(vResult[i - 1][j], vResult[i][j - 1]);
                }
            }
        }

        cout << vResult[nSpellN][nSpellJ] << endl;
    }
}

class Wizard {
public:
    Spell *cast()
    {
        Spell *spell;
        string s; cin >> s;
        int power; cin >> power;
        if(s == "fire") {
            spell = new Fireball(power);
        }
        else if(s == "frost") {
            spell = new Frostbite(power);
        }
        else if(s == "water") {
            spell = new Waterbolt(power);
        }
        else if(s == "thunder") {
            spell = new Thunderstorm(power);
        }
        else {
            spell = new Spell(s);
            cin >> SpellJournal::journal;
        }
        return spell;
    }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}
```
* [static_cast conversion - cppreference.com](https://en.cppreference.com/w/cpp/language/static_cast)
	* Converts between types using a combination of implicit and user-defined conversions.
* [reinterpret_cast conversion - cppreference.com](https://en.cppreference.com/w/cpp/language/reinterpret_cast)
	* Converts between types by reinterpreting the underlying bit pattern.
* [const_cast conversion - cppreference.com](https://en.cppreference.com/w/cpp/language/const_cast)
	* Converts between types with different cv-qualification.
	* Syntax
		* const_cast < new_type > ( expression )		
	* Returns a value of type new_type.
	* Explanation
		* Only the following conversions can be done with const_cast. In particular, only const_cast may be used to cast away (remove) constness or volatility.
			1) Two possibly multilevel pointers to the same type may be converted between each other, regardless of cv-qualifiers at each level.
			2) lvalue of any type T may be converted to a lvalue or rvalue reference to the same type T, more or less cv-qualified. Likewise, a prvalue of class type or an xvalue of any type may be converted to a more or less cv-qualified rvalue reference. The result of a reference const_cast refers to the original object if expression is a glvalue and to the materialized temporary otherwise (since C++17).
			3) Same rules apply to possibly multilevel pointers to data members and possibly multilevel pointers to arrays of known and unknown bound (arrays to cv-qualified elements are considered to be cv-qualified themselves) (since C++17)
			4) null pointer value may be converted to the null pointer value of new_type
		* As with all cast expressions, the result is:
			* an lvalue if new_type is an lvalue reference type or an rvalue reference to function type;
			* an xvalue if new_type is an rvalue reference to 
			type;
			* a prvalue otherwise.
	* [const_cast Operator | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/const-cast-operator?view=msvc-160)
		* Removes the const, volatile, and __unaligned attribute(s) from a class.
		* Syntax
			* const_cast \<type-id> (expression)
	* [const_cast examples](https://www.geeksforgeeks.org/const_cast-in-c-type-casting-operators/)
		* C++ supports following 4 types of casting operators:
			1. const_cast
			2. static_cast
			3. dynamic_cast
			4. reinterpret_cast
* [typeid operator - cppreference.com](https://en.cppreference.com/w/cpp/language/typeid)
	* Queries information of a type.
	* Used where the dynamic type of a polymorphic object must be known and for static type identification.
	* There is no guarantee that the same std::type_info instance will be referred to by all evaluations of the typeid expression on the same type, although they would compare equal, std::type_info::hash_code of those type_info objects would be identical, as would be their std::type_index.
* [如何攻克 C++ 中复杂的类型转换？](https://mp.weixin.qq.com/s/lJiva3BUJXUV0cpX1dOe2Q)
  * https://github.com/yingyulou
* [详解 C++ 的隐式类型转换与函数重载！](https://mp.weixin.qq.com/s/S_1KPn_GWJ7hmLH19Dajfg)
  * https://github.com/yingyulou
* [谁说 C++ 的强制类型转换很难懂？](https://mp.weixin.qq.com/s/q3iwtvqMSp6lNC_ZR_SP6A)
  * https://github.com/yingyulou

#### [Constants/Literals](https://www.tutorialspoint.com/cplusplus/cpp_constants_literals.htm)

#### [Modifier Types](https://www.tutorialspoint.com/cplusplus/cpp_modifier_types.htm)

##### const type qualifier

* [cv (const and volatile) type qualifiers - cppreference.com](https://en.cppreference.com/w/cpp/language/cv)
* [P.3: Express intent](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#p3-express-intent)
	* `Reason` Unless the intent of some code is stated (e.g., in names or comments), it is impossible to tell whether the code does what it is supposed to do.
	* `Example`
    ```c++
    gsl::index i = 0;
    while (i < v.size()) {
        // ... do something with v[i] ...
    }
    ```
	* The intent of “just” looping over the elements of v is not expressed here. The implementation detail of an index is exposed (so that it might be misused), and i outlives the scope of the loop, which might or might not be intended. The reader cannot know from just this section of code.
	* Better:
		* `for (const auto& x : v) { /* do something with the value of x */ }`
	* Now, there is no explicit mention of the iteration mechanism, and the loop operates on a reference to const elements so that accidental modification cannot happen. If modification is desired, say so:
		* `for (auto& x : v) { /* modify x */ }`
	* For more details about for-statements, see ES.71. Sometimes better still, use a named algorithm. This example uses the for_each from the Ranges TS because it directly expresses the intent:
		* `for_each(v, [](int x) { /* do something with the value of x */ });`
		* `for_each(par, v, [](int x) { /* do something with the value of x */ });`
	* The last variant makes it clear that we are not interested in the order in which the elements of v are handled.
	* A programmer should be familiar with
		* The guidelines support library
		* The ISO C++ Standard Library
		* Whatever foundation libraries are used for the current project(s)
	* `Note` Alternative formulation: Say what should be done, rather than just how it should be done.Note Some language constructs express intent better than others.Example If two ints are meant to be the coordinates of a 2D point, say so:
		* `draw_line(int, int, int, int);  // obscure`
		* `draw_line(Point, Point);        // clearer`
	* `Enforcement` Look for common patterns for which there are better alternatives
		* simple for loops vs. range-for loops
		* f(T*, int) interfaces vs. f(span\<T>) interfaces
		* loop variables in too large a scope
		* naked new and delete
		* functions with many parameters of built-in types
	* There is a huge scope for cleverness and semi-automated program transformation.
* [Con: Constants and immutability](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#con-constants-and-immutability)
	* You can’t have a race condition on a constant. It is easier to reason about a program when many of the objects cannot change their values. Interfaces that promises “no change” of objects passed as arguments greatly increase readability.
	* Constant rule summary:
		* Con.1: By default, make objects immutable
		* Con.2: By default, make member functions const
		* Con.3: By default, pass pointers and references to consts
		* Con.4: Use const to define objects with values that do not change after construction
		* Con.5: Use constexpr for values that can be computed at compile time
* [Con.2: By default, make member functions const](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#con2-by-default-make-member-functions-const)
	* `Reason` A member function should be marked const unless it changes the object’s observable state. This gives a more precise statement of design intent, better readability, more errors caught by the compiler, and sometimes more optimization opportunities.
	* `Example, bad`
    ```c++
    class Point {
        int x, y;
    public:
        int getx() { return x; }    // BAD, should be const as it doesn't modify the object's state
        // ...
    };

    void f(const Point& pt)
    {
        int x = pt.getx();          // ERROR, doesn't compile because getx was not marked const
    }
    ```
	* `Note` It is not inherently bad to pass a pointer or reference to non-const, but that should be done only when the called function is supposed to modify the object. A reader of code must assume that a function that takes a “plain” T* or T& will modify the object referred to. If it doesn’t now, it might do so later without forcing recompilation.
	* `Note` There are code/libraries that offer functions that declare a T* even though those functions do not modify that T. This is a problem for people modernizing code. You can
		* update the library to be const-correct; preferred long-term solution
		* “cast away const”; best avoided
		* provide a wrapper function
	* Example:
    ```c++
    void f(int* p);   // old code: f() does not modify `*p`
    void f(const int* p) { f(const_cast<int*>(p)); } // wrapper
    ```
	* Note that this wrapper solution is a patch that should be used only when the declaration of f() cannot be modified, e.g. because it is in a library that you cannot modify.
	* `Note` A const member function can modify the value of an object that is mutable or accessed through a pointer member. A common use is to maintain a cache rather than repeatedly do a complicated computation. For example, here is a Date that caches (memoizes) its string representation to simplify repeated uses:
    ```c++
    class Date {
    public:
        // ...
        const string& string_ref() const
        {
            if (string_val == "") compute_string_rep();
            return string_val;
        }
        // ...
    private:
        void compute_string_rep() const;    // compute string representation and place it in string_val
        mutable string string_val;
        // ...
    };
    ```
	* Another way of saying this is that constness is not transitive. It is possible for a const member function to change the value of mutable members and the value of objects accessed through non-const pointers. It is the job of the class to ensure such mutation is done only when it makes sense according to the semantics (invariants) it offers to its users.
	* See also: [Pimpl](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Ri-pimpl)
	* `Enforcement` 
		* Flag a member function that is not marked const, but that does not perform a non-const operation on any member variable.
* [C++ - Why static member function can't be created with 'const' qualifier - Stack Overflow](https://stackoverflow.com/questions/7035356/c-why-static-member-function-cant-be-created-with-const-qualifier)
	* When you apply the const qualifier to a nonstatic member function, it affects the this pointer. For a const-qualified member function of class C, the this pointer is of type C const*, whereas for a member function that is not const-qualified, the this pointer is of type C*.
	* A static member function does not have a this pointer (such a function is not called on a particular instance of a class), so const qualification of a static member function doesn't make any sense.

#### [Storage Classes](https://www.tutorialspoint.com/cplusplus/cpp_storage_classes.htm)

* A storage class defines the scope (visibility) and life-time of variables and/or functions within a C++ Program. These specifiers precede the type that they modify. There are following storage classes, which can be used in a C++ Program
	* auto
	* register
	* static
		* avoid static class members variables (race conditions, almost-global variables)
		* [SF.22: Use an unnamed (anonymous) namespace for all internal/non-exported entities](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf22-use-an-unnamed-anonymous-namespace-for-all-internalnon-exported-entities)
			* Reason 
				* Nothing external can depend on an entity in a nested unnamed namespace. Consider putting every definition in an implementation source file in an unnamed namespace unless that is defining an “external/exported” entity.
			* Example; bad
			```c++
			static int f();
			int g();
			static bool h();
			int k();
			```
			* Example; good
			```c++
			namespace {
				int f();
				bool h();
			}
			int g();
			int k();
			```
			* Example 
				* An API class and its members can’t live in an unnamed namespace; but any “helper” class or function that is defined in an implementation source file should be at an unnamed namespace scope.
	* extern
	* mutable
* [constexpr (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/constexpr-cpp?view=msvc-160)
  * The keyword constexpr was introduced in C++11 and improved in C++14. It means constant expression. Like const, it can be applied to variables: A compiler error is raised when any code attempts to modify the value. Unlike const, constexpr can also be applied to functions and class constructors. constexpr indicates that the value, or return value, is constant and, where possible, is computed at compile time.
  * A constexpr integral value can be used wherever a const integer is required, such as in template arguments and array declarations. And when a value is computed at compile time instead of run time, it helps your program run faster and use less memory.
  * To limit the complexity of compile-time constant computations, and their potential impacts on compilation time, the C++14 standard requires the types in constant expressions to be literal types.
  * [constexpr specifier (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/constexpr)
    * constexpr - specifies that the value of a variable or function can appear in constant expressions
  * [Constant expressions - cppreference.com](https://en.cppreference.com/w/cpp/language/constant_expression)
    * Defines an expression that can be evaluated at compile time.
    * Such expressions can be used as non-type template arguments, array sizes, and in other contexts that require constant expressions
  * [Understanding constexpr specifier in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/understanding-constexper-specifier-in-c/)
    * constexpr is a feature added in C++ 11. The main idea is performance improvement of programs by doing computations at compile time rather than run time. Note that once a program is compiled and finalized by developer, it is run multiple times by users. The idea is to spend time in compilation and save time at run time (similar to template metaprogramming)
    * constexpr vs inline functions
    * constexpr with constructors
    * constexpr vs const
  * [c++ - Difference between constexpr and const - Stack Overflow](https://stackoverflow.com/questions/14116003/difference-between-constexpr-and-const?rq=1)
  * [c++ - constexpr const vs constexpr variables? - Stack Overflow](https://stackoverflow.com/questions/28845058/constexpr-const-vs-constexpr-variables)
  * [c++ - Is it possible to use std::string in a constexpr? - Stack Overflow](https://stackoverflow.com/questions/27123306/is-it-possible-to-use-stdstring-in-a-constexpr)
  	* No. error: the type ‘const string {aka const std::basic_string}’ of constexpr variable ‘constString’ is not literal... because... ‘std::basic_string’ has a non-trivial destructor
  	* However, as of C++17, you can use string_view or char[]
* [C++ keywords: mutable - cppreference.com](https://en.cppreference.com/w/cpp/keyword/mutable)
  * [mutable type specifier](https://en.cppreference.com/w/cpp/language/cv)
    * mutable - permits modification of the class member declared mutable even if the containing object is declared const.
  * [lambda-declarator](https://en.cppreference.com/w/cpp/language/lambda) that removes const qualification from parameters captured by copy (since C++11)
    * mutable: allows body to modify the objects captured by copy, and to call their non-const member functions
  * [C++ mutable keyword - GeeksforGeeks](https://www.geeksforgeeks.org/c-mutable-keyword/)

#### Operators

* [五分钟小知识：为什么说 ++i 的效率比 i++ 高？](https://mp.weixin.qq.com/s/___R-0mc7zezAEVG-1-b5w)
  * 对于内置类型，前置和后置自增或者自减在编译器优化的情况下，两者并无多大差别，而对于自定义类型，如无特别需要，人们似乎更加偏爱前置自增或自减，因为后置自增常常会产生临时对象。
* [Modulo Operator (%) in C/C++ with Examples - GeeksforGeeks](https://www.geeksforgeeks.org/modulo-operator-in-c-cpp-with-examples/)
	* Restrictions of the modulo operator: 
		* 1. The % operator cannot be applied to floating-point numbers i.e float or double. If you try to use the modulo operator with floating-point constants or variables, the compiler will produce a error
		* 2. The sign of the result for modulo operator is machine-dependent for negative operands, as the action takes as a result of underflow or overflow. 
			* -3 % 4 = -3
			* 4 % -2 = 0
			* -3 % -4 = -3

#### Decision Making

* [if-else和switch-case哪个效率更高？看这四张图。](https://mp.weixin.qq.com/s/zZ2O1tamQ6NDMneu9kKZRQ)
  * 只有在case中的条件是连续数字或相隔不大时，编译器会使用表结构做优化，性能优于if-else。
  * 其他情况下，switch-case其实就是逐个分支判断，性能与if-else无异。
  * switch-case中的case只能是常量，而if-else用途更广一些，本文仅讨论分支是常量的情况。
* [while(1) 和 for(;;)有什么区别？](https://mp.weixin.qq.com/s/a9g9PAwgc3oXoQXBvT49bA)
	* 你会发现，除了文件名不同，其余都相同。
	* 当然，这里额外说一下，不同代码、不同编译器，以及不同优化等级，可能最终结果有所差异。
* [C++ keywords: for - cppreference.com](https://en.cppreference.com/w/cpp/keyword/for)
	* [for loop](https://en.cppreference.com/w/cpp/language/for): as the declaration of the loop
		* Executes init-statement once, then executes statement and iteration-expression repeatedly, until the value of condition becomes false. The test takes place before each iteration.
	* [range-based for loop](https://en.cppreference.com/w/cpp/language/range-for): as the declaration of the loop (since C++11)
		* Executes a for loop over a range.
		* Used as a more readable equivalent to the traditional for loop operating over a range of values, such as all elements in a container.
* [Will range based for loop in c++ preserve the index order - Stack Overflow](https://stackoverflow.com/questions/19052026/will-range-based-for-loop-in-c-preserve-the-index-order)
	* Yes the two codes are guaranteed to do the same. Though I don't have a link to the standard you can have a look here. I quote: `You can read that as "for all x in v" going through starting with v.begin() and iterating to v.end()`.
	* [C++11 FAQ](https://www.stroustrup.com/C++11FAQ.html#for)
		* Range-for statement
			* A range for statement allows you to iterate through a "range", which is anything you can iterate through like an STL-sequence defined by a begin() and end(). All standard containers can be used as a range, as can a std::string, an initializer list, an array, and anything for which you define begin() and end(), e.g. an istream. For example:
            ```c++
            void f(vector<double>& v)
            {
                for (auto x : v) cout << x << '\n';
                for (auto& x : v) ++x;  // using a reference to allow us to change the value
            }
            ```
			* You can read that as "for all x in v" going through starting with v.begin() and iterating to v.end(). Another example:
				* `for (const auto x : { 1,2,3,5,8,13,21,34 }) cout << x << '\n';`
			* The begin() (and end()) can be a member to be called x.begin() or a free-standing function to be called begin(x). The member version takes precedence.

#### [Functions](https://www.tutorialspoint.com/cplusplus/cpp_functions.htm)

* [Functions - cppreference.com](https://en.cppreference.com/w/cpp/language/functions)
* [Functions - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/functions/)
* [std::function - cppreference.com](https://en.cppreference.com/w/cpp/utility/functional/function)
  * [function - C++ Reference](https://www.cplusplus.com/reference/functional/function/)
    * Function wrapper
      * Class that can wrap any kind of callable element (such as functions and function objects) into a copyable object, and whose type depends solely on its call signature (and not on the callable element type itself).
      * An object of a function class instantiation can wrap any of the following kinds of callable objects: a function, a function pointer, a pointer to member, or any kind of function object (i.e., an object whose class defines operator(), including closures).
      * A decay copy of the wrapped callable object is stored internally by the object, which becomes the function's target. The specific type of this target callable object is not needed in order to instantiate the function wrapper class; only its call signature.
      * The function object can be copied and moved around, and can be used to directly invoke the callable object with the specified call signature (see member operator()).
      * function objects can also be in a state with no target callable object. In this case they are known as empty functions, and calling them throws a bad_function_call exception.
  * [C++ Library - \<functional>](https://www.tutorialspoint.com/cpp_standard_library/functional.htm)
* [C++ std::function技术浅谈](https://mp.weixin.qq.com/s/v1fz4YVJftuaLxYuJBRLPg)
	* https://blog.csdn.net/xiangbaohui/article/details/106741654
	* std::function是一个函数对象的包装器，std::function的实例可以存储，复制和调用任何可调用的目标，包括：
		* 函数。
		* lamada表达式。
		* 绑定表达式或其他函数对象。
		* 指向成员函数和指向数据成员的指针。
	* 当std::function对象没有初始化任何实际的可调用元素，调用std::function对象将抛出std::bad_function_call异常。
* [std::not_fn - cppreference.com](https://en.cppreference.com/w/cpp/utility/functional/not_fn)
	* Defined in header \<functional>
	* Creates a forwarding call wrapper that returns the negation of the callable object it holds.
	* [\<functional> functions | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/functional-functions?view=msvc-170#not_fn)
		* The not_fn function template takes a callable object and returns a callable object. When the returned callable object is later invoked with some arguments, it passes them to the original callable object, and logically negates the result. It preserves the const qualification and value category behavior of the wrapped callable object. not_fn is new in C++17, and replaces the deprecated std::not1, std::not2, std::unary_negate, and std::binary_negate.
* [进入编译器后，一个函数经历了什么？](https://mp.weixin.qq.com/s/kYilpl4K_XpVDF3gaKoRAQ)
* [C/C++ 中的 argc，argv 到底是什么？](https://mp.weixin.qq.com/s/Mik2n9oLP-PuFNU3lP48Zw)
* [exit(0) vs exit(1) in C/C++ with Examples - GeeksforGeeks](https://www.geeksforgeeks.org/exit0-vs-exit1-in-c-c-with-examples/)
	* Exit Success: Exit Success is indicated by exit(0) statement which means successful termination of the program, i.e. program has been executed without any error or interrupt.
	* Exit Failure: Exit Failure is indicated by exit(1) which means the abnormal termination of the program, i.e. some error or interrupt has occurred. We can use different integer other than 1 to indicate different types of errors.

##### [inline specifier](https://en.cppreference.com/w/cpp/language/inline)

* The inline specifier, when used in a function's decl-specifier-seq, declares the function to be an inline function.
* A function defined entirely inside a class/struct/union definition, whether it's a member function or a non-member friend function, is implicitly an inline function if it is attached to the global module (since C++20).
* A function declared constexpr is implicitly an inline function.
* A deleted function is implicitly an inline function: its (deleted) definition can appear in more than one translation unit.(since C++11)
* The inline specifier, when used in a decl-specifier-seq of a variable with static storage duration (static class member or namespace-scope variable), declares the variable to be an inline variable.
* A static member variable (but not a namespace-scope variable) declared constexpr is implicitly an inline variable.(since C++17)
* [F.5: If a function is very small and time-critical, declare it inline](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f5-if-a-function-is-very-small-and-time-critical-declare-it-inline)
	* `Reason` Some optimizers are good at inlining without hints from the programmer, but don’t rely on it. Measure! Over the last 40 years or so, we have been promised compilers that can inline better than humans without hints from humans. We are still waiting. Specifying inline (explicitly, or implicitly when writing member functions inside a class definition) encourages the compiler to do a better job.
	* `Example`
		* `inline string cat(const string& s, const string& s2) { return s + s2; }`
	* `Exception` Do not put an inline function in what is meant to be a stable interface unless you are certain that it will not change. An inline function is part of the ABI.
	* `Note` constexpr implies inline.
	* `Note` Member functions defined in-class are inline by default.
	* `Exception` Function templates (including member functions of class templates A\<T>::function() and member function templates A::function\<T>()) are normally defined in headers and therefore inline.
* [SF.2: A .h file must not contain object definitions or non-inline function definitions](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf2-a-h-file-must-not-contain-object-definitions-or-non-inline-function-definitions)
	* Reason: Including entities subject to the one-definition rule leads to linkage errors.
	* Example
		* Linking file1.cpp and file2.cpp will give two linker errors.
    ```c++
    // file.h:
    namespace Foo {
        int x = 7;
        int xx() { return x+x; }
    }

    // file1.cpp:
    #include <file.h>
    // ... more ...

     // file2.cpp:
    #include <file.h>
    // ... more ...
    ```
	* Alternative formulation: A .h file must contain only:
		* #includes of other .h files (possibly with include guards)
		* templates
		* class definitions
		* function declarations
		* extern declarations
		* inline function definitions
		* constexpr definitions
		* const definitions
		* using alias definitions
* [Inline Functions - Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html#Inline_Functions)
	* Define functions inline only when they are small, say, 10 lines or fewer.
	* Definition
		* You can declare functions in a way that allows the compiler to expand them inline rather than calling them through the usual function call mechanism.
	* Pros
		* Inlining a function can generate more efficient object code, as long as the inlined function is small. Feel free to inline accessors and mutators, and other short, performance-critical functions.
	* Cons
		* Overuse of inlining can actually make programs slower. Depending on a function's size, inlining it can cause the code size to increase or decrease. Inlining a very small accessor function will usually decrease code size while inlining a very large function can dramatically increase code size. On modern processors smaller code usually runs faster due to better use of the instruction cache.
	* Decision
		* A decent rule of thumb is to not inline a function if it is more than 10 lines long. Beware of destructors, which are often longer than they appear because of implicit member- and base-destructor calls!
		* Another useful rule of thumb: it's typically not cost effective to inline functions with loops or switch statements (unless, in the common case, the loop or switch statement is never executed).
		* It is important to know that functions are not always inlined even if they are declared as such; for example, virtual and recursive functions are not normally inlined. Usually recursive functions should not be inline. The main reason for making a virtual function inline is to place its definition in the class, either for convenience or to document its behavior, e.g., for accessors and mutators.
* [Self-contained Headers - Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html#Self_contained_Headers)
	* When a header declares inline functions or templates that clients of the header will instantiate, `the inline functions and templates must also have definitions in the header, either directly or in files it includes`. Do not move these definitions to separately included header (-inl.h) files; this practice was common in the past, but is no longer allowed. When all instantiations of a template occur in one .cc file, either because they're explicit or because the definition is accessible to only the .cc file, the template definition can be kept in that file.
* [Inline Functions in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/inline-functions-cpp/)
	* Compiler may not perform inlining in such circumstances like:
		* 1) If a function contains a loop. (for, while, do-while)
		* 2) If a function contains static variables.
		* 3) If a function is recursive.
		* 4) If a function return type is other than void, and the return statement doesn’t exist in function body.
		* 5) If a function contains switch or goto statement.
	* Inline functions provide following advantages:
	* Inline function disadvantages:
	* Inline function and classes:
	* What is wrong with macro?
* [Why are C++ inline functions in the header? - Stack Overflow](https://stackoverflow.com/questions/5057021/why-are-c-inline-functions-in-the-header#:~:text=The%20definition%20of%20an%20inline,definition%20in%20a%20header%20file.)
	* The definition of an inline function doesn't have to be in a header file but, because of the one definition rule [(ODR)](https://en.cppreference.com/w/cpp/language/definition) for inline functions, an identical definition for the function must exist in every translation unit that uses it.
	* The easiest way to achieve this is by putting the definition in a header file.
* How to fix compile error "multiple definition of 'utils::var' ... first defined here" ?
	* declare var as `inline var` in namespace utils
	* [c - "Multiple definition", "first defined here" errors - Stack Overflow](https://stackoverflow.com/questions/30821356/multiple-definition-first-defined-here-errors)
	* [c++ - How do inline variables work? - Stack Overflow](https://stackoverflow.com/questions/38043442/how-do-inline-variables-work)

##### [Lambda expressions](https://en.cppreference.com/w/cpp/language/lambda)

* Constructs a [closure](https://en.wikipedia.org/wiki/Closure_(computer_programming)): an unnamed function object capable of capturing variables in scope.
* [Lambda expressions (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/lambda)
	* If auto is used as a type of a parameter or an explicit template parameter list is provided (since C++20), the lambda is a generic lambda. (since C++14)
```c++
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
 
int main()
{
    std::vector<int> c = {1, 2, 3, 4, 5, 6, 7};
    int x = 5;
    c.erase(std::remove_if(c.begin(), c.end(), [x](int n) { return n < x; }), c.end());
 
    std::cout << "c: ";
    std::for_each(c.begin(), c.end(), [](int i){ std::cout << i << ' '; });
    std::cout << '\n';
 
    // the type of a closure cannot be named, but can be inferred with auto
    // since C++14, lambda could own default arguments
    auto func1 = [](int i = 6) { return i + 4; };
    std::cout << "func1: " << func1() << '\n';
 
    // like all callable objects, closures can be captured in std::function
    // (this may incur unnecessary overhead)
    std::function<int(int)> func2 = [](int i) { return i + 4; };
    std::cout << "func2: " << func2(6) << '\n';
 
    constexpr int fib_max {8};
    std::cout << "Emulate `recursive lambda` calls:\nFibonacci numbers: ";
    auto nth_fibonacci = [](int n)
    {
        std::function<int(int, int, int)> fib = [&](int n, int a, int b)
        {
            return n ? fib(n - 1, a + b, a) : b;
        };
        return fib(n, 0, 1);
    };
 
    for (int i{1}; i <= fib_max; ++i)
    {
        std::cout << nth_fibonacci(i) << (i < fib_max ? ", " : "\n");
    }
 
    std::cout << "Alternative approach to lambda recursion:\nFibonacci numbers: ";
    auto nth_fibonacci2 = [](auto self, int n, int a = 0, int b = 1) -> int
    {
        return n ? self(self, n - 1, a + b, a) : b;
    };
 
    for (int i{1}; i <= fib_max; ++i)
    {
        std::cout << nth_fibonacci2(nth_fibonacci2, i) << (i < fib_max ? ", " : "\n");
    }
 
#ifdef __cpp_explicit_this_parameter
    std::cout << "C++23 approach to lambda recursion:\n";
    auto nth_fibonacci3 = [](this auto self, int n, int a = 0, int b = 1)
    {
         return n ? self(n - 1, a + b, a) : b;
    };
 
    for (int i{1}; i <= fib_max; ++i)
    {
        std::cout << nth_fibonacci3(i) << (i < fib_max ? ", " : "\n");
    }
#endif
}
```
* [Lambda expressions in C++ | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-160)
  * In C++11 and later, a lambda expression—often called a lambda—is a convenient way of defining an anonymous function object (a closure) right at the location where it's invoked or passed as an argument to a function. Typically lambdas are used to encapsulate a few lines of code that are passed to algorithms or asynchronous functions. This article defines what lambdas are, and compares them to other programming techniques. It describes their advantages, and provides some basic examples.
* [Lambda expression in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/lambda-expression-in-c/)
* [贯穿 C++ 11 与 C++ 17 的 Lambda 到底是个什么？](https://mp.weixin.qq.com/s/ok5xND2q4kPqBguhcvU42g)
  * https://hackernoon.com/all-about-Lambda-functions-in-cfrom-c11-to-c17-2t1j32qw
* [C++11 Lambda : How to capture local variables inside Lambda ? – thisPointer](https://thispointer.com/c11-lambda-how-to-capture-local-variables-inside-lambda/)
  * Capturing Local Variables by value inside Lambda Function
  * Capturing Local Variables by Reference inside Lambda
  * Capture All Local Variables from outer scope by Value
  * Capture all local variables from outer scope by Reference
  * Mixing capturing by value and Reference
  * Be-aware of capturing local variables by Reference in Lambda
* [c++ - an enclosing-function local variable cannot be referenced in a lambda body unless if it is in capture list - Stack Overflow](https://stackoverflow.com/questions/26903602/an-enclosing-function-local-variable-cannot-be-referenced-in-a-lambda-body-unles)
* [C++ Tutorial => Generic lambdas](https://riptutorial.com/cplusplus/example/1969/generic-lambdas)
	* [c++ - How to use lambda auto parameters in C++11 - Stack Overflow](https://stackoverflow.com/questions/30071453/how-to-use-lambda-auto-parameters-in-c11)
	* [c++ - How does generic lambda work in C++14? - Stack Overflow](https://stackoverflow.com/questions/17233547/how-does-generic-lambda-work-in-c14)
* [Lambda Expressions - Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html#Formatting_Lambda_Expressions)
	* Short lambdas may be written inline as function arguments.
```c++
std::set<int> to_remove = {7, 8, 9};
std::vector<int> digits = {3, 9, 1, 8, 4, 7, 1};
digits.erase(std::remove_if(digits.begin(), digits.end(), [&to_remove](int i) {
               return to_remove.find(i) != to_remove.end();
             }),
             digits.end());
```

###### Lambda capture

* The captures is a comma-separated list of zero or more captures, optionally beginning with the capture-default. The capture list defines the outside variables that are accessible from within the lambda function body. The only capture defaults are
	* & (implicitly capture the used automatic variables by reference) and
	* = (implicitly capture the used automatic variables by copy).
* The syntax of an individual capture in captures is

| identifier | (1) |
| - | - |
| identifier ...	| (2)	 |
| identifier initializer	| (3)	(since C++14) |
| & identifier	| (4)	 |
| & identifier ...	| (5) |	
| & identifier initializer	| (6)	(since C++14) |
| this	| (7)	 |
| * this	| (8)	(since C++17) |
| ... identifier initializer	| (9)	(since C++20) |
| & ... identifier initializer	| (10)	(since C++20) |

* 1) simple by-copy capture
* 2) simple by-copy capture that is a pack expansion
* 3) by-copy capture with an initializer
* 4) simple by-reference capture
* 5) simple by-reference capture that is a pack expansion
* 6) by-reference capture with an initializer
* 7) simple by-reference capture of the current object
* 8) simple by-copy capture of the current object
* 9) by-copy capture with an initializer that is a pack expansion
* 10) by-reference capture with an initializer that is a pack expansion

* If the capture-default is &, subsequent simple captures must not begin with &.
```c++
struct S2 { void f(int i); };
void S2::f(int i)
{
    [&]{};          // OK: by-reference capture default
    [&, i]{};       // OK: by-reference capture, except i is captured by copy
    [&, &i] {};     // Error: by-reference capture when by-reference is the default
    [&, this] {};   // OK, equivalent to [&]
    [&, this, i]{}; // OK, equivalent to [&, i]
}
```
* If the capture-default is =, subsequent simple captures must begin with & or be *this (since C++17) or this (since C++20).
```c++
struct S2 { void f(int i); };
void S2::f(int i)
{
    [=]{};        // OK: by-copy capture default
    [=, &i]{};    // OK: by-copy capture, except i is captured by reference
    [=, *this]{}; // until C++17: Error: invalid syntax
                  // since C++17: OK: captures the enclosing S2 by copy
    [=, this] {}; // until C++20: Error: this when = is the default
                  // since C++20: OK, same as [=]
}
```
* Any capture may appear only once, and its name must be different from any parameter name:
```c++
struct S2 { void f(int i); };
void S2::f(int i)
{
    [i, i] {};        // Error: i repeated
    [this, *this] {}; // Error: "this" repeated (C++17)
 
    [i] (int i) {};   // Error: parameter and capture have the same name
}
```
* [F.50: Use a lambda when a function won’t do (to capture local variables, or to write a local function)](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f50-use-a-lambda-when-a-function-wont-do-to-capture-local-variables-or-to-write-a-local-function)
	* `Reason` Functions can’t capture local variables or be defined at local scope; if you need those things, prefer a lambda where possible, and a handwritten function object where not. On the other hand, lambdas and function objects don’t overload; if you need to overload, prefer a function (the workarounds to make lambdas overload are ornate). If either will work, prefer writing a function; use the simplest tool necessary.
	* `Exception` Generic lambdas offer a concise way to write function templates and so can be useful even when a normal function template would do equally well with a little more syntax. This advantage will probably disappear in the future once all functions gain the ability to have Concept parameters.
	* `Enforcement` Warn on use of a named non-generic lambda (e.g., auto x = [](int i) { /*...*/; };) that captures nothing and appears at global scope. Write an ordinary function instead.
* [F.52: Prefer capturing by reference in lambdas that will be used locally, including passed to algorithms](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f52-prefer-capturing-by-reference-in-lambdas-that-will-be-used-locally-including-passed-to-algorithms)
	* Reason 
		* For efficiency and correctness, you nearly always want to capture by reference when using the lambda locally. This includes when writing or calling parallel algorithms that are local because they join before returning.
	* Discussion 
		* The efficiency consideration is that most types are cheaper to pass by reference than by value.
		* The correctness consideration is that many calls want to perform side effects on the original object at the call site (see example below). Passing by value prevents this.
	* Note 
		* Unfortunately, there is no simple way to capture by reference to const to get the efficiency for a local call but also prevent side effects.
	* Example 
		* Here, a large object (a network message) is passed to an iterative algorithm, and it is not efficient or correct to copy the message (which might not be copyable):
    ```c++
    std::for_each(begin(sockets), end(sockets), [&message](auto& socket)
    {
        socket.send(message);
    });
    ```
	* Example 
		* This is a simple three-stage parallel pipeline. Each stage object encapsulates a worker thread and a queue, has a process function to enqueue work, and in its destructor automatically blocks waiting for the queue to empty before ending the thread.
    ```c++
    void send_packets(buffers& bufs)
    {
        stage encryptor([](buffer& b) { encrypt(b); });
        stage compressor([&](buffer& b) { compress(b); encryptor.process(b); });
        stage decorator([&](buffer& b) { decorate(b); compressor.process(b); });
        for (auto& b : bufs) { decorator.process(b); }
    }  // automatically blocks waiting for pipeline to finish
    ```
	* Enforcement 
		* Flag a lambda that captures by reference, but is used other than locally within the function scope or passed to a function by reference. (Note: This rule is an approximation, but does flag passing by pointer as those are more likely to be stored by the callee, writing to a heap location accessed via a parameter, returning the lambda, etc. The Lifetime rules will also provide general rules that flag escaping pointers and references including via lambdas.)
* [F.53: Avoid capturing by reference in lambdas that will be used non-locally, including returned, stored on the heap, or passed to another thread](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f53-avoid-capturing-by-reference-in-lambdas-that-will-be-used-non-locally-including-returned-stored-on-the-heap-or-passed-to-another-thread)
	* Reason 
		* Pointers and references to locals shouldn’t outlive their scope. Lambdas that capture by reference are just another place to store a reference to a local object, and shouldn’t do so if they (or a copy) outlive the scope.
	* Example, bad
    ```c++
    int local = 42;

    // Want a reference to local.
    // Note, that after program exits this scope,
    // local no longer exists, therefore
    // process() call will have undefined behavior!
    thread_pool.queue_work([&] { process(local); });
    ```
	* Example, good
    ```c++
    int local = 42;
    // Want a copy of local.
    // Since a copy of local is made, it will
    // always be available for the call.
    thread_pool.queue_work([=] { process(local); });
    ```
	* Enforcement
		* (Simple) Warn when capture-list contains a reference to a locally declared variable
		* (Complex) Flag when capture-list contains a reference to a locally declared variable and the lambda is passed to a non-const and non-local context

#### [Strings](https://en.cppreference.com/w/cpp/string)

* The C++ strings library includes support for three general types of strings:
	* std::basic_string - a templated class designed to manipulate strings of any character type.
	* std::basic_string_view (C++17) - a lightweight non-owning read-only view into a subsequence of a string.
	* Null-terminated strings - arrays of characters terminated by a special null character.

##### [std::basic_string](https://en.cppreference.com/w/cpp/string/basic_string) 

* The class template basic_string stores and manipulates sequences of char-like objects, which are non-array objects of trivial standard-layout type. The class is dependent neither on the character type nor on the nature of operations on that type. The definitions of the operations are supplied via the Traits template parameter - a specialization of std::char_traits or a compatible traits class. Traits::char_type and CharT must name the same type; otherwise the program is ill-formed.
* The elements of a basic_string are stored contiguously, that is, for a basic_string s, &*(s.begin() + n) == &*s.begin() + n for any n in \[0, s.size()), or, equivalently, a pointer to s\[0] can be passed to functions that expect a pointer to the first element of a null-terminated (since C++11) CharT\[] array.
* std::basic_string satisfies the requirements of AllocatorAwareContainer, SequenceContainer and ContiguousContainer (since C++17)
* Member functions of std::basic_string are constexpr: it is possible to create and use std::string objects in the evaluation of a constant expression.
* However, std::string objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. (since C++20)

###### Member functions

* [std::basic_string<CharT,Traits,Allocator>::at - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/at)
	* accesses the specified character with bounds checking (public member function)
	* Returns a reference to the character at specified location pos. Bounds checking is performed, exception of type std::out_of_range will be thrown on invalid access.
	* Return value
		* Reference to the requested character.
	* Exceptions
		* Throws std::out_of_range if pos >= size().
	* Complexity
		* Constant.
* [string::append - C++ Reference](https://www.cplusplus.com/reference/string/string/append/)
	* Append to string
		* Extends the string by appending additional characters at the end of its current value:
	* Complexity
		* Unspecified, but generally up to linear in the new string length.
* [string::c_str - C++ Reference](https://www.cplusplus.com/reference/string/string/c_str/)
* [string::compare - C++ Reference](https://www.cplusplus.com/reference/string/string/compare/)
	* Compare strings
		* Compares the value of the string object (or a substring) to the sequence of characters specified by its arguments.
		* The compared string is the value of the string object or -if the signature used has a pos and a len parameters- the substring that begins at its character in position pos and spans len characters.
		* This string is compared to a comparing string, which is determined by the other arguments passed to the function.
* [std::basic_string<CharT,Traits,Allocator>::erase - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/erase)
	* Removes specified characters from the string.
		1) Removes min(count, size() - index) characters starting at index.
		2) Removes the character at position.
		3) Removes the characters in the range \[first, last).
	* [c++ - How to trim a std::string? - Stack Overflow](https://stackoverflow.com/questions/216823/how-to-trim-a-stdstring)
    ```c++
    s.erase(s.find_last_not_of(" \n\r\t")+1);
    ```
* [string::find - C++ Reference](https://www.cplusplus.com/reference/string/string/find/)
	* Find content in string
		* Searches the string for the first occurrence of the sequence specified by its arguments.
		* When pos is specified, the search only includes characters at or after position pos, ignoring any possible occurrences that include characters before pos.
		* Notice that unlike member find_first_of, whenever more than one character is being searched for, it is not enough that just one of these characters match, but the entire sequence must match.
	* [std::basic_string<CharT,Traits,Allocator>::find - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/find)
		* Return value
			* Position of the first character of the found substring or [npos](https://en.cppreference.com/w/cpp/string/basic_string/npos) if no such substring is found.
* [std::basic_string<CharT,Traits,Allocator>::find_last_not_of - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/find_last_not_of)
	* Finds the last character equal to none of the characters in the given character sequence. The search considers only the interval [0, pos]. If the character is not present in the interval, npos will be returned.
	* 1) Finds the last character equal to none of characters in str.
	* 2) Finds the last character equal to none of characters in the range \[s, s+count). This range can include null characters.
	* 3) Finds the last character equal to none of characters in character string pointed to by s. The length of the string is determined by the first null character using Traits::length(s).
	* 4) Finds the last character not equal to ch.
	* 5) Implicitly converts t to a string view sv as if by std::basic_string_view<CharT, Traits> sv = t;, then finds the last character equal to none of characters in sv. This overload participates in overload resolution only if std::is_convertible_v<const StringViewLike&, std::basic_string_view<CharT, Traits>> is true and std::is_convertible_v<const StringViewLike&, const CharT*> is false.
	* In all cases, equality is checked by calling Traits::eq.
* [std::basic_string<CharT,Traits,Allocator>::substr - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/substr)
	* Returns a substring \[pos, pos+count). If the requested substring extends past the end of the string, i.e. the count is greater than size() - pos (e.g. if count == npos), the returned substring is \[pos, [size()](https://en.cppreference.com/w/cpp/string/basic_string/size)).
	* Exceptions
		* [std::out_of_range](https://en.cppreference.com/w/cpp/error/out_of_range) if pos > size()

###### Constants

* [std::basic_string<CharT,Traits,Allocator>::npos - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/npos)
	* static const size_type npos = -1;
	* This is a special value equal to the maximum value representable by the type size_type. The exact meaning depends on context, but it is generally used either as end of string indicator by the functions that expect a string index or as the error indicator by the functions that return a string index.
	* Note
		* Although the definition uses -1, size_type is an unsigned integer type, and the value of npos is the largest positive value it can hold, due to signed-to-unsigned implicit conversion. This is a portable way to specify the largest value of any unsigned type.

###### Non-member functions

* [operator<<,>>(std::basic_string) - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/operator_ltltgtgt)
	* performs stream input and output on strings (function template)
* [std::getline - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/getline)
	* read data from an I/O stream into a string (function template)
	* getline reads characters from an input stream and places them into a string
	* Parameters
		* input	-	the stream to get data from
		* str	-	the string to put the data into
		* delim	-	the delimiter character
	* Return value
		* input
	* Notes
		* When consuming whitespace-delimited input (e.g. int n; std::cin >> n;) any whitespace that follows, including a newline character, will be left on the input stream. Then when switching to line-oriented input, the first line retrieved with getline will be just that whitespace. In the likely case that this is unwanted behaviour, possible solutions include:
			* An explicit extraneous initial call to getline
			* Removing consecutive whitespace with std::cin >> std::ws 
			* Ignoring all leftover characters on the line of input with cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	* [getline (string) - C++ Reference](https://cplusplus.com/reference/string/string/getline/)
		* Get line from stream into string
			* Extracts characters from is and stores them into str until the delimitation character delim is found (or the newline character, '\n', for (2)).
			* The extraction also stops if the end of file is reached in is or if some other error occurs during the input operation.
			* If the delimiter is found, it is extracted and discarded (i.e. it is not stored and the next input operation will begin after it).
			* Note that any content in str before the call is replaced by the newly extracted sequence.
			* Each extracted character is appended to the string as if its member push_back was called.
	* [getline (string) in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/getline-string-c/)
		* The C++ getline() is a standard library function that is used to read a string or a line from an input stream. It is a part of the \<string> header. The getline() function extracts characters from the input stream and appends it to the string object until the delimiting character is encountered. While doing so the previously stored value in the string object str will be replaced by the input string if any.
```c++
#include <string>
#include <iostream>
#include <sstream>
 
int main()
{
    // greet the user
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << ", nice to meet you.\n";
 
    // read file line by line
    std::istringstream input;
    input.str("1\n2\n3\n4\n5\n6\n7\n");
    int sum = 0;
    for (std::string line; std::getline(input, line); ) {
        sum += std::stoi(line);
    }
    std::cout << "\nThe sum is: " << sum << "\n\n";
 
    // use separator to read parts of the line
    std::istringstream input2;
    input2.str("a;b;c;d");
    for (std::string line; std::getline(input2, line, ';'); ) {
        std::cout << line << '\n';
    }
}
```

* Numeric conversions

| [stoi/stol/stoll](https://en.cppreference.com/w/cpp/string/basic_string/stol) | converts a string to a signed integer |
| - | - |
| [stoul/stoull](https://en.cppreference.com/w/cpp/string/basic_string/stoul) | converts a string to an unsigned integer |
| [stof/stod/stold](https://en.cppreference.com/w/cpp/string/basic_string/stof) | converts a string to a floating point value |
| [to_string](https://en.cppreference.com/w/cpp/string/basic_string/to_string) | converts an integral or floating point value to string |
| [to_wstring](https://en.cppreference.com/w/cpp/string/basic_string/to_wstring) | converts an integral or floating point value to wstring |

* [std::to_string - C++ Reference](https://www.cplusplus.com/reference/string/to_string/)
	* Convert numerical value to string
		* Returns a string with the representation of val.
		* Discards any whitespace characters (as identified by calling std::isspace) until the first non-whitespace character is found, then takes as many characters as possible to form a valid base-n (where n=base) integer number representation and converts them to an integer value. 
* [C++ String to float/double and vice-versa](https://www.programiz.com/cpp-programming/string-float-conversion#:~:text=C%2B%2B%20string%20to%20float%20and,convert%20string%20to%20long%20double%20.)
* [c++ - How to convert a string to uint32_t - Stack Overflow](https://stackoverflow.com/questions/57253837/how-to-convert-a-string-to-uint32-t)
	* `static_cast<uint32_t>(std::stoul(str))`

###### Literals

* [std::literals::string_literals::operator""s - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/operator%22%22s)
	* Forms a string literal of the desired type.

###### MISC

* [How to split a string in C/C++, Python and Java? - GeeksforGeeks](https://www.geeksforgeeks.org/how-to-split-a-string-in-cc-python-and-java/)
	* Method 1: Using stringstream API of C++
		* Stringstream object can be initialized using a string object, it automatically tokenizes strings on space char. Just like “cin” stream stringstream allows you to read a string as a stream of words.
    ```c++
    #include <bits/stdc++.h>
    using namespace std;

    // A quick way to split strings separated via spaces.
    void simple_tokenizer(string s)
    {
        stringstream ss(s);
        string word;
        while (ss >> word) {
            cout << word << endl;
        }
    }

    int main(int argc, char const* argv[])
    {
        string a = "How do you do!";
        // Takes only space separated C++ strings.
        simple_tokenizer(a);
        cout << endl;
        return 0;
    }
    ```
	* Method 2: Using C++ find() and substr() APIs.
		* This method is more robust and can parse a string with any delimiter, not just spaces(though the default behavior is to separate on spaces.) The logic is pretty simple to understand from the code below.
    ```c++
    #include <bits/stdc++.h>
    using namespace std;

    void tokenize(string s, string del = " ")
    {
        int start = 0;
        int end = s.find(del);
        while (end != -1) {
            cout << s.substr(start, end - start) << endl;
            start = end + del.size();
            end = s.find(del, start);
        }
        cout << s.substr(start, end - start);
    }
    int main(int argc, char const* argv[])
    {
        // Takes C++ string with any separator
        string a = "Hi$%do$%you$%do$%!";
        tokenize(a, "$%");
        cout << endl;

        return 0;
    }
    ```
	* Method 3: Using temporary string
		* If you are given that the length of the delimiter is 1, then you can simply use a temp string to split the string. This will save the function overhead time in the case of method 2.
    ```c++
    #include <iostream>
    using namespace std;

    void split(string str, char del){
        // declaring temp string to store the curr "word" upto del
        string temp = "";

        for(int i=0; i<(int)str.size(); i++){
            // If cur char is not del, then append it to the cur "word", otherwise
            // you have completed the word, print it, and start a new word.
            if(str[i] != del){
                temp += str[i];
            }
            else{
                cout << temp << " ";
                temp = "";
            }
        }

        cout << temp;
    }

    int main() {

        string str = "geeks_for_geeks"; // string to be split
        char del = '_'; // delimiter around which string is to be split

        split(str, del);

        return 0;
    }
    ```
* [string和c_str()使用时的坑](https://mp.weixin.qq.com/s/2k2fjBUB-P1PpEfP-HJz-Q)
	* 这里主要说两个问题:
		* 1、声明了一个string实例,使用c_str()进行赋值后,可以正常输出c_str()的值,但是直接输出string实例的实现,实际是空字符串
		* 2、在第一个问题后,对string实例进行字符串追加,然后对string和c_str()进行输出.原来对字符串变量被覆盖了.
	* 在使用string中的c_str()进行字符串赋值时,如果后面对string中的char*进行改变.那么c_str()中的值就不在可靠了.
* [c++ - Displaying the address of a string - Stack Overflow](https://stackoverflow.com/questions/9377407/displaying-the-address-of-a-string)
	* If you use &hello it prints the address of the pointer, not the address of the string. Cast the pointer to a void* to use the correct overload of operator<<.
	```c++
	std::cout << "String address = " << static_cast<void*>(hello) << std::endl;
	```
* [使用 C++ 的 StringBuilder 提升 4350% 的性能](https://mp.weixin.qq.com/s/YfY_c4D_kWSth5tETqnhkg)
  * 经常出现客户端打电话抱怨说：你们的程序慢如蜗牛。你开始检查可能的疑点：文件IO，数据库访问速度，甚至查看web服务。但是这些可能的疑点都很正常，一点问题都没有。
  * 你使用最顺手的性能分析工具分析，发现瓶颈在于一个小函数，这个函数的作用是将一个长的字符串链表写到一文件中。
  * 你对这个函数做了如下优化：将所有的小字符串连接成一个长的字符串，执行一次文件写入操作，避免成千上万次的小字符串写文件操作。
  * 这个优化只做对了一半。
  * 你先测试大字符串写文件的速度，发现快如闪电。然后你再测试所有字符串拼接的速度。
  * 好几年。
  * 怎么回事？你会怎么克服这个问题呢？
  * 你或许知道.net程序员可以使用StringBuilder来解决此问题。这也是本文的起点。

##### [std::basic_string_view](https://en.cppreference.com/w/cpp/string/basic_string_view)

* The class template basic_string_view describes an object that can refer to a constant contiguous sequence of char-like objects with the first element of the sequence at position zero.
* [C++17常用新特性(十五)---std::string_view和std::string差异比较](https://mp.weixin.qq.com/s/NxnPG5cVurxlcpNKdVZ-NQ)
	* 1 std::string_view和std::string内存分配的不同
	* 2 std::string_view和std::string的substr()方法性能差异10倍左右
	* 3 总结
		* 在使用 std::string_view时最好遵循以下约束：
		* 如果字符串不需要修改时使用std::string_view
		* std::string_view相对于string来说减少了内存的重新分配和内存拷贝
		* 对于std::string::substr 算法来说string的时间复杂度是线性增长，字符串越长执行时间越长，string_view时间复杂度为常数级。

###### Literals

* [std::literals::string_view_literals::operator""sv - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string_view/operator%22%22sv)
	* Defined in header \<string_view>
	* Creates a string view of a character array literal(function)

##### [Null-terminated byte strings](https://en.cppreference.com/w/cpp/string/byte)

* A null-terminated byte string (NTBS) is a sequence of nonzero bytes followed by a byte with value zero (the terminating null character). Each byte in a byte string encodes one character of some character set. For example, the character array {'\x63', '\x61', '\x74', '\0'} is an NTBS holding the string "cat" in ASCII encoding.
* [std::isdigit - cppreference.com](https://en.cppreference.com/w/cpp/string/byte/isdigit)
	* `int isdigit( int ch );`
	* Checks if the given character is one of the 10 decimal digits: 0123456789.
	* The behavior is undefined if the value of ch is not representable as unsigned char and is not equal to EOF.
	* [Determine if a String Is a Number in C++ | Delft Stack](https://www.delftstack.com/howto/cpp/how-to-determine-if-a-string-is-number-cpp/#:~:text=Use%20std%3A%3Aisdigit%20Method%20to%20Determine%20if%20a%20String%20Is%20a%20Number,-The%20first%20version&text=Namely%2C%20pass%20a%20string%20as,none%20is%20found%20returns%20true.)
		* Use std::isdigit Method to Determine if a String Is a Number
		* Use std::isdigit With std::ranges::all_of to Determine if a String Is a Number
		* Use find_first_not_of Method to Determine if a String Is a Number
* [std::isspace - cppreference.com](https://en.cppreference.com/w/cpp/string/byte/isspace)
	* Defined in header \<cctype>
	* int isspace( int ch );
	* [c++ - std::remove_if and std::isspace - compile-time error - Stack Overflow](https://stackoverflow.com/questions/21578544/stdremove-if-and-stdisspace-compile-time-error)
		* There is another overload of std::isspace, so you need to specify which one to use. An easy way is to use a lambda (or write your own one-line function if you don't have C++11 support)

##### [String I/O](https://en.cppreference.com/w/cpp/io)

* Defined in header \<sstream>
	
###### [std::basic_stringstream](https://en.cppreference.com/w/cpp/io/basic_stringstream)

* implements high-level string stream input/output operations (class template)
* Inherited from [std::basic_istream](https://en.cppreference.com/w/cpp/io/basic_istream)
	* [operator>>](https://en.cppreference.com/w/cpp/io/basic_istream/operator_gtgt)
		* extracts formatted data (public member function of std::basic_istream\<CharT,Traits>)
* Inherited from [std::basic_ostream](https://en.cppreference.com/w/cpp/io/basic_ostream)
	* [operator<<](https://en.cppreference.com/w/cpp/io/basic_ostream/operator_ltlt)
		* inserts formatted data (public member function of std::basic_ostream\<CharT,Traits>)
* [stringstream - C++ Reference](https://www.cplusplus.com/reference/sstream/stringstream/)
* [stringstream in C++ and its applications - GeeksforGeeks](https://www.geeksforgeeks.org/stringstream-c-applications/)
	* A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin).
	* Basic methods are –
		* clear() — to clear the stream
		* str() — to get and set string object whose content is present in stream.
		* operator << — add a string to the stringstream object.
		* operator >> — read something from the stringstream object,
* [StringStream | HackerRank](https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem)
```c++
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>  // std::stringstream
using namespace std;


vector<int> parseInts(const string &str)
{
    stringstream ss(str);
    char ch;
    int temp;
    vector<int> result;
    
    while (ss) {
        ss >> temp >> ch;
        result.push_back(temp);
    }
    
    return result;    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    
    vector<int> vResult;
    vResult = parseInts(s);
    
    for (const int &i : vResult)
        cout << i << endl;
    
    return 0;
}
```

###### [std::basic_ostringstream](https://en.cppreference.com/w/cpp/io/basic_ostringstream)

* implements high-level string stream output operations (class template)
* [ostringstream - C++ Reference](https://www.cplusplus.com/reference/sstream/ostringstream/)
  * Output stream class to operate on strings.
  * Objects of this class use a string buffer that contains a sequence of characters. This sequence of characters can be accessed directly as a string object, using member str.
  * Characters can be inserted into the stream with any operation allowed on output streams.
  * [ostringstream::str - C++ Reference](https://www.cplusplus.com/reference/sstream/ostringstream/str/)
    * string str() const;
    * void str (const string& s);
    * Get/set content
      * The first form (1) returns a string object with a copy of the current contents of the stream.
      * The second form (2) sets s as the contents of the stream, discarding any previous contents. The object preserves its open mode: if this includes ios_base::ate, the writing position is moved to the end of the new sequence.
      * Internally, the function calls the str member of its internal string buffer object.

#### Pointers

* [new expression - cppreference.com](https://en.cppreference.com/w/cpp/language/new)
	* Creates and initializes objects with dynamic storage duration, that is, objects whose lifetime is not necessarily limited by the scope in which they were created.
* [Placement new operator in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/placement-new-operator-cpp/)
	* Advantages of placement new operator over new operator
		* The address of memory allocation is known before hand.
		* Useful when building a memory pool, a garbage collector or simply when performance and exception safety are paramount.
		* There’s no danger of allocation failure since the memory has already been allocated, and constructing an object on a pre-allocated buffer takes less time.
		* This feature becomes useful while working in an environment with limited resources.

##### [Dynamic memory management](https://en.cppreference.com/w/cpp/memory)

###### Smart pointers

* Smart pointers enable automatic, exception-safe, object lifetime management.
* Defined in header \<memory>
* [std::unique_ptr - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr)
	* std::unique_ptr is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope.
	* [std::unique_ptr<T,Deleter>::unique_ptr - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr/unique_ptr)
		* (constructor)
	* [std::unique_ptr<T,Deleter>::get - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr/get)
		* Returns a pointer to the managed object or nullptr if no object is owned.
	* [std::unique_ptr<T,Deleter>::release - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr/release)
		* Releases the ownership of the managed object, if any.
		* get() returns nullptr after the call.
		* The caller is responsible for deleting the object.
	* [std::unique_ptr<T,Deleter>::operator*, std::unique_ptr<T,Deleter>::operator-> - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr/operator*)
		* Single-object version, unique_ptr\<T>
		* dereferences pointer to the managed object	
	* [std::unique_ptr<T,Deleter>::operator[] - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr/operator_at)
		* Array version, unique_ptr\<T[]>
		* provides indexed access to the managed array
	* [std::make_unique, std::make_unique_for_overwrite - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr/make_unique)
		* Constructs an object of type T and wraps it in a std::unique_ptr.
* [std::shared_ptr - cppreference.com](https://en.cppreference.com/w/cpp/memory/shared_ptr)
	* std::shared_ptr is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object. The object is destroyed and its memory deallocated when either of the following happens:
		* the last remaining shared_ptr owning the object is destroyed;
		* the last remaining shared_ptr owning the object is assigned another pointer via operator= or reset().
	* The object is destroyed using delete-expression or a custom deleter that is supplied to shared_ptr during construction.
	* A shared_ptr can share ownership of an object while storing a pointer to another object. This feature can be used to point to member objects while owning the object they belong to. The stored pointer is the one accessed by get(), the dereference and the comparison operators. The managed pointer is the one passed to the deleter when use count reaches zero.
	* A shared_ptr may also own no objects, in which case it is called empty (an empty shared_ptr may have a non-null stored pointer if the aliasing constructor was used to create it).
	* All specializations of shared_ptr meet the requirements of CopyConstructible, CopyAssignable, and LessThanComparable and are contextually convertible to bool.
	* All member functions (including copy constructor and copy assignment) can be called by multiple threads on different instances of shared_ptr without additional synchronization even if these instances are copies and share ownership of the same object. If multiple threads of execution access the same instance of shared_ptr without synchronization and any of those accesses uses a non-const member function of shared_ptr then a data race will occur; the shared_ptr overloads of atomic functions can be used to prevent the data race.
* [一文掌握 C++ 智能指针的使用](https://mp.weixin.qq.com/s/bn7BAzBSxgbrkgRMnuy8-A)
  * RAII 与引用计数
  * std::shared_ptr
  * std::unique_ptr
  * std::weak_ptr

#### [Date and time utilities](https://en.cppreference.com/w/cpp/chrono)

* C++ includes support for two types of time manipulation:
	* The chrono library, a flexible collection of types that track time with varying degrees of precision (e.g. std::chrono::time_point).
	* C-style date and time library (e.g. std::time)
* [C++ Date and Time](https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm)
* [Chrono in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/chrono-in-c/)

##### [Standard library header \<chrono> - cppreference.com](https://en.cppreference.com/w/cpp/header/chrono)

###### Duration

* [std::chrono::duration - cppreference.com](https://en.cppreference.com/w/cpp/chrono/duration)
	* Class template std::chrono::duration represents a time interval.
	* [std::chrono::duration<Rep,Period>::count - cppreference.com](https://en.cppreference.com/w/cpp/chrono/duration/count)
		* Returns the number of ticks for this duration.
	* [std::chrono::duration_cast - cppreference.com](https://en.cppreference.com/w/cpp/chrono/duration/duration_cast)
		* Converts a std::chrono::duration to a duration of different type ToDuration.

###### Convenience duration typedefs

| std::chrono::nanoseconds(C++11)  | duration type with Period std::nano |
|- | - |
| std::chrono::microseconds(C++11) | duration type with Period std::micro |
| std::chrono::milliseconds(C++11) | duration type with Period std::milli |
| std::chrono::seconds(C++11)      | duration type with Period std::ratio<1> |
| std::chrono::minutes(C++11)      | duration type with Period std::ratio<60> |
| std::chrono::hours(C++11)        | duration type with Period std::ratio<3600> |
| std::chrono::days(C++20)         | duration type with Period std::ratio<86400> |
| std::chrono::weeks(C++20)        | duration type with Period std::ratio<604800> |
| std::chrono::months(C++20)       | duration type with Period std::ratio<2629746> |
| std::chrono::years(C++20)        | duration type with Period std::ratio<31556952> |

###### Time point

* [std::chrono::time_point - cppreference.com](https://en.cppreference.com/w/cpp/chrono/time_point)
	* Class template std::chrono::time_point represents a point in time. It is implemented as if it stores a value of type Duration indicating the time interval from the start of the Clock's epoch.
	* [operator==,!=,<,<=,>,>=,<=>(std::chrono::time_point) - cppreference.com](https://en.cppreference.com/w/cpp/chrono/time_point/operator_cmp)
		* Compares two time points. The comparison is done by comparing the results time_since_epoch() for the time points.

###### Clocks

* [std::chrono::system_clock - cppreference.com](https://en.cppreference.com/w/cpp/chrono/system_clock) 
	* Class std::chrono::system_clock represents the system-wide real time wall clock.
	* It may not be monotonic: on most systems, the system time can be adjusted at any moment. It is the only C++ clock that has the ability to map its time points to C-style time.
	* std::chrono::system_clock meets the requirements of TrivialClock.
	* [std::chrono::system_clock::now - cppreference.com](https://en.cppreference.com/w/cpp/chrono/system_clock/now)
		* Returns a time point representing the current point in time.
	* [std::chrono::system_clock::to_time_t - cppreference.com](https://en.cppreference.com/w/cpp/chrono/system_clock/to_time_t)
		* Converts t to a std::time_t type.
		* If std::time_t has lower precision, it is implementation-defined whether the value is rounded or truncated.
	* [std::chrono::system_clock::from_time_t - cppreference.com](https://en.cppreference.com/w/cpp/chrono/system_clock/from_time_t) 
		* Converts t to a time point type, using the coarser precision of the two types.
		* If time_point has lower precision, it is implementation defined whether the value is rounded or truncated.
	* [How to get current time and date in C++? - Stack Overflow](https://stackoverflow.com/questions/997946/how-to-get-current-time-and-date-in-c) 
		* In C++ 11 you can use std::chrono::system_clock::now()
* [std::chrono::steady_clock - cppreference.com](https://en.cppreference.com/w/cpp/chrono/steady_clock) 
	* Class std::chrono::steady_clock represents a monotonic clock. The time points of this clock cannot decrease as physical time moves forward and the time between ticks of this clock is constant. This clock is not related to wall clock time (for example, it can be time since last reboot), and is most suitable for measuring intervals.
	* std::chrono::steady_clock meets the requirements of TrivialClock.		
* [std::chrono::high_resolution_clock - cppreference.com](https://en.cppreference.com/w/cpp/chrono/high_resolution_clock) 
	* Class std::chrono::high_resolution_clock represents the clock with the smallest tick period provided by the implementation. It may be an alias of std::chrono::system_clock or std::chrono::steady_clock, or a third, independent clock.
	* std::chrono::high_resolution_clock meets the requirements of TrivialClock.		
* [The Three Clocks - ModernesCpp.com](https://www.modernescpp.com/index.php/the-three-clocks)

###### FAQ

* [c++ - How to parse a date string into a c++11 std::chrono time_point or similar? - Stack Overflow](https://stackoverflow.com/questions/21021388/how-to-parse-a-date-string-into-a-c11-stdchrono-time-point-or-similar) 
	* [std::get_time - cppreference.com](https://en.cppreference.com/w/cpp/io/manip/get_time) 
		* When used in an expression in >> get_time(tmb, fmt), parses the character input as a date/time value according to format string fmt according to the std::time_get facet of the locale currently imbued in the input stream in. The resultant value is stored in a std::tm object pointed to by tmb.
	* [mktime - cppreference.com](https://en.cppreference.com/w/c/chrono/mktime)
		* Renormalizes local calendar time expressed as a struct tm object and also converts it to time since epoch as a time_t object. time->tm_wday and time->tm_yday are ignored. The values in time are not checked for being out of range.
		* A negative value of time->tm_isdst causes mktime to attempt to determine if Daylight Saving Time was in effect in the specified time.
		* If the conversion to time_t is successful, the time object is modified. All fields of time are updated to fit their proper ranges. time->tm_wday and time->tm_yday are recalculated using information available in other fields. 
* [Print System Time in C++ | Delft Stack](https://www.delftstack.com/howto/cpp/system-time-in-cpp/) 
	* [std::strftime - cppreference.com](https://en.cppreference.com/w/cpp/chrono/c/strftime)
		* Converts the date and time information from a given calendar time time to a null-terminated multibyte character string str according to format string format. Up to count bytes are written.
* [c++11 - how to convert "std::chrono::system_clock::now()" to double - Stack Overflow](https://stackoverflow.com/questions/45464711/how-to-convert-stdchronosystem-clocknow-to-double)
	* https://wandbox.org/permlink/qe1MNGQAR5X3zJl8
* [Outputting Date and Time in C++ using std::chrono - Stack Overflow](https://stackoverflow.com/questions/17223096/outputting-date-and-time-in-c-using-stdchrono)
* [c++ - C++11 get current date and time as string - Stack Overflow](https://stackoverflow.com/questions/34963738/c11-get-current-date-and-time-as-string)
* [c++ - Format no such file or directory - Stack Overflow](https://stackoverflow.com/questions/65083544/format-no-such-file-or-directory)
  * According to this: https://en.cppreference.com/w/cpp/compiler_support there are currently no compilers that support "Text formatting" (P0645R10, std::format). (As of December 2020)
* [c++ - can't include std::format - Stack Overflow](https://stackoverflow.com/questions/63017719/cant-include-stdformat)
  * As of July 2020 none of the standard library implementations provide std::format. Until they do you can use the {fmt} library std::format is based on:
* [c++ - How to use the \<format> header - Stack Overflow](https://stackoverflow.com/questions/61441494/how-to-use-the-format-header)
  * Use libfmt. The \<format> header is essentially a standardized libfmt (with a few small features removed, if I remember correctly).

#### Basic Input/Output

##### [Input/output library](https://en.cppreference.com/w/cpp/io)

* C++ includes two input/output libraries: an OOP-style stream-based I/O library and the standard set of C-style I/O functions.

###### Stream-based I/O

* The stream-based input/output library is organized around abstract input/output devices. These abstract devices allow the same code to handle input/output to files, memory streams, or custom adaptor devices that perform arbitrary operations (e.g. compression) on the fly.
* Most of the classes are templated, so they can be adapted to any basic character type. Separate typedefs are provided for the most common basic character types (char and wchar_t). The classes are organized into the following hierarchy:
![image](https://user-images.githubusercontent.com/34557994/166664893-b2b25c27-7205-42f2-8836-cc67245bd81b.png)
* [【ZZ】cin、cin.get()、cin.getline()、getline()、gets()等函数的用法 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2011/04/21/2024345.html)

#
Synchronized output

* Defined in header \<syncstream>

| [basic_syncbuf (C++20)](https://en.cppreference.com/w/cpp/io/basic_syncbuf) | synchronized output device wrapper (class template) |
| - | - |
| [basic_osyncstream (C++20)](https://en.cppreference.com/w/cpp/io/basic_osyncstream) | synchronized output stream wrapper (class template) |

* [Synchronized Output Streams with C++20 - ModernesCpp.com](https://www.modernescpp.com/index.php/synchronized-outputstreams#:~:text=std%3A%3Acout%20is%20thread,Each%20character%20is%20written%20atomically.)
	* With C++20, writing synchronized to std::cout is a piece of cake. std::basic_syncbuf is a wrapper for a std::basic_streambuf. It accumulates output in its buffer. The wrapper sets its content to the wrapped buffer when it is destructed. Consequently, the content appears as a contiguous sequence of characters, and no interleaving of characters can happen.
	* Thanks to std::basic_osyncstream, you can directly write synchronously to std::cout by using a named synchronized output stream.
	* Here is how the previous program coutUnsynchronized.cpp is refactored to write synchronized to std::cout. So far, only GCC 11 supports synchronized output streams.

#
Predefined standard stream objects

* Defined in header \<iostream>

| cin / wcin | reads from the standard C input stream stdin (global object) |
| - | - |
| cout / wcout | writes to the standard C output stream stdout (global object) | 
| [cerr / wcerr](https://en.cppreference.com/w/cpp/io/cerr) | writes to the standard C error stream stderr, unbuffered (global object) | 
| clog / wclog | writes to the standard C error stream stderr (global object) | 

* [std::cin, std::wcin - cppreference.com](https://en.cppreference.com/w/cpp/io/cin)
	* reads from the standard C input stream stdin (global object)
	* The global objects std::cin and std::wcin control input from a stream buffer of implementation-defined type (derived from std::streambuf), associated with the standard C input stream stdin.
	* These objects are guaranteed to be initialized during or before the first time an object of type std::ios_base::Init is constructed and are available for use in the constructors and destructors of static objects with ordered initialization (as long as \<iostream> is included before the object is defined).
	* `Unless sync_with_stdio(false) has been issued, it is safe to concurrently access these objects from multiple threads for both formatted and unformatted input.`
	* Once std::cin is constructed, std::cin.tie() returns &std::cout, and likewise, std::wcin.tie() returns &std::wcout. This means that any formatted input operation on std::cin forces a call to std::cout.flush() if any characters are pending for output.
	* Notes
		* The 'c' in the name refers to "character" (stroustrup.com FAQ); cin means "character input" and wcin means "wide character input"
	* [C++ cin 的详细用法](https://mp.weixin.qq.com/s/BP3gfSd7Ya_9MLE_ArM9LA)
		* https://dablelv.blog.csdn.net/article/details/48213811
		* 1. cin 简介
		* 2. cin 的常用读取方法
			* 2.1 cin>> 的用法
			* 2.2 cin.get() 的用法
				* 2.2.1 cin.get() 读取一个字符
				* 2.2.2 cin.get() 读取一行
			* 2.3 cin.getline() 读取一行
		* 3. cin 的条件状态
		* 4. cin 清空输入缓冲区
		* 5. 从标准输入读取一行字符串的其它方法
			* 5.1 getline() 读取一行
			* 5.2 gets() 读取一行
* [std::cout, std::wcout - cppreference.com](https://en.cppreference.com/w/cpp/io/cout)
	* writes to the standard C output stream stdout (global object)
	* The global objects std::cout and std::wcout control output to a stream buffer of implementation-defined type (derived from std::streambuf), associated with the standard C output stream stdout.
	* These objects are guaranteed to be initialized during or before the first time an object of type std::ios_base::Init is constructed and are available for use in the constructors and destructors of static objects with ordered initialization (as long as \<iostream> is included before the object is defined).
	* Unless std::ios_base::sync_with_stdio(false) has been issued, it is safe to concurrently access these objects from multiple threads for both formatted and unformatted output.
	* By specification of std::cin, std::cin.tie() returns &std::cout. This means that any input operation on std::cin executes std::cout.flush() (via std::basic_istream::sentry's constructor). Similarly, std::wcin.tie() returns &std::wcout.
	* By specification of std::cerr, std::cerr.tie() returns &std::cout. This means that any output operation on std::cerr executes std::cout.flush() (via std::basic_ostream::sentry's constructor). Similarly, std::wcerr.tie() returns &std::wcout. (since C++11)
	* Notes
		* The 'c' in the name refers to "character" (stroustrup.com FAQ); cout means "character output" and wcout means "wide character output".
		* Because dynamic initialization of templated variables are unordered, it is not guaranteed that std::cout has been initialized to a usable state before the initialization of such variables begins, unless an object of type std::ios_base::Init has been constructed.
* [Fast I/O for Competitive Programming - GeeksforGeeks](https://www.geeksforgeeks.org/fast-io-for-competitive-programming/)
  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  #define endl '\n'

  int main()
  {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      return 0;
  }
  ```
  * [c++ - Significance of ios_base::sync_with_stdio(false); cin.tie(NULL); - Stack Overflow](https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull/31165481#31165481)
  * [std::ios_base::sync_with_stdio - cppreference.com](https://en.cppreference.com/w/cpp/io/ios_base/sync_with_stdio)
  * [ios::tie - C++ Reference](https://www.cplusplus.com/reference/ios/ios/tie/)

###### [Input/output manipulators](https://en.cppreference.com/w/cpp/io/manip)

* The stream-based I/O library uses I/O manipulators (e.g. std::boolalpha, std::hex, etc.) to control how streams behave.
* [std::boolalpha, std::noboolalpha - cppreference.com](https://en.cppreference.com/w/cpp/io/manip/boolalpha)
	* switches between textual and numeric representation of booleans
* [std::quoted - cppreference.com](https://en.cppreference.com/w/cpp/io/manip/quoted)
	* inserts and extracts quoted strings with embedded spaces
* [manipulators - C++ Reference](http://www.cplusplus.com/reference/library/manipulators/)
  * Basic format flags
    * These manipulators are usable on both input and output streams, although many only have an effect when applied to either output or input streams.
    * Independent flags (switch on):
      * [showbase - C++ Reference](http://www.cplusplus.com/reference/ios/showbase/)
      * [showpos - C++ Reference](http://www.cplusplus.com/reference/ios/showpos/)
      * [uppercase - C++ Reference](http://www.cplusplus.com/reference/ios/uppercase/)
    * Independent flags (switch off):
      * [noshowpos - C++ Reference](http://www.cplusplus.com/reference/ios/noshowpos/)
      * [nouppercase - C++ Reference](http://www.cplusplus.com/reference/ios/nouppercase/)
    * Numerical base format flags ("basefield" flags):
      * [dec - C++ Reference](http://www.cplusplus.com/reference/ios/dec/)
      * [hex - C++ Reference](http://www.cplusplus.com/reference/ios/hex/?kw=hex)
    * Floating-point format flags ("floatfield" flags):
      * [fixed - C++ Reference](http://www.cplusplus.com/reference/ios/fixed/)
      * [scientific - C++ Reference](http://www.cplusplus.com/reference/ios/scientific/)
    * Adustment format flags ("adjustfield" flags):
      * [left - C++ Reference](http://www.cplusplus.com/reference/ios/left/)
      * [right - C++ Reference](http://www.cplusplus.com/reference/ios/right/)
  * Parameterized manipulators
    * These functions take parameters when used as manipulators. They require the explicit inclusion of the header file \<iomanip\>.
    * [setfill - C++ Reference](http://www.cplusplus.com/reference/iomanip/setfill/)
    * [setprecision - C++ Reference](http://www.cplusplus.com/reference/iomanip/setprecision/)
    * [setw - C++ Reference](http://www.cplusplus.com/reference/iomanip/setw/)
  * [Print Pretty | HackerRank](https://www.hackerrank.com/challenges/prettyprint/problem)
  ```c++
  #include <iostream>
  #include <iomanip> 
  using namespace std;

  int main() {
      int T; cin >> T;
      cout << setiosflags(ios::uppercase);
      cout << setw(0xf) << internal;
      while(T--) {
          double A; cin >> A;
          double B; cin >> B;
          double C; cin >> C;

          // LINE 1 
          cout << hex << left << showbase << nouppercase; // formatting
          cout << (long long) A << endl; // output

          // LINE 2
          cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
          cout << B << endl; // output

          // LINE 3
          cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
          cout << C << endl; // output
      }

      return 0;
  }
  ```
* How to set precision of float / double in output ?
  * [std::setprecision - cppreference.com](https://en.cppreference.com/w/cpp/io/manip/setprecision)
    * /*unspecified*/ setprecision( int n );
    * When used in an expression out << setprecision(n) or in >> setprecision(n), sets the precision parameter of the stream out or in to exactly n.
  * [std::fixed, std::scientific, std::hexfloat, std::defaultfloat - cppreference.com](https://en.cppreference.com/w/cpp/io/manip/fixed)
    * This is an I/O manipulator, it may be called with an expression such as out << std::fixed for any out of type std::basic_ostream or with an expression such as in >> std::scientific for any in of type std::basic_istream.
  ```c++
  cout << fixed << setprecision(9) << e << endl; // 14049.304930000  
  ```

###### [C-style file input/output](https://en.cppreference.com/w/cpp/io/c)

* The C I/O subset of the C++ standard library implements C-style stream input/output operations. The \<cstdio> header provides generic file operation support and supplies functions with narrow and multibyte character input/output capabilities, and the \<cwchar> header provides functions with wide character input/output capabilities.
* C streams are denoted by objects of type std::FILE that can only be accessed and manipulated through pointers of type std::FILE*. Each C stream is associated with an external physical device (file, standard input stream, printer, serial port, etc).
* [c++ - Where is `%p` useful with printf? - Stack Overflow](https://stackoverflow.com/questions/2369541/where-is-p-useful-with-printf)
	* Always use %p for pointers.

##### [{fmt}](https://fmt.dev/latest/index.html)

* {fmt} is an open-source formatting library providing a fast and safe alternative to C stdio and C++ iostreams.
* [Usage — fmt 8.1.1 documentation](https://fmt.dev/latest/usage.html)
	* To use the {fmt} library, add fmt/core.h, fmt/format.h, fmt/format-inl.h, src/format.cc and optionally other headers from a release archive or the Git repository to your project. Alternatively, you can build the library with CMake.
* [Format String Syntax — fmt 8.1.1 documentation](https://fmt.dev/latest/syntax.html)

#### Data Structures

* [Data structures - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/structures/)
* [Attending Workshops | HackerRank](https://www.hackerrank.com/challenges/attending-workshops/problem)
```c++
// #include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop {
    int start, duration, end;
};

struct Available_Workshops {
    Available_Workshops(int n) : m_n(n) {}

    int m_n;
    vector<Workshop> m_vWorkshop;
};

Available_Workshops* initialize(int* start_time, int* duration, int n)
{
    Available_Workshops* pAW = new Available_Workshops(n);
    Workshop temp;

    for (auto i = 0; i < n; ++ i) {
        temp.start = start_time[i];
        temp.duration = duration[i];
        temp.end = start_time[i] + duration[i];
        pAW->m_vWorkshop.push_back(temp);
    }

    sort(pAW->m_vWorkshop.begin(),
        pAW->m_vWorkshop.end(),
        [](const Workshop& w1, const Workshop& w2) {
            return w1.end < w2.end;
        });

    return pAW;
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    auto maxWorkshops = 0;
    auto currentEnd = 0;

    for (auto i = 0; i < ptr->m_n; ++ i) {
        if (ptr->m_vWorkshop.at(i).start >= currentEnd) {
            currentEnd = ptr->m_vWorkshop.at(i).end;
            ++ maxWorkshops;
        }
    }

    return maxWorkshops;
}

int main(int argc, char *argv[]) {
    // freopen("input.txt", "r", stdin);

    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i = 0; i < n; i ++) {
        cin >> start_time[i];
    }

    for(int i = 0; i < n; i ++) {
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}

```

### Object Oriented Programming

* [Initialization - cppreference.com](https://en.cppreference.com/w/cpp/language/initialization)

#### [Classes](https://en.cppreference.com/w/cpp/language/classes)

* class v.s. struct
	* [Structure vs class in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/structure-vs-class-in-cpp/)
	* [C.1: Organize related data into structures (structs or classes)](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c1-organize-related-data-into-structures-structs-or-classes)
		* Reason Ease of comprehension. If data is related (for fundamental reasons), that fact should be reflected in code.
		* Example
		```c++
		void draw(int x, int y, int x2, int y2);  // BAD: unnecessary implicit relationships
		void draw(Point from, Point to);          // better
		```
		* Note A simple class without virtual functions implies no space or time overhead.
		* Note From a language perspective class and struct differ only in the default visibility of their members.
		* Enforcement Probably impossible. Maybe a heuristic looking for data items used together is possible.
	* [C.8: Use class rather than struct if any member is non-public](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c8-use-class-rather-than-struct-if-any-member-is-non-public)
* [static members - cppreference.com](https://en.cppreference.com/w/cpp/language/static)
	* Inside a class definition, the keyword static declares members that are not bound to class instances.
	* Outside a class definition, it has a different meaning: see storage duration.

##### Special member functions

* [Default constructors - cppreference.com](https://en.cppreference.com/w/cpp/language/default_constructor)
	* A default constructor is a constructor which can be called with no arguments (either defined with an empty parameter list, or with default arguments provided for every parameter). A type with a public default constructor is DefaultConstructible.
	* Explanation
		1) Declaration of a default constructor inside of class definition.
		2) Definition of the constructor outside of class definition (the class must contain a declaration (1)). See constructors and member initializer lists for details on the constructor body.
		3) Deleted default constructor: if it is selected by overload resolution, the program fails to compile.
		4) Defaulted default constructor: the compiler will define the implicit default constructor even if other constructors are present.
		5) Defaulted default constructor outside of class definition (the class must contain a declaration (1)). Such constructor is treated as user-provided (see below and value initialization).
	* Default constructors are called during default initializations and value initializations.
* [Copy constructors - cppreference.com](https://en.cppreference.com/w/cpp/language/copy_constructor)
	* A copy constructor of class T is a non-template constructor whose first parameter is T&‍, const T&‍, volatile T&‍, or const volatile T&‍, and either there are no other parameters, or the rest of the parameters all have default values.
* [Move constructors - cppreference.com](https://en.cppreference.com/w/cpp/language/move_constructor)
	* A move constructor of class T is a non-template constructor whose first parameter is T&&, const T&&, volatile T&&, or const volatile T&&, and either there are no other parameters, or the rest of the parameters all have default values.
	* [std::exchange - cppreference.com](https://en.cppreference.com/w/cpp/utility/exchange)
		* Replaces the value of obj with new_value and returns the old value of obj.
* [operator overloading - cppreference.com](https://en.cppreference.com/w/cpp/language/operators#Assignment_operator)
* [Copy assignment operator - cppreference.com](https://en.cppreference.com/w/cpp/language/copy_assignment)
	* A copy assignment operator of class T is a non-template non-static member function with the name operator= that takes exactly one parameter of type T, T&, const T&, volatile T&, or const volatile T&. For a type to be CopyAssignable, it must have a public copy assignment operator.
* [Move assignment operator - cppreference.com](https://en.cppreference.com/w/cpp/language/move_assignment)
	* A move assignment operator of class T is a non-template non-static member function with the name operator= that takes exactly one parameter of type T&&, const T&&, volatile T&&, or const volatile T&&.
	* Syntax
		* class-name & class-name :: operator= ( class-name && )	(1)	(since C++11)
		* class-name & class-name :: operator= ( class-name && ) = default;	(2)	(since C++11)
		* class-name & class-name :: operator= ( class-name && ) = delete;	(3)	(since C++11)
	* Explanation
		* 1) Typical declaration of a move assignment operator.
		* 2) Forcing a move assignment operator to be generated by the compiler.
		* 3) Avoiding implicit move assignment.
		* The move assignment operator is called whenever it is selected by overload resolution, e.g. when an object appears on the left-hand side of an assignment expression, where the right-hand side is an rvalue of the same or implicitly convertible type.
		* Move assignment operators typically "steal" the resources held by the argument (e.g. pointers to dynamically-allocated objects, file descriptors, TCP sockets, I/O streams, running threads, etc.), rather than make copies of them, and leave the argument in some valid but otherwise indeterminate state. For example, move-assigning from a std::string or from a std::vector may result in the argument being left empty. This is not, however, a guarantee. A move assignment is less, not more restrictively defined than ordinary assignment; where ordinary assignment must leave two copies of data at completion, move assignment is required to leave only one.
```c++
#include <string>
#include <iostream>
#include <utility>
 
struct A
{
    std::string s;
 
    A() : s("test") {}
 
    A(const A& o) : s(o.s) { std::cout << "move failed!\n"; }
 
    A(A&& o) : s(std::move(o.s)) {}
 
    A& operator=(const A& other)
    {
         s = other.s;
         std::cout << "copy assigned\n";
         return *this;
    }
 
    A& operator=(A&& other)
    {
         s = std::move(other.s);
         std::cout << "move assigned\n";
         return *this;
    }
};
 
A f(A a) { return a; }
 
struct B : A
{
    std::string s2; 
    int n;
    // implicit move assignment operator B& B::operator=(B&&)
    // calls A's move assignment operator
    // calls s2's move assignment operator
    // and makes a bitwise copy of n
};
 
struct C : B
{
    ~C() {} // destructor prevents implicit move assignment
};
 
struct D : B
{
    D() {}
    ~D() {} // destructor would prevent implicit move assignment
    D& operator=(D&&) = default; // force a move assignment anyway 
};
 
int main()
{
    A a1, a2;
    std::cout << "Trying to move-assign A from rvalue temporary\n";
    a1 = f(A()); // move-assignment from rvalue temporary
    std::cout << "Trying to move-assign A from xvalue\n";
    a2 = std::move(a1); // move-assignment from xvalue
 
    std::cout << "Trying to move-assign B\n";
    B b1, b2;
    std::cout << "Before move, b1.s = \"" << b1.s << "\"\n";
    b2 = std::move(b1); // calls implicit move assignment
    std::cout << "After move, b1.s = \"" << b1.s << "\"\n";
 
    std::cout << "Trying to move-assign C\n";
    C c1, c2;
    c2 = std::move(c1); // calls the copy assignment operator
 
    std::cout << "Trying to move-assign D\n";
    D d1, d2;
    d2 = std::move(d1);
}

/*
Output:

Trying to move-assign A from rvalue temporary
move assigned
Trying to move-assign A from xvalue
move assigned
Trying to move-assign B
Before move, b1.s = "test"
move assigned
After move, b1.s = "" 
Trying to move-assign C
copy assigned
Trying to move-assign D
move assigned
*/
```

##### Inheritance

* [override specifier (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/override)
	* Specifies that a virtual function overrides another virtual function.
* [final specifier (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/final)
	* Specifies that a virtual function cannot be overridden in a derived class or that a class cannot be derived from.
* [C.128: Virtual functions should specify exactly one of virtual, override, or final](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rh-override)
	* Reason
		* Readability. Detection of mistakes. Writing explicit virtual, override, or final is self-documenting and enables the compiler to catch mismatch of types and/or names between base and derived classes. However, writing more than one of these three is both redundant and a potential source of errors.
		* It’s simple and clear:
			* virtual means exactly and only “this is a new virtual function.”
			* override means exactly and only “this is a non-final overrider.”
			* final means exactly and only “this is a final overrider.”
	* Discussion
		* We want to eliminate two particular classes of errors:
			* implicit virtual: the programmer intended the function to be implicitly virtual and it is (but readers of the code can’t tell); or the programmer intended the function to be implicitly virtual but it isn’t (e.g., because of a subtle parameter list mismatch); or the programmer did not intend the function to be virtual but it is (because it happens to have the same signature as a virtual in the base class)
			* implicit override: the programmer intended the function to be implicitly an overrider and it is (but readers of the code can’t tell); or the programmer intended the function to be implicitly an overrider but it isn’t (e.g., because of a subtle parameter list mismatch); or the programmer did not intend the function to be an overrider but it is (because it happens to have the same signature as a virtual in the base class – note this problem arises whether or not the function is explicitly declared virtual, because the programmer might have intended to create either a new virtual function or a new non-virtual function)
		* Note: On a class defined as final, it doesn’t matter whether you put override or final on an individual virtual function.
		* Note: Use final on functions sparingly. It does not necessarily lead to optimization, and it precludes further overriding.
	* Enforcement
		* Compare virtual function names in base and derived classes and flag uses of the same name that does not override.
		* Flag overrides with neither override nor final.
		* Flag function declarations that use more than one of virtual, override, and final.
* [C.140: Do not provide different default arguments for a virtual function and an overrider](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rh-virtual-default-arg)
	* Reason
		* That can cause confusion: An overrider does not inherit default arguments.
	* Enforcement
		* Flag default arguments on virtual functions if they differ between base and derived declarations.
* [Abstract Classes - Polymorphism | HackerRank](https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem)
  * [LRU Cache Implementation - GeeksforGeeks](https://www.geeksforgeeks.org/lru-cache-implementation/)
  * [list - C++ Reference](http://www.cplusplus.com/reference/list/list/?kw=list)
  * [pair - C++ Reference](http://www.cplusplus.com/reference/utility/pair/?kw=pair)
```c++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* next;
    Node* prev;
    int value;
    int key;
    Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
    Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache {
protected:
    map<int,Node*> mp; //map the key to the node in the linked list
    int cp;  //capacity
    Node* tail; // double linked list tail pointer
    Node* head; // double linked list head pointer
    virtual void set(int, int) = 0; //set function
    virtual int get(int) = 0; //get function
};

// Sometimes timeout
class LRUCache : public Cache {
    private:
        list< pair<int, int> >   lru;
        unordered_map<int, list< pair<int, int> >::iterator> mp;

    public:
        LRUCache(int);
        ~LRUCache(){};
        void set(int, int);
        int get(int);
};

LRUCache::LRUCache(int capacity)
{
    // note that member initializer does not name a non-static data member or base class
    cp = capacity;
}

void LRUCache::set(int key, int value)
{
    // not present in cache
    if (mp.find(key) == mp.end()) {
        // cache is full
        if (lru.size() == cp) {
            // delete least recently used item
            mp.erase(lru.back().first);
            lru.pop_back();
        }
    } else {
        lru.erase(mp[key]);
    }

    // update reference
    lru.push_front({key, value});
    mp[key] = lru.begin();
}

int LRUCache::get(int key)
{
    if (mp.find(key) == mp.end()) {
        return -1;
    } else {
        lru.push_front(*mp[key]);
        lru.erase(mp[key]);
        mp[key] = lru.begin();
        return mp[key]->second;
    }
}


int main() {
    int n, capacity,i;
    cin >> n >> capacity;
    LRUCache l(capacity);
    for(i=0;i<n;i++) {
        string command;
        cin >> command;
        if(command == "get") {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        }
        else if(command == "set") {
            int key, value;
            cin >> key >> value;
            l.set(key,value);
        }
    }

    return 0;
}
```
* [C++虚函数表原理浅析 (qq.com)](https://mp.weixin.qq.com/s/lKfOZUM1txbUncD6ZBSO4w)

### C++ Advanced

#### Files and Streams

* [C如何获取文件夹下所有文件 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/3873279.html)
* [C++如何用system命令获取文件夹下所有文件名 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/3873250.html)
* [C++实现获取当前执行文件全路径 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2010/11/02/1867584.html)
* [freopen - C/C++文件输入输出利器 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2011/04/22/2024418.html)
* How to read csv files with BOM ?
	* read as UTF-8 file or
	* skip BOM in ifstream or
	* remove BOM in input files
	* [Byte order mark - Wikipedia](https://en.wikipedia.org/wiki/Byte_order_mark#Representations_of_byte_order_marks_by_encoding)
		* The byte order mark (BOM) is a particular usage of the special Unicode character, U+FEFF BYTE ORDER MARK, whose appearance as a magic number at the start of a text stream can signal several things to a program reading the text
	* [Byte Order Mark - Globalization | Microsoft Docs](https://docs.microsoft.com/en-us/globalization/encoding/byte-order-mark)
	* [c++ - Why am i getting these invalid characters before my file data? - Stack Overflow](https://stackoverflow.com/questions/30720619/why-am-i-getting-these-invalid-characters-before-my-file-data)
	* [c++ - Characters not recognized while reading from file - Stack Overflow](https://stackoverflow.com/questions/48985128/characters-not-recognized-while-reading-from-file)
		* [C++ read and write UTF-8 file using standard libarary | sockbandit](https://sockbandit.wordpress.com/2012/05/31/c-read-and-write-utf-8-file-using-standard-libarary/)
	* [byte - How do I remove the character "ï»¿" from the beginning of a text file in C++? - Stack Overflow](https://stackoverflow.com/questions/20778921/how-do-i-remove-the-character-%C3%AF-from-the-beginning-of-a-text-file-in-c/20778970)
	* [C++ reading from file puts three weird characters - Stack Overflow](https://stackoverflow.com/questions/10417613/c-reading-from-file-puts-three-weird-characters)
	* [r - Weird characters added to first column name after reading a toad-exported csv file - Stack Overflow](https://stackoverflow.com/questions/22974765/weird-characters-added-to-first-column-name-after-reading-a-toad-exported-csv-fi)
	* [How to remove BOM from any text/XML file](https://www.ibm.com/support/pages/how-remove-bom-any-textxml-file)
```c++
std::unordered_map<std::string, std::vector<std::string> > ReadCSV(const std::string& filename)
{
    std::ifstream ifs(filename, std::ifstream::in);
    std::unordered_map<std::string, std::vector<std::string> > mData{};

    if (ifs.is_open()) {
        std::string line{};
        auto checkedBOM = false;
        const std::unordered_set<std::string> setBOM{ "\xef\xbb\xbf" };

        while (std::getline(ifs, line)) {
            if (!checkedBOM) {
                if (setBOM.count(line.substr(0, 3)) > 0) {
                    line = line.substr(3);
                }
                checkedBOM = true;
            }

            std::stringstream ss{ line };
            std::string value{};
            std::vector<std::string> vValue{};

            while (std::getline(ss, value, ',')) {
                vValue.push_back(value);
            }

            mData[vValue[0]] = vValue;
        }

        ifs.close();
    }
    else {
        std::cerr << "Error opening file [" << filename << "]!";
    }

    return mData;
}
```

##### \<filesystem>
 
* [\<filesystem> | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/filesystem?view=msvc-160)
  * Include the header \<filesystem> for access to classes and functions that manipulate and retrieve information about paths, files, and directories.
* [std::filesystem::path - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path)
  * [std::filesystem::path::concat, std::filesystem::path::operator+= - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/concat)
    * Concatenates the current path and the argument
  * [std::filesystem::path::extension - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/extension)
  * [std::filesystem::path::filename - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/filename)
  * [std::filesystem::operator/(std::filesystem::path) - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/operator_slash)
    * Concatenates two path components using the preferred directory separator if appropriate (see operator/= for details).
    * Effectively returns path(lhs) /= rhs.
  * [std::filesystem::path::parent_path - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/parent_path)
  * [std::filesystem::path::replace_filename - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/replace_filename)
  * [std::filesystem::path::replace_extension - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/replace_extension)
  * [std::filesystem::path::stem - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/stem)
    * Returns the filename identified by the generic-format path stripped of its extension.
    * Returns the substring from the beginning of filename() up to and not including the last period (.) character, with the following exceptions:
      * If the first character in the filename is a period, that period is ignored (a filename like ".profile" is not treated as an extension)
      * If the filename is one of the special filesystem components dot or dot-dot, or if it has no periods, the function returns the entire filename().
  * [std::filesystem::operator/(std::filesystem::path) - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/path/operator_slash)
* [std::filesystem::filesystem_error - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/filesystem_error)
* [std::filesystem::directory_entry - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/directory_entry)
  * Represents a directory entry. The object stores a path as a member and may also store additional file attributes (hard link count, status, symlink status file size, and last write time) during directory iteration.
  * [std::filesystem::directory_entry::path - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/directory_entry/path)
  	* Returns the full path the directory entry refers to.
  * [How can I get the list of files in a directory using C or C++? - Stack Overflow](https://stackoverflow.com/questions/612097/how-can-i-get-the-list-of-files-in-a-directory-using-c-or-c)
```c++
#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    std::string path = "/path/to/directory";
    for (const auto & entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
}
```
* [std::filesystem::directory_iterator - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/directory_iterator)
  * directory_iterator is a LegacyInputIterator that iterates over the directory_entry elements of a directory (but does not visit the subdirectories). The iteration order is unspecified, except that each directory entry is visited only once. The special pathnames dot and dot-dot are skipped.
  * If the directory_iterator reports an error or is advanced past the last directory entry, it becomes equal to the default-constructed iterator, also known as the end iterator. Two end iterators are always equal, dereferencing or incrementing the end iterator is undefined behavior.
  * If a file or a directory is deleted or added to the directory tree after the directory iterator has been created, it is unspecified whether the change would be observed through the iterator.
  * [c++ - Get an ordered list of files in a folder - Stack Overflow](https://stackoverflow.com/questions/30983154/get-an-ordered-list-of-files-in-a-folder)
    ```c++
    std::vector<std::filesystem::path> files_in_directory;
    std::copy(std::filesystem::directory_iterator(myFolder), std::filesystem::directory_iterator(), std::back_inserter(files_in_directory));
    std::sort(files_in_directory.begin(), files_in_directory.end());

    for (const std::string & filename : files_in_directory) {
        std::cout << path.string() << std::endl; // printed in alphabetical order
    }
    ```
* [std::filesystem::copy_options - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/copy_options)
  * [c++ - How to copy a file from a folder to another folder - Stack Overflow](https://stackoverflow.com/questions/9125122/how-to-copy-a-file-from-a-folder-to-another-folder)
* [std::filesystem::copy - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/copy)
    * Defined in header \<filesystem> since C++ 17
* [std::filesystem::create_directory, std::filesystem::create_directories - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/create_directory)
* [std::filesystem::current_path - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/current_path)
* [std::filesystem::exists - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/exists)
* [std::filesystem::file_size - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/file_size)
* [std::filesystem::remove, std::filesystem::remove_all - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/remove)
* [std::filesystem::rename - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/rename)
* [std::filesystem::temp_directory_path - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/temp_directory_path)
* [boost Filesystem Reference - Class path](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#class-path)
  * [Chapter 35. Boost.Filesystem - Files and Directories](https://theboostcpplibraries.com/boost.filesystem-files-and-directories)
  * [Filesystem Reference - copy_file()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#copy_file)
  * [Filesystem Reference - create_directories()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#create_directories)
  * [Filesystem Reference - exists()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#exists)
  * [Filesystem Reference - filename()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#path-filename)
  * [Filesystem Reference - path extension()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#path-extension)
  * [Filesystem Reference - remove()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#remove)
  * [Filesystem Reference - remove_all()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#remove_all)
  * [Filesystem Reference - string()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#string)
  * [c++ - How to use copy_file in boost::filesystem? - Stack Overflow](https://stackoverflow.com/questions/4785491/how-to-use-copy-file-in-boostfilesystem)
  * [string - How can I extract the file name and extension from a path in C++ - Stack Overflow](https://stackoverflow.com/questions/4430780/how-can-i-extract-the-file-name-and-extension-from-a-path-in-c)

##### \<fstream>

* [std::basic_ifstream - cppreference.com](https://en.cppreference.com/w/cpp/io/basic_ifstream)
* [ifstream - C++ Reference](https://www.cplusplus.com/reference/fstream/ifstream/)
  * Input file stream class
    * Input stream class to operate on files.
    * Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).
    * File streams are associated with files either on construction, or by calling member open.
    * Apart from the internal file stream buffer, objects of this class keep a set of internal fields inherited from ios_base, ios and istream
  * [ifstream::is_open - C++ Reference](https://www.cplusplus.com/reference/fstream/ifstream/is_open/)
  * [ifstream::close - C++ Reference](https://www.cplusplus.com/reference/fstream/ifstream/close/)
  * [Read file line by line using C++](https://www.tutorialspoint.com/read-file-line-by-line-using-cplusplus)
  * [reading and using data in a .csv file - C++ Forum](http://www.cplusplus.com/forum/beginner/157129/)
  * [getline (string) - C++ Reference](https://www.cplusplus.com/reference/string/string/getline/)
  * [C++检测一个文件是否存在 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/5640920.html)
* [ofstream - C++ Reference](https://www.cplusplus.com/reference/fstream/ofstream/)
  * Output file stream
    * Output stream class to operate on files.
    * Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).
    * File streams are associated with files either on construction, or by calling member open.
    * Apart from the internal file stream buffer, objects of this class keep a set of internal fields inherited from ios_base, ios and istream
  * [ofstream::close - C++ Reference](https://www.cplusplus.com/reference/fstream/ofstream/close/)
    * Close file
      * Closes the file currently associated with the object, disassociating it from the stream.
      * Any pending output sequence is written to the file.
      * If the stream is currently not associated with any file (i.e., no file has successfully been open with it), calling this function fails.
      * The file association of a stream is kept by its internal stream buffer:
      * Internally, the function calls rdbuf()->close(), and sets failbit in case of failure.
      * Note that any open file is automatically closed when the ofstream object is destroyed.
  * [ofstream::is_open - C++ Reference](https://www.cplusplus.com/reference/fstream/ofstream/is_open/)
    * Check if file is open
      * Returns whether the stream is currently associated to a file.
      * Streams can be associated to files by a successful call to member open or directly on construction, and disassociated by calling close or on destruction.
      * The file association of a stream is kept by its internal stream buffer:
        * Internally, the function calls rdbuf()->is_open()
  * [ofstream::ofstream - C++ Reference](https://www.cplusplus.com/reference/fstream/ofstream/ofstream/)
    * Construct object
      * Constructs an ofstream object
  * [replace line in a file C++](https://www.py4u.net/discuss/81342)

#### [Error handling](https://en.cppreference.com/w/cpp/error)

##### Exception handling

* [Exception Handling](https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm)
* [std::exception - cppreference.com](https://en.cppreference.com/w/cpp/error/exception)
	* Provides consistent interface to handle errors through the throw expression.
	* All exceptions generated by the standard library inherit from std::exception
* [exception - C++ Reference](http://www.cplusplus.com/reference/exception/exception/)
  * [Inherited Code | HackerRank](https://www.hackerrank.com/challenges/inherited-code/problem)
  * [Exceptional Server | HackerRank](https://www.hackerrank.com/challenges/exceptional-server/problem)
  ```c++
  class BadLengthException : public exception
  {
      public:
          BadLengthException(int n) : m_n(to_string(n)) {}

          const char* what() const noexcept
          {
              return m_n.c_str();
          }

      private:
          string m_n;

  };
  ```
  ```c++
  try {
      cout << Server::compute(A, B) << endl;        
  } catch (bad_alloc& ex) {
      cout << "Not enough memory" << endl;
  } catch (exception& ex) {
      cout << "Exception: " << ex.what() << endl;
  } catch (...) {
      cout << "Other Exception" << endl;
  }
  ```
* [noexcept specifier (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/noexcept_spec)
  * Specifies whether a function could throw exceptions.
  * [noexcept (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/noexcept-cpp?view=msvc-160)
  * [Exception specifications (throw, noexcept) (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/exception-specifications-throw-cpp?view=msvc-160)
  * [Modern C++ best practices for exceptions and error handling | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/errors-and-exception-handling-modern-cpp?view=msvc-160)
  * [C.37: Make destructors noexcept](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c37-make-destructors-noexcept)
    * Reason A destructor must not fail. If a destructor tries to exit with an exception, it’s a bad design error and the program had better terminate.
    * Note A destructor (either user-defined or compiler-generated) is implicitly declared noexcept (independently of what code is in its body) if all of the members of its class have noexcept destructors. By explicitly marking destructors noexcept, an author guards against the destructor becoming implicitly noexcept(false) through the addition or modification of a class member.
    * Example Not all destructors are noexcept by default; one throwing member poisons the whole class hierarchy
    * So, if in doubt, declare a destructor noexcept.
    * Note Why not then declare all destructors noexcept? Because that would in many cases – especially simple cases – be distracting clutter.Enforcement (Simple) A destructor should be declared noexcept if it could throw.
  * [C++ Core Guidelines - E.12: Use noexcept when exiting a function because of a throw is impossible or unacceptable](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#e12-use-noexcept-when-exiting-a-function-because-of-a-throw-is-impossible-or-unacceptable)
    * Reason To make error handling systematic, robust, and efficient.
    * Note Many standard-library functions are noexcept including all the standard-library functions “inherited” from the C Standard Library.
  * [C++ Core Guidelines - F.6: If your function must not throw, declare it noexcept](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f6-if-your-function-must-not-throw-declare-it-noexcept)
    * Reason If an exception is not supposed to be thrown, the program cannot be assumed to cope with the error and should be terminated as soon as possible. Declaring a function noexcept helps optimizers by reducing the number of alternative execution paths. It also speeds up the exit after failure.
    * Example Put noexcept on every function written completely in C or in any other language without exceptions. The C++ Standard Library does that implicitly for all functions in the C Standard Library.
    * Note constexpr functions can throw when evaluated at run time, so you might need conditional noexcept for some of those.
    * noexcept is most useful (and most clearly correct) for frequently used, low-level functions.

##### Exception categories

* [std::runtime_error - cppreference.com](https://en.cppreference.com/w/cpp/error/runtime_error)
  * Defines a type of object to be thrown as exception. It reports errors that are due to events beyond the scope of the program and can not be easily predicted.
  * [exception - c++: Catch runtime_error - Stack Overflow](https://stackoverflow.com/questions/7491877/c-catch-runtime-error)

##### Assertions

* [assert - cppreference.com](https://en.cppreference.com/w/cpp/error/assert)
	* The definition of the macro assert depends on another macro, NDEBUG, which is not defined by the standard library.
	* If NDEBUG is defined as a macro name at the point in the source code where \<cassert> or \<assert.h> is included, then assert does nothing.
	* If NDEBUG is not defined, then assert checks if its argument (which must have scalar type) compares equal to zero. If it does, assert outputs implementation-specific diagnostic information on the standard error output and calls std::abort. The diagnostic information is required to include the text of expression, as well as the values of the predefined variable __func__ and (since C++11) the predefined macros __FILE__ and __LINE__.

##### [Stacktrace](https://en.cppreference.com/w/cpp/utility/basic_stacktrace)

#### C++ Templates

* [C++ 高阶操作：模板元编程](https://mp.weixin.qq.com/s/Ypit8BrJSvpx6B3Yf5GRuA)
  * 泛型编程大家应该都很熟悉了，主要就是利用模板实现“安全的宏”，而模板元编程区别于我们所知道的泛型编程，它是一种较为复杂的模板，属于C++的高阶操作了，它最主要的优点就在于把计算过程提前到编译期，能带来可观的性能提升。
  * 1.概述
    * 模板元编程（Template Meta programming，TMP）是编写生成或操纵程序的程序，也是一种复杂且功能强大的编程范式（Programming Paradigm）。
  * 6.小结
    * C++模板元编程是图灵完备的且是函数式编程，主要特点是代码在编译期执行，可用于编译期数值计算，能够获得更有效率的运行码。模板的使用，也提高了代码泛化。与此同时，模板元编程也存一定缺点，主要有
    * （1）模板元编程产生的代码较为复杂，难易阅读，可读性较差；
    * （2）大量模板的使用，编译时容易导致代码膨胀，提高了编译时间；
    * （3）对于C++来说，由于各编译器的差异，大量依赖模板元编程（特别是最新形式的）的代码可能会有移植性的问题。
    * 所以，对于模板元编程，我们需要扬其长避其短，合理使用模板元编程。
* [C++ 模板总结，很全面！](https://mp.weixin.qq.com/s/01yn6XsSt-WYKPmNCkTy2A)
	* https://blog.csdn.net/zhoumin4576/article/details/103602324
	* 模板（Template）指 C++ 程序设计设计语言中采用类型作为参数的程序设计，支持通用程序设计。C++ 的标准库提供许多有用的函数大多结合了模板的观念，如 STL 以及 IO Stream。模板是 C++ 支持参数化多态的工具，使用模板可以使用户为类或者函数声明一种一般模式，使得类中的某些数据成员或者成员函数的参数、返回值取得任意类型。
	* 模板是一种对类型进行参数化的工具；通常有两种形式：函数模板和类模板:
		* 函数模板 针对仅参数类型不同的函数；
		* 类模板 针对仅数据成员和成员函数类型不同的类.
	* 使用模板的目的就是能够让程序员编写与类型无关的代码.
	* 一、函数模板
	* 二、类模板
	* 三、模板的非类型形参
	* 四、类模板的默认模板类型形参
	* 五、模板的实例化
	* 六、模板的特化（具体化）和偏特化
	* 七、模板类的继承
	* 八、模板实例化问题

##### Class Template

* [Class template - cppreference.com](https://en.cppreference.com/w/cpp/language/class_template)
* [C++ Class Template Specialization | HackerRank](https://www.hackerrank.com/challenges/cpp-class-template-specialization/problem) 
```c++
#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
template<typename T> struct Traits {
    static string name(int index)
    {
        switch (index) {
            case 0:
                return ((typeid(T) == typeid(Fruit)) ? "apple" : "red");
            case 1:
                return ((typeid(T) == typeid(Fruit)) ? "orange" : "green");
            case 2:
                return ((typeid(T) == typeid(Fruit)) ? "pear" : "orange");
            default:
                return "unknown";
        }
    }
};

int main()
{
    int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
    
    return 0;
}
```

###### [Curiously Recurring Template Pattern - cppreference.com](https://en.cppreference.com/w/cpp/language/crtp)

* The Curiously Recurring Template Pattern is an idiom in which a class X derives from a class template Y, taking a template parameter Z, where Y is instantiated with Z=X.
```c++
template<class Z>
class Y {};

class X : public Y<X> {};
```
* CRTP may be used to implement "compile-time polymorphism", when a base class exposes an interface, and derived classes implement such interface.
```c++
#include <iostream>

template <class Derived>
struct Base { void name() { (static_cast<Derived*>(this))->impl(); } };

struct D1 : public Base<D1> { void impl() { std::cout << "D1::impl()\n"; } };
struct D2 : public Base<D2> { void impl() { std::cout << "D2::impl()\n"; } };

int main()
{
    Base<D1> b1; b1.name();
    Base<D2> b2; b2.name();

    D1 d1; d1.name();
    D2 d2; d2.name();
}
/*
D1::impl()
D2::impl()
D1::impl()
D2::impl()
*/
```
* [Curiously recurring template pattern - Wikipedia](https://en.wikipedia.org/wiki/Curiously_recurring_template_pattern)
	* The curiously recurring template pattern (CRTP) is an idiom in C++ in which a class X derives from a class template instantiation using X itself as a template argument.[1] More generally it is known as F-bound polymorphism, and it is a form of F-bounded quantification.
* [Curiously recurring template pattern (CRTP) - GeeksforGeeks](https://www.geeksforgeeks.org/curiously-recurring-template-pattern-crtp-2/)

##### Function Template

* [Function template - cppreference.com](https://en.cppreference.com/w/cpp/language/function_template)

##### Parameter pack

* [Parameter pack(since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/parameter_pack)
* [C++ Variadics | HackerRank](https://www.hackerrank.com/challenges/cpp-variadics/problem)
```c++
#include <iostream>
using namespace std;

// Enter your code for reversed_binary_value<bool...>()
template <bool a> int reversed_binary_value() { return a; }

template <bool a, bool b, bool... d> int reversed_binary_value() {
    return (reversed_binary_value<b, d...>() << 1) + a;
}

template <int n, bool...digits>
struct CheckValues {
    static void check(int x, int y)
    {
        CheckValues<n-1, 0, digits...>::check(x, y);
        CheckValues<n-1, 1, digits...>::check(x, y);
    }
};

template <bool...digits>
struct CheckValues<0, digits...> {
    static void check(int x, int y)
    {
        int z = reversed_binary_value<digits...>();
        std::cout << (z+64*y==x);
    }
};

int main()
{
    int t; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int x, y;
        cin >> x >> y;
        CheckValues<6>::check(x, y);
        cout << "\n";
    }
}
```

#### [Preprocessor](https://en.cppreference.com/w/cpp/preprocessor)

* The preprocessor is executed at [translation phase 4](https://en.cppreference.com/w/cpp/language/translation_phases#Phase_4), before the compilation. The result of preprocessing is a single file which is then passed to the actual compiler.
* [Preprocessor directives - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/preprocessor/)
* [Preprocessor Solution | HackerRank](https://www.hackerrank.com/challenges/preprocessor-solution/problem)
```c++
#define toStr(args) #args
#define foreach(v, i) for (auto i = 0; i < v.size(); ++ i)
#define io(v) cin >> v
#define FUNCTION(func, op) inline void func(int& left, int right) { left = (left op right) ? left : right; }
#define INF (int)((1 << 31) - 1)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i) {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach(v, i) {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) << ' '<< ans;

 return 0;
}
```

##### macro definitions (#define, #undef)

* [#undef directive (C/C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/hash-undef-directive-c-cpp?view=msvc-160)
  * Removes (undefines) a name previously created with #define.
  * #undef identifier

##### [Conditional inclusions (#ifdef, #ifndef, #if, #endif, #else and #elif)](https://en.cppreference.com/w/cpp/preprocessor/conditional)

##### Line control (#line)

##### Error directive (#error)

##### Source file inclusion (#include)

##### Pragma directive (#pragma)

* [once pragma | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/once?view=msvc-160)
  * Specifies that the compiler includes the header file only once, when compiling a source code file.
  * Syntax
    * #pragma once
  * Remarks
    * The use of #pragma once can reduce build times, as the compiler won't open and read the file again after the first #include of the file in the translation unit. It's called the multiple-include optimization. It has an effect similar to the include guard idiom, which uses preprocessor macro definitions to prevent multiple inclusions of the contents of the file. It also helps to prevent violations of the one definition rule: the requirement that all templates, types, functions, and objects have no more than one definition in your code.
    * We recommend the include guard idiom when code must be portable to compilers that don't implement the #pragma once directive, to maintain consistency with existing code, or when the multiple-include optimization is impossible. It can occur in complex projects when file system aliasing or aliased include paths prevent the compiler from identifying identical include files by canonical path.
  * [Header files (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-160#include-guards)
    * Typically, header files have an include guard or a #pragma once directive to ensure that they are not inserted multiple times into a single .cpp file.
  * [pragma once - Wikipedia](https://en.wikipedia.org/wiki/Pragma_once)
    * In the C and C++ programming languages, pragma once is a non-standard but widely supported preprocessor directive designed to cause the current source file to be included only once in a single compilation.[1] Thus, #pragma once serves the same purpose as include guards, but with several advantages, including: less code, avoidance of name clashes, and sometimes improvement in compilation speed.[2] On the other hand, #pragma once is not necessarily available in all compilers and its implementation is tricky and might not always be reliable.
  * [include guard - Wikipedia](https://en.wikipedia.org/wiki/Include_guard)
    * In the C and C++ programming languages, an #include guard, sometimes called a macro guard, header guard or file guard, is a particular construct used to avoid the problem of double inclusion when dealing with the include directive.
    * The C preprocessor processes directives of the form #include \<file> in a source file by locating the associated file on disk and transcluding ("including") its contents into a copy of the source file known as the translation unit, replacing the include directive in the process. The files included in this regard are generally header files, which typically contain declarations of functions and classes or structs. If certain C or C++ language constructs are defined twice, the resulting translation unit is invalid. #include guards prevent this erroneous construct from arising by the double inclusion mechanism.
    * The addition of #include guards to a header file is one way to make that file idempotent. Another construct to combat double inclusion is #pragma once, which is non-standard but nearly universally supported among C and C++ compilers.
  * [c++ - Is #pragma once a safe include guard? - Stack Overflow](https://stackoverflow.com/questions/787533/is-pragma-once-a-safe-include-guard)

##### Predefined macro names

* [Predefined macros | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-160)
* [SUCCEEDED macro (winerror.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/winerror/nf-winerror-succeeded)
  * Provides a generic test for success on any status value.
  * void SUCCEEDED(hr);
  * #define SUCCEEDED(hr) (((HRESULT)(hr)) &gt;= 0)
* [inject_statement import attribute | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/inject-statement?view=msvc-160)
  * Inserts its argument as source text into the type-library header.
  * #import type-library inject_statement( "source-text" )
* [named_guids import attribute | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/named-guids?view=msvc-160)
  * Tells the compiler to define and initialize GUID variables in the old style, of the form LIBID_MyLib, CLSID_MyCoClass, IID_MyInterface, and DIID_MyDispInterface.
  * #import type-library named_guids
* [rename_namespace import attribute | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/rename-namespace?view=msvc-160)
  * Renames the namespace that contains the contents of the type library.
  * #import type-library rename_namespace( "NewName" )

#### Multithreading

* [Concurrency support library - cppreference.com](https://en.cppreference.com/w/cpp/thread)
	* C++ includes built-in support for threads, atomic operations, mutual exclusion, condition variables, and futures.
* [Multithreading in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/multithreading-in-cpp/)
```c++
// CPP program to demonstrate multithreading
// using three different callables.
#include <iostream>
#include <thread>
using namespace std;

// A dummy function
void foo(int Z)
{
    for (int i = 0; i < Z; i++) {
        cout << "Thread using function"
            " pointer as callable\n";
    }
}

// A callable object
class thread_obj {
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
            cout << "Thread using function"
                " object as callable\n";
    }
};

int main()
{
    cout << "Threads 1 and 2 and 3 "
        "operating independently" << endl;

    // This thread is launched by using
    // function pointer as callable
    thread th1(foo, 3);

    // This thread is launched by using
    // function object as callable
    thread th2(thread_obj(), 3);

    // Define a Lambda Expression
    auto f = [](int x) {
        for (int i = 0; i < x; i++)
            cout << "Thread using lambda"
            " expression as callable\n";
    };

    // This thread is launched by using
    // lamda expression as callable
    thread th3(f, 3);

    // Wait for the threads to finish
    // Wait for thread t1 to finish
    th1.join();

    // Wait for thread t2 to finish
    th2.join();

    // Wait for thread t3 to finish
    th3.join();

    return 0;
}
```
* [现代 C++ 并发编程基础](https://mp.weixin.qq.com/s/GGIczr97q-RxAfAnQKeDRg)
  * https://changkun.de/modern-cpp/zh-cn/07-thread/index.html
  * 并行基础
  * 互斥量与临界区
  * 期物
  * 条件变量
* [C++并发编程（C++11到C++17）](https://mp.weixin.qq.com/s/sLaJQl4cj_c-M2qy7iX__A)
  * 为什么要并发编程
  * 并发与并行
    * 并发（Concurrent）与并行（Parallel）都是很常见的术语。
  * 进程与线程
  * 并发系统的性能
  * C++与并发编程
  * 编译器与C++标准
  * 测试环境
  * 线程
  * 管理当前线程
  * 一次调用
  * 并发任务
  * 竞争条件与临界区
  * 互斥体与锁
  * 通用锁定算法
  * 通用互斥管理
  * 并行算法
* [异步编程到底在说啥？](https://mp.weixin.qq.com/s/aaCVgXekO6unpFDfKchVlA)
	* 同步就好比你排队去自助售票机取电影票，你必须排队等待前一个人取完电影票才能到你，你不能在前一个取票的过程中取自己的票，这时我们说取电影票时你和前一个人是同步的。
	* 而异步就好比去吃大餐，你在座位上看菜单点菜，其它人也可以点菜，你不需要等待其它人吃完饭才能下单，这时我们说你点菜和其它人吃饭是异步的。

##### [\<thread>](https://en.cppreference.com/w/cpp/header/thread)

* Threads enable programs to execute across several processor cores.
* [std::thread - cppreference.com](https://en.cppreference.com/w/cpp/thread/thread)
	* The class thread represents a single thread of execution. Threads allow multiple functions to execute concurrently.
	* Threads begin execution immediately upon construction of the associated thread object (pending any OS scheduling delays), starting at the top-level function provided as a constructor argument. The return value of the top-level function is ignored and if it terminates by throwing an exception, std::terminate is called. The top-level function may communicate its return value or an exception to the caller via std::promise or by modifying shared variables (which may require synchronization, see std::mutex and std::atomic)
	* std::thread objects may also be in the state that does not represent any thread (after default construction, move from, detach, or join), and a thread of execution may not be associated with any thread objects (after detach).
	* No two std::thread objects may represent the same thread of execution; std::thread is not CopyConstructible or CopyAssignable, although it is MoveConstructible and MoveAssignable.
* [std::this_thread::sleep_for - cppreference.com](https://en.cppreference.com/w/cpp/thread/sleep_for)
	* Blocks the execution of the current thread for at least the specified sleep_duration.
	* This function may block for longer than sleep_duration due to scheduling or resource contention delays.
	* The standard recommends that a steady clock is used to measure the duration. If an implementation uses a system clock instead, the wait time may also be sensitive to clock adjustments.
* [用三个线程按顺序循环打印ABC三个字母 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/8575543.html)
* [Sleep v.s. sleep - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/5584088.html)
* [C++ 线程的使用](https://mp.weixin.qq.com/s/tMWxvw4Kmga5ayUfXHaaIw)
  * C++11 之前，C++ 语言没有对并发编程提供语言级别的支持，这使得我们在编写可移植的并发程序时，存在诸多的不便。现在 C++11 中增加了线程以及线程相关的类，很方便地支持了并发编程，使得编写的多线程程序的可移植性得到了很大的提高。
  * C++11 中提供的线程类叫做 std::thread，基于这个类创建一个新的线程非常的简单，只需要提供线程函数或者函数对象即可，并且可以同时指定线程函数的参数。我们首先来了解一下这个类提供的一些常用 API：
  * 1. 构造函数
  * 2. 公共成员函数
    * 2.1 get_id()
    * 2.2 join()
    * 2.3 detach()
    * 2.5 joinable()
    * 2.6 operator=
  * 3. 静态函数
  * 4. C 线程库
    * [C语言线程库的使用](https://mp.weixin.qq.com/s?__biz=MzI3ODQ3OTczMw==&mid=2247491745&idx=1&sn=d995e1617ed6ad3d56de28b5be127e73&scene=21#wechat_redirect)

##### [\<atomic>](https://en.cppreference.com/w/cpp/header/atomic)

* These components are provided for fine-grained atomic operations allowing for lockless concurrent programming. Each atomic operation is indivisible with regards to any other atomic operation that involves the same object. Atomic objects are [free of data races](https://en.cppreference.com/w/cpp/language/memory_model#Threads_and_data_races).
* [Atomic operations library - cppreference.com](https://en.cppreference.com/w/cpp/atomic)
	* The atomic library provides components for fine-grained atomic operations allowing for lockless concurrent programming. Each atomic operation is indivisible with regards to any other atomic operation that involves the same object. Atomic objects are free of data races.
	* [std::atomic - cppreference.com](https://en.cppreference.com/w/cpp/atomic/atomic)
		* Each instantiation and full specialization of the std::atomic template defines an atomic type. If one thread writes to an atomic object while another thread reads from it, the behavior is well-defined (see memory model for details on data races).
		* In addition, accesses to atomic objects may establish inter-thread synchronization and order non-atomic memory accesses as specified by std::memory_order.
		* std::atomic is neither copyable nor movable.
		* [std::atomic\<T>::atomic - cppreference.com](https://en.cppreference.com/w/cpp/atomic/atomic/atomic)
			* constructs an atomic object
		* [std::atomic\<T>::compare_exchange_weak, std::atomic\<T>::compare_exchange_strong - cppreference.com](https://en.cppreference.com/w/cpp/atomic/atomic/compare_exchange)
			* atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not
		* [atomic_compare_exchange_strong - C++ Reference](https://www.cplusplus.com/reference/atomic/atomic_compare_exchange_strong/)
			* Compare and exchange contained value (strong)
			* Compares the contents of the value contained in obj with the value pointed by expected:
			* - if true, it replaces the contained value with val.
			* - if false, it replaces the value pointed by expected with the contained value .
		* [std::atomic\<T>::load - cppreference.com](https://en.cppreference.com/w/cpp/atomic/atomic/load)
			* atomically obtains the value of the atomic object
		* [std::atomic\<T>::store - cppreference.com](https://en.cppreference.com/w/cpp/atomic/atomic/store)
			* atomically replaces the value of the atomic object with a non-atomic argument
		* [Non-blocking algorithm - Wikipedia](https://en.wikipedia.org/wiki/Non-blocking_algorithm)
			* In computer science, an algorithm is called non-blocking if failure or suspension of any thread cannot cause failure or suspension of another thread;[1] for some operations, these algorithms provide a useful alternative to traditional blocking implementations. A non-blocking algorithm is lock-free if there is guaranteed system-wide progress, and wait-free if there is also guaranteed per-thread progress. "Non-blocking" was used as a synonym for "lock-free" in the literature until the introduction of obstruction-freedom in 2003.[2]
		* [Linearizability - Wikipedia](https://en.wikipedia.org/wiki/Linearizability)
			* In concurrent programming, an operation (or set of operations) is linearizable if it consists of an ordered list of invocation and response events (callbacks), that may be extended by adding response events such that:
				* The extended list can be re-expressed as a sequential history (is serializable).
				* That sequential history is a subset of the original unextended list.
			* Informally, this means that the unmodified list of events is linearizable if and only if its invocations were serializable, but some of the responses of the serial schedule have yet to return.[1]
			* In a concurrent system, processes can access a shared object at the same time. Because multiple processes are accessing a single object, there may arise a situation in which while one process is accessing the object, another process changes its contents. Making a system linearizable is one solution to this problem. In a linearizable system, although operations overlap on a shared object, each operation appears to take place instantaneously. Linearizability is a strong correctness condition, which constrains what outputs are possible when an object is accessed by multiple processes concurrently. It is a safety property which ensures that operations do not complete in an unexpected or unpredictable manner. If a system is linearizable it allows a programmer to reason about the system.[2]
		* [Compare-and-swap - Wikipedia](https://en.wikipedia.org/wiki/Compare-and-swap)
			* In computer science, compare-and-swap (CAS) is an atomic instruction used in multithreading to achieve synchronization. It compares the contents of a memory location with a given value and, only if they are the same, modifies the contents of that memory location to a new given value. This is done as a single atomic operation. The atomicity guarantees that the new value is calculated based on up-to-date information; if the value had been updated by another thread in the meantime, the write would fail. The result of the operation must indicate whether it performed the substitution; this can be done either with a simple boolean response (this variant is often called compare-and-set), or by returning the value read from the memory location (not the value written to it).
```c++
#include <atomic>
#include <chrono>

mutable std::atomic_bool _wait{ false };

void _setWaitInProgress() const
{
    auto expected = false;

    // if _wait is not able to exchange, it will keep looping unless it is released to exchange
    while (!(_wait.compare_exchange_strong(expected, true))) {
        expected = false;
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
}

void _setWaitDone() const
{
    _wait.store(false);
}

void TestAtomic()
{
    _setWaitInProgress();

    DoSomething();

    _setWaitDone();
}
```
* [The Atomic Boolean - ModernesCpp.com](https://www.modernescpp.com/index.php/the-atomic-boolean)
```c++
// atomicCondition.cpp

#include <atomic>
#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

std::vector<int> mySharedWork;
std::atomic<bool> dataReady(false);

void waitingForWork(){
    std::cout << "Waiting " << std::endl;
    while ( !dataReady.load() ){             // (3)
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
    mySharedWork[1]= 2;                      // (4)
    std::cout << "Work done " << std::endl;
}

void setDataReady(){
    mySharedWork={1,0,3};                    // (1)
    dataReady= true;                         // (2)
    std::cout << "Data prepared" << std::endl;
}

int main()
{
    std::cout << std::endl;

    std::thread t1(waitingForWork);
    std::thread t2(setDataReady);

    t1.join();
    t2.join();

    for (auto v: mySharedWork){
        std::cout << v << " ";
    }

    std::cout << "\n\n";
}
```
![image](https://user-images.githubusercontent.com/34557994/156122924-ede55b2c-d15d-47cc-af2c-0b219f1d3391.png)
* [C++ 11 开发中的 Atomic 原子操作](https://mp.weixin.qq.com/s/FSE95BtgA2PT59HCX3EzsQ)

##### [\<mutex>](https://en.cppreference.com/w/cpp/header/mutex)

* Mutual exclusion algorithms prevent multiple threads from simultaneously accessing shared resources. This prevents data races and provides support for synchronization between threads.
* [std::mutex - cppreference.com](https://en.cppreference.com/w/cpp/thread/mutex)
	* The mutex class is a synchronization primitive that can be used to protect shared data from being simultaneously accessed by multiple threads.
	* mutex offers exclusive, non-recursive ownership semantics:
		* A calling thread owns a mutex from the time that it successfully calls either lock or try_lock until it calls unlock.
		* When a thread owns a mutex, all other threads will block (for calls to lock) or receive a false return value (for try_lock) if they attempt to claim ownership of the mutex.
		* A calling thread must not own the mutex prior to calling lock or try_lock.
	* The behavior of a program is undefined if a mutex is destroyed while still owned by any threads, or a thread terminates while owning a mutex. The mutex class satisfies all requirements of Mutex and StandardLayoutType.
	* std::mutex is neither copyable nor movable.
* [mutex - C++ Reference](https://www.cplusplus.com/reference/mutex/mutex/)
	* class mutex;
	* Mutex class
		* A mutex is a lockable object that is designed to signal when critical sections of code need exclusive access, preventing other threads with the same protection from executing concurrently and access the same memory locations.
		* mutex objects provide exclusive ownership and do not support recursivity (i.e., a thread shall not lock a mutex it already owns) -- see recursive_mutex for an alternative class that does.
		* It is guaranteed to be a standard-layout class.

###### Generic mutex management

* [std::lock_guard - cppreference.com](https://en.cppreference.com/w/cpp/thread/lock_guard)
	* Defined in header \<mutex>
	* template\< class Mutex > class lock_guard; (since C++11)
	* The class lock_guard is a mutex wrapper that provides a convenient RAII-style mechanism for owning a mutex for the duration of a scoped block.
	* When a lock_guard object is created, it attempts to take ownership of the mutex it is given. When control leaves the scope in which the lock_guard object was created, the lock_guard is destructed and the mutex is released.
	* The lock_guard class is non-copyable.
	* [std::lock_guard\<Mutex>::lock_guard - cppreference.com](https://en.cppreference.com/w/cpp/thread/lock_guard/lock_guard)
* [lock_guard - C++ Reference](https://www.cplusplus.com/reference/mutex/lock_guard/)
  * template \<class Mutex> class lock_guard;
  * Lock guard
    * A lock guard is an object that manages a mutex object by keeping it always locked.
    * On construction, the mutex object is locked by the calling thread, and on destruction, the mutex is unlocked. It is the simplest lock, and is specially useful as an object with automatic duration that lasts until the end of its context. In this way, it guarantees the mutex object is properly unlocked in case an exception is thrown.
    * Note though that the lock_guard object does not manage the lifetime of the mutex object in any way: the duration of the mutex object shall extend at least until the destruction of the lock_guard that locks it.

###### Generic locking algorithms

###### Call once

##### [\<future>](https://en.cppreference.com/w/cpp/header/future)

* The standard library provides facilities to obtain values that are returned and to catch exceptions that are thrown by asynchronous tasks (i.e. functions launched in separate threads). These values are communicated in a shared state, in which the asynchronous task may write its return value or store an exception, and which may be examined, waited for, and otherwise manipulated by other threads that hold instances of std::future or std::shared_future that reference that shared state.

#### Parse command line

* [Chapter 31. Boost.Program_options - 1.72.0](https://www.boost.org/doc/libs/1_72_0/doc/html/program_options.html)
  * The program_options library allows program developers to obtain program options, that is (name, value) pairs from the user, via conventional methods such as command line and config file.
  * [Tutorial - 1.72.0](https://www.boost.org/doc/libs/1_72_0/doc/html/program_options/tutorial.html#id-1.3.32.4.3)
    * https://github.com/boostorg/program_options/blob/develop/example/first.cpp
  * [default_value() - Class template typed_value - 1.72.0](https://www.boost.org/doc/libs/1_72_0/doc/html/boost/program_options/typed_value.html#id-1_3_32_9_10_1_1_1_5_1-bb)
  * [c++ - Boost.Program_Options: When \<bool> is specified as a command-line option, what are valid command-line parameters? - Stack Overflow](https://stackoverflow.com/questions/15629771/boost-program-options-when-bool-is-specified-as-a-command-line-option-what-a)
  * [Chapter 63. Boost.ProgramOptions](https://theboostcpplibraries.com/boost.program_options)

#### Logging

* [一文详解 C++ 日志框架](https://mp.weixin.qq.com/s/0heKciXbMl95WMTXLfr8UA)

### [Standard Template Library (STL)](https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm)

* [STL - c-cpp/面试总结之C-C++ at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E9%9D%A2%E8%AF%95%E6%80%BB%E7%BB%93%E4%B9%8BC-C%2B%2B#stl)

#### [Containers library](https://en.cppreference.com/w/cpp/container)

* The Containers library is a generic collection of class templates and algorithms that allow programmers to easily implement common data structures like queues, lists and stacks. There are three classes of containers -- sequence containers, associative containers, and unordered associative containers -- each of which is designed to support a different set of operations.
* The container manages the storage space that is allocated for its elements and provides member functions to access them, either directly or through iterators (objects with properties similar to pointers).
* Most containers have at least several member functions in common, and share functionalities. Which container is the best for the particular application depends not only on the offered functionality, but also on its efficiency for different workloads.
* Iterator invalidation
	* Read-only methods never invalidate iterators or references. Methods which modify the contents of a container may invalidate iterators and/or references, as summarized in this table.
* Thread safety
	* All container functions can be called concurrently by different threads on different containers. More generally, the C++ standard library functions do not read objects accessible by other threads unless those objects are directly or indirectly accessible via the function arguments, including the this pointer.
	* All const member functions can be called concurrently by different threads on the same container. In addition, the member functions begin(), end(), rbegin(), rend(), front(), back(), data(), find(), lower_bound(), upper_bound(), equal_range(), at(), and, except in associative containers, operator[], behave as const for the purposes of thread safety (that is, they can also be called concurrently by different threads on the same container). More generally, the C++ standard library functions do not modify objects unless those objects are accessible, directly or indirectly, via the function's non-const arguments, including the this pointer.
	* Different elements in the same container can be modified concurrently by different threads, except for the elements of std::vector\<bool> (for example, a vector of std::future objects can be receiving values from multiple threads).
	* Iterator operations (e.g. incrementing an iterator) read, but do not modify the underlying container, and may be executed concurrently with operations on other iterators on the same container, with the const member functions, or reads from the elements. Container operations that invalidate any iterators modify the container and cannot be executed concurrently with any operations on existing iterators even if those iterators are not invalidated.
	* Elements of the same container can be modified concurrently with those member functions that are not specified to access these elements. More generally, the C++ standard library functions do not read objects indirectly accessible through their arguments (including other elements of a container) except when required by its specification.
	* In any case, container operations (as well as algorithms, or any other C++ standard library functions) may be parallelized internally as long as this does not change the user-visible results (e.g. std::transform may be parallelized, but not std::for_each which is specified to visit each element of a sequence in order)

##### Sequence

Sequence containers implement data structures which can be accessed sequentially.

| array | static contiguous array |
| - | - |
| vector | dynamic contiguous array |
| deque | double-ended queue | 
| forward_list | singly-linked list| 
| list | doubly-linked list| 

###### [std::array](https://en.cppreference.com/w/cpp/container/array)

* std::array is a container that encapsulates fixed size arrays.
* This container is an aggregate type with the same semantics as a struct holding a C-style array T[N] as its only non-static data member. Unlike a C-style array, it doesn't decay to T* automatically. As an aggregate type, it can be initialized with aggregate-initialization given at most N initializers that are convertible to T: std::array\<int, 3> a = {1,2,3};.
* The struct combines the performance and accessibility of a C-style array with the benefits of a standard container, such as knowing its own size, supporting assignment, random access iterators, etc.
* std::array satisfies the requirements of Container and ReversibleContainer except that default-constructed array is not empty and that the complexity of swapping is linear, satisfies the requirements of ContiguousContainer, (since C++17) and partially satisfies the requirements of SequenceContainer.
* There is a special case for a zero-length array (N == 0). In that case, array.begin() == array.end(), which is some unique value. The effect of calling front() or back() on a zero-sized array is undefined.
* An array can also be used as a tuple of N elements of the same type.

###### [std::vector](https://en.cppreference.com/w/cpp/container/vector)

* 1) std::vector is a sequence container that encapsulates dynamic size arrays.
* 2) std::pmr::vector is an alias template that uses a polymorphic allocator.
* The elements are stored contiguously, which means that elements can be accessed not only through iterators, but also using offsets to regular pointers to elements. This means that a pointer to an element of a vector may be passed to any function that expects a pointer to an element of an array.
* The storage of the vector is handled automatically, being expanded and contracted as needed. Vectors usually occupy more space than static arrays, because more memory is allocated to handle future growth. This way a vector does not need to reallocate each time an element is inserted, but only when the additional memory is exhausted. The total amount of allocated memory can be queried using capacity() function. Extra memory can be returned to the system via a call to shrink_to_fit(). (since C++11)
* Reallocations are usually costly operations in terms of performance. The reserve() function can be used to eliminate reallocations if the number of elements is known beforehand.
* The complexity (efficiency) of common operations on vectors is as follows:
	* Random access - constant 𝓞(1)
	* Insertion or removal of elements at the end - amortized constant 𝓞(1)
	* Insertion or removal of elements - linear in the distance to the end of the vector 𝓞(n)
* std::vector (for T other than bool) meets the requirements of Container, AllocatorAwareContainer, SequenceContainer , ContiguousContainer (since C++17) and ReversibleContainer.
* [std::vector\<T,Allocator>::emplace_back - cppreference.com](https://en.cppreference.com/w/cpp/container/vector/emplace_back)
	* Appends a new element to the end of the container. The element is constructed through std::allocator_traits::construct, which typically uses placement-new to construct the element in-place at the location provided by the container. The arguments args... are forwarded to the constructor as std::forward\<Args>(args)....
	* If the new size() is greater than capacity() then all iterators and references (including the past-the-end iterator) are invalidated. Otherwise only the past-the-end iterator is invalidated.
* [std::vector\<T,Allocator>::clear - cppreference.com](https://en.cppreference.com/w/cpp/container/vector/clear)
	* Erases all elements from the container. After this call, size() returns zero.
	* Invalidates any references, pointers, or iterators referring to contained elements. Any past-the-end iterators are also invalidated.  
	* Leaves the capacity() of the vector unchanged (note: the standard's restriction on the changes to capacity is in the specification of vector::reserve, see [1])	
* [vector::emplace_back - C++ Reference](http://www.cplusplus.com/reference/vector/vector/emplace_back/)
	* Construct and insert element at the end
		* Inserts a new element at the end of the vector, right after its current last element. This new element is constructed in place using args as the arguments for its constructor.
		* This effectively increases the container size by one, which causes an automatic reallocation of the allocated storage space if -and only if- the new vector size surpasses the current vector capacity.
		* The element is constructed in-place by calling allocator_traits::construct with args forwarded.
		* A similar member function exists, push_back, which either copies or moves an existing object into the container.
* [push_back() vs emplace_back() in C++ STL Vectors - GeeksforGeeks](https://www.geeksforgeeks.org/push_back-vs-emplace_back-in-cpp-stl-vectors/)
	* push_back():
		* This method is used to insert elements in a vector from the end of the container. As the flexibility in the size of the vector is dynamic, the size of the container also increased by 1 after inserting any new element.
		* Note: reserve() is used instead of using “vector\<Point> vertices(3)”, as the below syntax sometimes doesn’t work because there is no default constructor defined in the class.
	* emplace_back():
		* This method is used instead of creating the object using parameterized constructor and allocating it into a different memory, then passing it to the copy constructor, which will insert it into the vector. This function can directly insert the object without calling the copy constructor.
* [std::vector<T,Allocator>::empty - cppreference.com](https://en.cppreference.com/w/cpp/container/vector/empty)
	* Checks if the container has no elements, i.e. whether begin() == end().
* [std::vector\<T,Allocator>::erase - cppreference.com](https://en.cppreference.com/w/cpp/container/vector/erase)
	* Erases the specified elements from the container.
		* 1) Removes the element at pos.
		* 2) Removes the elements in the range \[first, last).
	* Invalidates iterators and references at or after the point of the erase, including the end() iterator.
	* The iterator pos must be valid and dereferenceable. Thus the end() iterator (which is valid, but is not dereferenceable) cannot be used as a value for pos.
	* The iterator first does not need to be dereferenceable if first==last: erasing an empty range is a no-op.	
* [std::vector<T,Allocator>::insert - cppreference.com](https://en.cppreference.com/w/cpp/container/vector/insert)
	* Inserts elements at the specified location in the container.
		* 1-2) inserts value before pos
		* 3) inserts count copies of the value before pos
		* 4) inserts elements from range \[first, last) before pos.
		* The behavior is undefined if first and last are iterators into *this.
		* 5) inserts elements from initializer list ilist before pos.
	* Causes reallocation if the new size() is greater than the old capacity(). If the new size() is greater than capacity(), all iterators and references are invalidated. Otherwise, only the iterators and references before the insertion point remain valid. The past-the-end iterator is also invalidated.
* [std::vector<T,Allocator>::rbegin, std::vector<T,Allocator>::crbegin - cppreference.com](https://en.cppreference.com/w/cpp/container/vector/rbegin)
	* Returns a reverse iterator to the first element of the reversed vector. It corresponds to the last element of the non-reversed vector. If the vector is empty, the returned iterator is equal to rend().
* [2D Vector In C++ With User Defined Size - GeeksforGeeks](https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/)
* [vector初始化与否导致的巨大性能差异](https://mp.weixin.qq.com/s/HISHvxxd1LVBwouAE-uZHg)
	* 最近在优化引擎代码，在优化的过程中发现一个很奇怪的问题，一个简单的对象，存放在std::vector<> v中，如果v定义的时候为每个元素指定初值，那么后面对v中每个元素的写就飞快；相反的，如果v定义的时候，不指定初始值，那么后面对v中元素写操作的时候，就花费大约前一种2-3倍的时间。

###### [std::deque](https://en.cppreference.com/w/cpp/container/deque)

* std::deque (double-ended queue) is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end. In addition, insertion and deletion at either end of a deque never invalidates pointers or references to the rest of the elements.
* As opposed to std::vector, the elements of a deque are not stored contiguously: typical implementations use a sequence of individually allocated fixed-size arrays, with additional bookkeeping, which means indexed access to deque must perform two pointer dereferences, compared to vector's indexed access which performs only one.
* The storage of a deque is automatically expanded and contracted as needed. Expansion of a deque is cheaper than the expansion of a std::vector because it does not involve copying of the existing elements to a new memory location. On the other hand, deques typically have large minimal memory cost; a deque holding just one element has to allocate its full internal array (e.g. 8 times the object size on 64-bit libstdc++; 16 times the object size or 4096 bytes, whichever is larger, on 64-bit libc++).
* The complexity (efficiency) of common operations on deques is as follows:
	* Random access - constant O(1)
	* Insertion or removal of elements at the end or beginning - constant O(1)
	* Insertion or removal of elements - linear O(n)
* std::deque meets the requirements of Container, AllocatorAwareContainer, SequenceContainer and ReversibleContainer.
* [deque - C++ Reference](http://www.cplusplus.com/reference/deque/deque/)
	* deque (usually pronounced like "deck") is an irregular acronym of double-ended queue. Double-ended queues are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or its back).
* [Sliding Window Maximum (Maximum of all subarrays of size k) - GeeksforGeeks](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/#disqus_thread)
* [Deque-STL | HackerRank](https://www.hackerrank.com/challenges/deque-stl/problem)
```c++
#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){
    //Write your code here.
    deque<int>  queue(k);

    int i;
    // the first window with k elements
    for (i = 0; i < k; ++ i) {
        // remove smaller elements in queue
        while (!queue.empty() and arr[i] >= arr[queue.back()])
            queue.pop_back();
        // add new element
        queue.push_back(i);
    }

    // the remaining elements
    for (; i < n; ++ i) {
        cout << arr[queue.front()] << " ";

        // remove elements out of window
        while (!queue.empty() and queue.front() <= i - k)
            queue.pop_front();

        // remove smaller elements in queue
        while (!queue.empty() and arr[i] >= arr[queue.back()])
            queue.pop_back();

        // add new element
        queue.push_back(i);
    }

    // print the maximum element of the last window
    cout << arr[queue.front()] << endl;
}

int main(){

    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
```

###### [std::forward_list](https://en.cppreference.com/w/cpp/container/forward_list)

* std::forward_list is a container that supports fast insertion and removal of elements from anywhere in the container. Fast random access is not supported. It is implemented as a singly-linked list. Compared to std::list this container provides more space efficient storage when bidirectional iteration is not needed.
* Adding, removing and moving the elements within the list, or across several lists, does not invalidate the iterators currently referring to other elements in the list. However, an iterator or reference referring to an element is invalidated when the corresponding element is removed (via erase_after) from the list.
* std::forward_list meets the requirements of Container (except for the size member function and that operator=='s complexity is always linear), AllocatorAwareContainer and SequenceContainer.
* [std::forward_list<T,Allocator>::emplace_front - cppreference.com](https://en.cppreference.com/w/cpp/container/forward_list/emplace_front)
	* Inserts a new element to the beginning of the container. The element is constructed through std::allocator_traits::construct, which typically uses placement-new to construct the element in-place at the location provided by the container. The arguments args... are forwarded to the constructor as std::forward\<Args>(args)....
	* No iterators or references are invalidated.
* [std::forward_list<T,Allocator>::reverse - cppreference.com](https://en.cppreference.com/w/cpp/container/forward_list/reverse)
	* Reverses the order of the elements in the container. No references or iterators become invalidated.
* [std::forward_list<T,Allocator>::sort - cppreference.com](https://en.cppreference.com/w/cpp/container/forward_list/sort)
	* Sorts the elements in ascending order. The order of equal elements is preserved. The first version uses operator< to compare the elements, the second version uses the given comparison function comp.
	* If an exception is thrown, the order of elements in *this is unspecified.
```c++
#include <iostream>
#include <forward_list>

std::ostream& operator<<(std::ostream& ostr, const std::forward_list<int>& list)
{
    for (auto &i : list) {
        ostr << " " << i;
    }
    return ostr;
}

int main()
{
    std::forward_list<int> list = { 8,7,5,9,0,1,3,2,6,4 };

    list.emplace_front(10);

    std::cout << "before:     " << list << "\n";    // before:      10 8 7 5 9 0 1 3 2 6 4

    list.sort();
    std::cout << "ascending:  " << list << "\n";    // ascending:   0 1 2 3 4 5 6 7 8 9 10

    list.reverse();
    std::cout << "descending: " << list << "\n";    // descending:  10 9 8 7 6 5 4 3 2 1 0

    return 0;
}
```

###### [std::list](https://en.cppreference.com/w/cpp/container/list)

* std::list is a container that supports constant time insertion and removal of elements from anywhere in the container. Fast random access is not supported. It is usually implemented as a doubly-linked list. Compared to std::forward_list this container provides bidirectional iteration capability while being less space efficient.
* Adding, removing and moving the elements within the list or across several lists does not invalidate the iterators or references. An iterator is invalidated only when the corresponding element is deleted.
* std::list meets the requirements of Container, AllocatorAwareContainer, SequenceContainer and ReversibleContainer.

##### Associative

* Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity).

| set | collection of unique keys, sorted by keys |
| - | - |
| map | collection of key-value pairs, sorted by keys, keys are unique | 
| multiset | collection of keys, sorted by keys | 
| multimap | collection of key-value pairs, sorted by keys

###### [std::set](https://en.cppreference.com/w/cpp/container/set)

* std::set is an associative container that contains a sorted set of unique objects of type Key. Sorting is done using the key comparison function Compare. Search, removal, and insertion operations have logarithmic complexity. Sets are usually implemented as red-black trees.
* Everywhere the standard library uses the Compare requirements, uniqueness is determined by using the equivalence relation. In imprecise terms, two objects a and b are considered equivalent if neither compares less than the other: !comp(a, b) && !comp(b, a).
* std::set meets the requirements of Container, AllocatorAwareContainer, AssociativeContainer and ReversibleContainer.
* [std::set<Key,Compare,Allocator>::contains - cppreference.com](https://en.cppreference.com/w/cpp/container/set/contains)
	* 1) Checks if there is an element with key equivalent to key in the container.
	* 2) Checks if there is an element with key that compares equivalent to the value x. This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type. It allows calling this function without constructing an instance of Key.
* [std::set<Key,Compare,Allocator>::count - cppreference.com](https://en.cppreference.com/w/cpp/container/set/count)
	* Returns the number of elements with key that compares equivalent to the specified argument, which is either 1 or 0 since this container does not allow duplicates.
	* 1) Returns the number of elements with key key.
	* 2) Returns the number of elements with key that compares equivalent to the value x. This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type. They allow calling this function without constructing an instance of Key.
* [std::set<Key,Compare,Allocator>::erase - cppreference.com](https://en.cppreference.com/w/cpp/container/set/erase)
	* Removes specified elements from the container.
	* 1) Removes the element at pos. Only one overload is provided if iterator and const_iterator are the same type. (since C++11)
	* 2) Removes the elements in the range \[first; last), which must be a valid range in *this.
	* 3) Removes the element (if one exists) with the key equivalent to key.
	* 4) Removes the element (if one exists) with key that compares equivalent to the value x. This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type, and neither iterator nor const_iterator is implicitly convertible from K. It allows calling this function without constructing an instance of Key.
	* References and iterators to the erased elements are invalidated. Other references and iterators are not affected.
	* The iterator pos must be valid and dereferenceable. Thus the end() iterator (which is valid, but is not dereferenceable) cannot be used as a value for pos.
* [std::set<Key,Compare,Allocator>::find - cppreference.com](https://en.cppreference.com/w/cpp/container/set/find)
	* 1,2) Finds an element with key equivalent to key.
	* 3,4) Finds an element with key that compares equivalent to the value x. This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type. It allows calling this function without constructing an instance of Key.
	* [set find() function in C++ STL - GeeksforGeeks](https://www.geeksforgeeks.org/set-find-function-in-c-stl/)
		* The set::find is a built-in function in C++ STL which returns an iterator to the element which is searched in the set container. If the element is not found,  then the iterator points to the position just after the last element in the set.
		* Time Complexity: The time complexity of set_name.find( key ) is O( log N ). As the elements are stored in a sorted manner by default.
```c++
#include <iostream>
#include <set>
 
struct FatKey   { int x; int data[1000]; };
struct LightKey { int x; };
// Note: as detailed above, the container must use std::less<> (or other 
//   transparent Comparator) to access these overloads.
// This includes standard overloads, such as between std::string and std::string_view.
bool operator<(const FatKey& fk, const LightKey& lk) { return fk.x < lk.x; }
bool operator<(const LightKey& lk, const FatKey& fk) { return lk.x < fk.x; }
bool operator<(const FatKey& fk1, const FatKey& fk2) { return fk1.x < fk2.x; }
 
int main()
{  
// simple comparison demo
    std::set<int> example = {1, 2, 3, 4};
 
    auto search = example.find(2);
    if (search != example.end()) {
        std::cout << "Found " << (*search) << '\n';
    } else {
        std::cout << "Not found\n";
    }
 
// transparent comparison demo
    std::set<FatKey, std::less<>> example2 = { {1, {} }, {2, {} }, {3, {} }, {4, {} } };
 
    LightKey lk = {2};
    auto search2 = example2.find(lk);
    if (search2 != example2.end()) {
        std::cout << "Found " << search2->x << '\n';
    } else {
        std::cout << "Not found\n";
    }
}
```
* [std::set<Key,Compare,Allocator>::insert - cppreference.com](https://en.cppreference.com/w/cpp/container/set/insert)
	* Inserts element(s) into the container, if the container doesn't already contain an element with an equivalent key.

###### [std::map](https://en.cppreference.com/w/cpp/container/map)

* std::map is a sorted associative container that contains key-value pairs with unique keys. Keys are sorted by using the comparison function Compare. Search, removal, and insertion operations have logarithmic complexity. Maps are usually implemented as red-black trees.
* Everywhere the standard library uses the Compare requirements, uniqueness is determined by using the equivalence relation. In imprecise terms, two objects a and b are considered equivalent (not unique) if neither compares less than the other: !comp(a, b) && !comp(b, a).
* std::map meets the requirements of Container, AllocatorAwareContainer, AssociativeContainer and ReversibleContainer.
* [map - C++ Reference](http://www.cplusplus.com/reference/map/map/)
* [(constructor)](https://en.cppreference.com/w/cpp/container/map/map)
	* constructs the map (public member function)
	* Constructs new container from a variety of data sources and optionally using user supplied allocator alloc or comparison function object comp.
	* [Copy a map in C++ | Techie Delight](https://www.techiedelight.com/copy-a-map-in-cpp/)
		* 1. Using copy constructor
		* 2. Using std::map::insert
		* 3. Using std::copy 
* [map::operator[] - C++ Reference](http://www.cplusplus.com/reference/map/map/operator[]/)
	* access or insert specified element (public member function)
	* If k matches the key of an element in the container, the function returns a reference to its mapped value.
	* If k does not match the key of any element in the container, the function inserts a new element with that key and returns a reference to its mapped value. Notice that this always increases the container size by one, even if no mapped value is assigned to the element (the element is constructed using its default constructor).
	* A similar member function, map::at, has the same behavior when an element with the key exists, but throws an exception when it does not.
	* A call to this function is equivalent to:
		* (*((this->insert(make_pair(k,mapped_type()))).first)).second
* !!! DON'T use double as the key as it could not be found due to the double precision
	* [c++ - Floating point keys in std:map - Stack Overflow](https://stackoverflow.com/questions/6684573/floating-point-keys-in-stdmap)
	* use static_cast\<int>(std::round(key * 10)) as key instead
* [std::map<Key,T,Compare,Allocator>::begin, std::map<Key,T,Compare,Allocator>::cbegin - cppreference.com](https://en.cppreference.com/w/cpp/container/map/begin)
	* Returns an iterator to the first element of the map.
	* If the map is empty, the returned iterator will be equal to end().
	* returns an iterator to the beginning (public member function)
	* [map::cbegin - C++ Reference](http://www.cplusplus.com/reference/map/map/cbegin/)
		* Return const_iterator to beginning
			* Returns a const_iterator pointing to the first element in the container.
			* A const_iterator is an iterator that points to const content. This iterator can be increased and decreased (unless it is itself also const), just like the iterator returned by map::begin, but it cannot be used to modify the contents it points to, even if the map object is not itself const.
			* If the container is empty, the returned iterator value shall not be dereferenced.
	* [map::begin() and end() in C++ STL - GeeksforGeeks](https://www.geeksforgeeks.org/mapbegin-end-c-stl/)
	* [map cbegin() and cend() function in C++ STL - GeeksforGeeks](https://www.geeksforgeeks.org/map-cbegin-and-cend-function-in-c-stl/)
		* `for (auto itr = mp.cbegin(); itr != mp.cend(); ++ itr) {}`
* [std::map<Key,T,Compare,Allocator>::end, std::map<Key,T,Compare,Allocator>::cend - cppreference.com](https://en.cppreference.com/w/cpp/container/map/end)
	* returns an iterator to the end (public member function)
	* Returns an iterator to the element following the last element of the map.
	* This element acts as a placeholder; attempting to access it results in undefined behavior.
* [std::map<Key,T,Compare,Allocator>::rbegin, std::map<Key,T,Compare,Allocator>::crbegin - cppreference.com](https://en.cppreference.com/w/cpp/container/map/rbegin)
	* returns a reverse iterator to the beginning (public member function)
	* [map rbegin() function in C++ STL - GeeksforGeeks](https://www.geeksforgeeks.org/map-rbegin-function-in-c-stl/)
	* [c++ - Last key in a std::map - Stack Overflow](https://stackoverflow.com/questions/289715/last-key-in-a-stdmap)
		* `map.rbegin()->first`
* [std::map<Key,T,Compare,Allocator>::empty - cppreference.com](https://en.cppreference.com/w/cpp/container/map/empty)
	* checks whether the container is empty (public member function)
	* Checks if the container has no elements, i.e. whether begin() == end().
	* Return value
		* true if the container is empty, false otherwise
	* Complexity
		* Constant. 
* [std::map<Key,T,Compare,Allocator>::clear - cppreference.com](https://en.cppreference.com/w/cpp/container/map/clear)
	* clears the contents (public member function)
	* Erases all elements from the container. After this call, size() returns zero.
	* Invalidates any references, pointers, or iterators referring to contained elements. Any past-the-end iterator remains valid.
* [std::map<Key,T,Compare,Allocator>::insert - cppreference.com](https://en.cppreference.com/w/cpp/container/map/insert)
	* inserts elements or nodes (since C++17) (public member function)
	* Inserts element(s) into the container, if the container doesn't already contain an element with an equivalent key.
```c++
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
 
using namespace std::literals;
 
template<typename It>
void printInsertionStatus(It it, bool success)
{
    std::cout << "Insertion of " << it->first << (success ? " succeeded\n" : " failed\n");
}
 
int main()
{
    std::map<std::string, float> karasunoPlayerHeights;
 
    // Overload 3: insert from rvalue reference
    const auto [it_hinata, success] = karasunoPlayerHeights.insert({"Hinata"s, 162.8});
    printInsertionStatus(it_hinata, success);
 
    {
        // Overload 1: insert from lvalue reference
        const auto [it, success2] = karasunoPlayerHeights.insert(*it_hinata);
        printInsertionStatus(it, success2);
    }
    {
        // Overload 2: insert via forwarding to emplace
        const auto [it, success] = karasunoPlayerHeights.insert(std::pair{"Kageyama", 180.6});
        printInsertionStatus(it, success);
    }
 
    {
        // Overload 6: insert from rvalue reference with positional hint
        const std::size_t n = std::size(karasunoPlayerHeights);
        const auto it = karasunoPlayerHeights.insert(it_hinata, {"Azumane"s, 184.7});
        printInsertionStatus(it, std::size(karasunoPlayerHeights) != n);
    }
    {
        // Overload 4: insert from lvalue reference with positional hint
        const std::size_t n = std::size(karasunoPlayerHeights);
        const auto it = karasunoPlayerHeights.insert(it_hinata, *it_hinata);
        printInsertionStatus(it, std::size(karasunoPlayerHeights) != n);
    }
    {
        // Overload 5: insert via forwarding to emplace with positional hint
        const std::size_t n = std::size(karasunoPlayerHeights);
        const auto it = karasunoPlayerHeights.insert(it_hinata, std::pair{"Tsukishima", 188.3});
        printInsertionStatus(it, std::size(karasunoPlayerHeights) != n);
    }
 
    auto node_hinata = karasunoPlayerHeights.extract(it_hinata);
    std::map<std::string, float> playerHeights;
 
    // Overload 7: insert from iterator range
    playerHeights.insert(std::begin(karasunoPlayerHeights), std::end(karasunoPlayerHeights));
 
    // Overload 8: insert from initializer_list
    playerHeights.insert({{"Kozume"s, 169.2}, {"Kuroo", 187.7}});
 
 
    // Overload 9: insert node
    const auto status = playerHeights.insert(std::move(node_hinata));
    printInsertionStatus(status.position, status.inserted);
 
    node_hinata = playerHeights.extract(status.position);
    {
        // Overload 10: insert node with positional hint
        const std::size_t n = std::size(playerHeights);
        const auto it = playerHeights.insert(std::begin(playerHeights), std::move(node_hinata));
        printInsertionStatus(it, std::size(playerHeights) != n);
    }
 
 
    // Print resulting map
    std::cout << std::left << '\n';
    for (const auto& [name, height] : playerHeights)
        std::cout << std::setw(10) << name << " | " << height << "cm\n";
}
```
* [std::map<Key,T,Compare,Allocator>::erase - cppreference.com](https://en.cppreference.com/w/cpp/container/map/erase)
	* Removes specified elements from the container.
	* 1) Removes the element at pos.
	* 2) Removes the elements in the range \[first; last), which must be a valid range in *this.
	* 3) Removes the element (if one exists) with the key equivalent to key.
	* 4) Removes the element (if one exists) with key that compares equivalent to the value x. This overload participates in overload resolution only if the qualified-id Compare::is_transparent is valid and denotes a type, and neither iterator nor const_iterator is implicitly convertible from K. It allows calling this function without constructing an instance of Key.
	* References and iterators to the erased elements are invalidated. Other references and iterators are not affected.
	* The iterator pos must be valid and dereferenceable. Thus the end() iterator (which is valid, but is not dereferenceable) cannot be used as a value for pos.
```c++
#include <map>
#include <iostream>
int main()
{
    std::map<int, std::string> c = {
        {1, "one" }, {2, "two" }, {3, "three"},
        {4, "four"}, {5, "five"}, {6, "six"  }
    };
 
    // erase all odd numbers from c
    for(auto it = c.begin(); it != c.end(); ) {
        if(it->first % 2 != 0)
            it = c.erase(it);
        else
            ++it;
    }
 
    for(auto& p : c) {
        std::cout << p.second << ' ';
    }
}
```
* [std::map<Key,T,Compare,Allocator>::extract - cppreference.com](https://en.cppreference.com/w/cpp/container/map/extract)
	* extracts nodes from the container (public member function)
	* [How to Modify a Key in a C++ Map or Set - Fluent C++](https://www.fluentcpp.com/2020/05/01/how-to-change-a-key-in-a-map-or-set-in-cpp/)
```c++
auto myMap = std::map<std::string, int>{ {"one", 1}, {"two", 2}, {"three", 3} };

auto node = myMap.extract("two");
if (!node.empty())
{
    node.key() = "dos";
    myMap.insert(std::move(node));
}

template<typename Container>
void replaceKey(Container& container,
                const typename Container::key_type& oldKey,
                const typename Container::key_type& newKey)
{
    auto node = container.extract(oldKey);
    if(!node.empty())
    {
        node.key() = newKey;
        container.insert(std::move(node));
    }
}
```
* [std::map<Key,T,Compare,Allocator>::merge - cppreference.com](https://en.cppreference.com/w/cpp/container/map/merge)
	* splices nodes from another container (public member function)
	* Attempts to extract ("splice") each element in source and insert it into *this using the comparison object of *this. If there is an element in *this with key equivalent to the key of an element from source, then that element is not extracted from source. No elements are copied or moved, only the internal pointers of the container nodes are repointed. All pointers and references to the transferred elements remain valid, but now refer into *this, not into source.
	* The behavior is undefined if get_allocator() != source.get_allocator().
	* Parameters
		* source	-	compatible container to transfer the nodes from
	* Return value
		* (none)
	* Exceptions
		* Does not throw unless comparison throws.
	* Complexity
		* N*log(size()+N)), where N is source.size().
	* [Merge two maps, summing values for same keys in C++ - Stack Overflow](https://stackoverflow.com/questions/20771786/merge-two-maps-summing-values-for-same-keys-in-c)
```c++
#include <map>
#include <iostream>
#include <string>
 
int main()
{
  std::map<int, std::string> ma {{1, "apple"}, {5, "pear"}, {10, "banana"}};
  std::map<int, std::string> mb {{2, "zorro"}, {4, "batman"}, {5, "X"}, {8, "alpaca"}};
  std::map<int, std::string> u;

  std::cout << "u.size(): " << u.size() << '\n';
  std::cout << "ma.size(): " << ma.size() << '\n';

  u.merge(ma);

  std::cout << "u.size(): " << u.size() << '\n';
  std::cout << "ma.size(): " << ma.size() << '\n';

  u.merge(mb);

  std::cout << "mb.size(): " << mb.size() << '\n';
  std::cout << "mb.at(5): " << mb.at(5) << '\n';

  for(auto const &kv: u)
    std::cout << kv.first << ", " << kv.second << '\n';
}

/*
u.size(): 0
ma.size(): 3
u.size(): 3
ma.size(): 0
mb.size(): 1
mb.at(5): X
1, apple
2, zorro
4, batman
5, pear
8, alpaca
10, banana
*/
```
* [std::map<Key,T,Compare,Allocator>::find - cppreference.com](https://en.cppreference.com/w/cpp/container/map/find)
	* finds element with specific key (public member function)
	* Return value
		* Iterator to an element with key equivalent to key. If no such element is found, past-the-end (see end()) iterator is returned.
	* Complexity
		* Logarithmic in the size of the container.
```c++
std::map<int,char> example = {{1,'a'},{2,'b'}};

auto search = example.find(2);
if (search != example.end()) {
    std::cout << "Found " << search->first << " " << search->second << '\n';
} else {
    std::cout << "Not found\n";
}
```
* [std::map<Key,T,Compare,Allocator>::contains - cppreference.com](https://en.cppreference.com/w/cpp/container/map/contains)
	* checks if the container contains element with specific key (public member function)
* [std::map<Key,T,Compare,Allocator>::equal_range - cppreference.com](https://en.cppreference.com/w/cpp/container/map/equal_range)
	* returns range of elements matching a specific key (public member function)
	* Return value
		* std::pair containing a pair of iterators defining the wanted range: the first pointing to the first element that is not less than key and the second pointing to the first element greater than key.
		* If there are no elements not less than key, past-the-end (see end()) iterator is returned as the first element. Similarly if there are no elements greater than key, past-the-end iterator is returned as the second element.
	* Complexity
		* Logarithmic in the size of the container.
* [std::map<Key,T,Compare,Allocator>::lower_bound - cppreference.com](https://en.cppreference.com/w/cpp/container/map/lower_bound)
	* returns an iterator to the first element not less than the given key (public member function)
	* Return value
		* Iterator pointing to the first element that is not less than key. If no such element is found, a past-the-end iterator (see end()) is returned.
	* Complexity
		* Logarithmic in the size of the container.
* [std::map<Key,T,Compare,Allocator>::upper_bound - cppreference.com](https://en.cppreference.com/w/cpp/container/map/upper_bound)
	* returns an iterator to the first element greater than the given key (public member function)
	* Return value
		* Iterator pointing to the first element that is greater than key. If no such element is found, past-the-end (see end()) iterator is returned.
	* Complexity
		* Logarithmic in the size of the container.
	* [upper_bound in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/upper_bound-in-cpp/)
```c++
// CPP program to illustrate using
// std :: upper_bound with vectors
#include <bits/stdc++.h>

// Driver code
int main()
{
    std::vector<int> v{ 10, 20, 30, 40, 50 };

    // Print vector
    std::cout << "Vector contains :";
    for (int i = 0; i < v.size(); i++)
        std::cout << " " << v[i];
    std::cout << "\n";

    std::vector<int>::iterator upper1, upper2;

    // std :: upper_bound
    upper1 = std::upper_bound(v.begin(), v.end(), 35);
    upper2 = std::upper_bound(v.begin(), v.end(), 45);

    std::cout << "\nupper_bound for element 35 is at position : "
            << (upper1 - v.begin());
    std::cout << "\nupper_bound for element 45 is at position : "
            << (upper2 - v.begin());

    return 0;
}
```
* [std::erase_if (std::map) - cppreference.com](https://en.cppreference.com/w/cpp/container/map/erase_if)
	* Erases all elements satisfying specific criteria (function template)
	* `erase_if( std::map<Key,T,Compare,Alloc>& c, Pred pred );` (since C++20)
	* Return value
		* The number of erased elements.
* [Descending Order in Map and Multimap of C++ STL - GeeksforGeeks](https://www.geeksforgeeks.org/descending-order-map-multimap-c-stl/)
	* We can use the third parameter, that is std::greater along with map and multimap to store elements in descending order.
	* Descending order in the map: 
		* A map stores key-value pairs. A self-balancing-BST (typically Red-Black tree) is used to implement it.
```c++
map<key_datatype, value_datatype, greater<int> > mapName;
```
* [Maps-STL | HackerRank](https://www.hackerrank.com/challenges/cpp-maps/problem)
```c++
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string, int>    m;
    map<string, int>::iterator  it;
    int q, type, y;
    string  x;
    
    cin >> q;
    
    for (int i = 0; i < q; ++ i) {
        cin >> type >> x;
        switch (type) {
            case 1:
                cin >> y;
                // insert m[x] with default value 0 first if m[x] doesn't exist
                // then add y to m[x]
                m[x] += y;
                break;
            case 2:
                m.erase(x);
                break;
            case 3:
                // insert m[x] with default value 0 if m[x] doesn't exist
                cout << m[x] << endl;
        }
    }
    
    return 0;
}
```

##### Unordered associative

* Unordered associative containers implement unsorted (hashed) data structures that can be quickly searched (O(1) amortized, O(n) worst-case complexity).

| unordered_set | collection of unique keys, hashed by keys | 
| - | - | 
| unordered_map | collection of key-value pairs, hashed by keys, keys are unique | 
| unordered_multiset | collection of keys, hashed by keys | 
| unordered_multimap | collection of key-value pairs, hashed by keys | 

###### [std::unordered_set](https://en.cppreference.com/w/cpp/container/unordered_set)

* Unordered set is an associative container that contains a set of unique objects of type Key. Search, insertion, and removal have average constant-time complexity.
* Internally, the elements are not sorted in any particular order, but organized into buckets. Which bucket an element is placed into depends entirely on the hash of its value. This allows fast access to individual elements, since once a hash is computed, it refers to the exact bucket the element is placed into.
* Container elements may not be modified (even by non const iterators) since modification could change an element's hash and corrupt the container.
* std::unordered_set meets the requirements of Container, AllocatorAwareContainer, UnorderedAssociativeContainer.
* [std::unordered_set<Key,Hash,KeyEqual,Allocator>::count - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_set/count)

###### [std::unordered_map](https://en.cppreference.com/w/cpp/container/unordered_map)

* Unordered map is an associative container that contains key-value pairs with unique keys. Search, insertion, and removal of elements have average constant-time complexity.
* Internally, the elements are not sorted in any particular order, but organized into buckets. Which bucket an element is placed into depends entirely on the hash of its key. Keys with the same hash code appear in the same bucket. This allows fast access to individual elements, since once the hash is computed, it refers to the exact bucket the element is placed into.
* std::unordered_map meets the requirements of Container, AllocatorAwareContainer, UnorderedAssociativeContainer.
* [(constructor)](https://en.cppreference.com/w/cpp/container/unordered_map/unordered_map)
* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::begin(size_type), std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::cbegin(size_type) - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/begin2)
* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::size - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/size)
* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::extract - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/extract)
	* extracts nodes from the container (public member function)
	* Return value
		* A node handle that owns the extracted element, or empty node handle in case the element is not found in (2,3).
	* Exceptions
		* 1) Throws nothing.
		* 2,3) Any exceptions thrown by the Hash and KeyEqual object.
	* Complexity
		* 1,2,3) Average case O(1), worst case O(a.size()).
	* Notes
		* extract is the only way to change a key of a map element without reallocation:
* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::at - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/at)
	* Returns a reference to the mapped value of the element with key equivalent to key. If no such element exists, an exception of type std::out_of_range is thrown.
* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::operator[] - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/operator_at)
	* Returns a reference to the value that is mapped to a key equivalent to key, performing an insertion if such key does not already exist.
* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::count - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/count)
	* returns the number of elements matching specific key
* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::find - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/find)
	* finds element with specific key
* [unordered_map - C++ Reference](https://www.cplusplus.com/reference/unordered_map/unordered_map/)
	* Unordered Map
	* Unordered maps are associative containers that store elements formed by the combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys.
	* In an unordered_map, the key value is generally used to uniquely identify the element, while the mapped value is an object with the content associated to this key. Types of key and mapped value may differ.
	* Internally, the elements in the unordered_map are not sorted in any particular order with respect to either their key or mapped values, but organized into buckets depending on their hash values to allow for fast access to individual elements directly by their key values (with a constant average time complexity on average).
	* unordered_map containers are faster than map containers to access individual elements by their key, although they are generally less efficient for range iteration through a subset of their elements.
	* Unordered maps implement the direct access operator (operator[]) which allows for direct access of the mapped value using its key value as argument.
	* Iterators in the container are at least forward iterators.
	* [Static const map inside class/struct - C++ Forum](http://www.cplusplus.com/forum/general/266519/)

##### Adaptors

* Container adaptors provide a different interface for sequential containers.

| stack | adapts a container to provide stack (LIFO data structure) | 
| - | - | 
| queue | adapts a container to provide queue (FIFO data structure) | 
| priority_queue | adapts a container to provide priority queue | 

###### [std::stack](https://en.cppreference.com/w/cpp/container/stack)

* The std::stack class is a container adaptor that gives the programmer the functionality of a stack - specifically, a LIFO (last-in, first-out) data structure.
* The class template acts as a wrapper to the underlying container - only a specific set of functions is provided. The stack pushes and pops the element from the back of the underlying container, known as the top of the stack.
* [std::stack<T,Container>::top - cppreference.com](https://en.cppreference.com/w/cpp/container/stack/top)
	* Returns reference to the top element in the stack. This is the most recently pushed element. This element will be removed on a call to pop(). Effectively calls c.back().

###### [std::queue](https://en.cppreference.com/w/cpp/container/queue)

* The std::queue class is a container adaptor that gives the programmer the functionality of a queue - specifically, a FIFO (first-in, first-out) data structure.
* The class template acts as a wrapper to the underlying container - only a specific set of functions is provided. The queue pushes the elements on the back of the underlying container and pops them from the front.

###### [std::priority_queue](https://en.cppreference.com/w/cpp/container/priority_queue)

* A priority queue is a container adaptor that provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction.
* A user-provided Compare can be supplied to change the ordering, e.g. using std::greater\<T> would cause the smallest element to appear as the top().
* Working with a priority_queue is similar to managing a heap in some random access container, with the benefit of not being able to accidentally invalidate the heap.

##### Views

#### [Algorithm library](https://en.cppreference.com/w/cpp/algorithm)

* The algorithms library defines functions for a variety of purposes (e.g. searching, sorting, counting, manipulating) that operate on ranges of elements. Note that a range is defined as \[first, last) where last refers to the element past the last element to inspect or modify.

##### Non-modifying sequence operations

* [std::all_of, std::any_of, std::none_of - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/all_any_none_of)
	* checks if a predicate is true for all, any or none of the elements in a range (function template)
* [std::for_each - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/for_each)
	* applies a function to a range of elements(function template)
    ```c++
    template< class InputIt, class UnaryFunction >
    UnaryFunction for_each( InputIt first, InputIt last, UnaryFunction f );
    (1) (until C++20)
    template< class InputIt, class UnaryFunction >
    constexpr UnaryFunction for_each( InputIt first, InputIt last, UnaryFunction f );
    (1) (since C++20)

    template< class ExecutionPolicy, class ForwardIt, class UnaryFunction2 >
    void for_each( ExecutionPolicy&& policy, ForwardIt first, ForwardIt last, UnaryFunction2 f );
    (2) (since C++17)
    ```
	* 1) Applies the given function object f to the result of dereferencing every iterator in the range \[first, last), in order.
	* 2) Applies the given function object f to the result of dereferencing every iterator in the range \[first, last) (not necessarily in order). The algorithm is executed according to policy. This overload does not participate in overload resolution unless std::is_execution_policy_v\<std::decay_t\<ExecutionPolicy>> (until C++20) std::is_execution_policy_v\<std::remove_cvref_t\<ExecutionPolicy>> (since C++20) is true.
	* For both overloads, if the iterator type is mutable, f may modify the elements of the range through the dereferenced iterator. If f returns a result, the result is ignored.
	* Unlike the rest of the parallel algorithms, for_each is not allowed to make copies of the elements in the sequence even if they are trivially copyable.
	* [for_each loop in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/for_each-loop-c/)
		* It is versatile, i.e.  Can work with any container.
		* It reduces chances of errors one can commit using generic for loop
		* It makes code more readable
		* for_each loops improve overall performance of code
	* [c++ - How can I change the value of the elements in a vector? - Stack Overflow](https://stackoverflow.com/questions/4807709/how-can-i-change-the-value-of-the-elements-in-a-vector)
	```c++
	double total = 0;
	for_each( v.begin(), v.end(), [&total](double  v) { total += v; });
	cout << "The sum of the values is: " << total << endl;

	double total = std::accumulate(v.begin(), v.end(), 0.0);
	```
	* [c++ - Use of for_each on map elements - Stack Overflow](https://stackoverflow.com/questions/2850312/use-of-for-each-on-map-elements)
		* You can iterate through a std::map object. Each iterator will point to a std::pair<const T,S> where T and S are the same types you specified on your map.
		* If you still want to use std::for_each, pass a function that takes a std::pair<const int, MyClass>& as an argument instead.
		* And pass it to std::for_each:
		```c++
		void CallMyMethod(std::pair<const int, MyClass>& pair) // could be a class static method as well
		{
		  pair.second.Method();
		}
		
		std::for_each(Map.begin(), Map.end(), CallMyMethod);
		```
* [std::find, std::find_if, std::find_if_not - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/find)
  * [find_if - C++ Reference](https://www.cplusplus.com/reference/algorithm/find_if/)
    * Find element in range
      * Returns an iterator to the first element in the range \[first,last) for which pred returns true. If no such element is found, the function returns last.
  * [std::find_if , std::find_if_not in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/stdfind_if-stdfind_if_not-in-c/)
  * [c++ - How to find out if an item is present in a std::vector? - Stack Overflow](https://stackoverflow.com/questions/571394/how-to-find-out-if-an-item-is-present-in-a-stdvector)
  	* `std::find(vec.begin(), vec.end(), item) != vec.end()`

##### Modifying sequence operations

* [std::copy, std::copy_if - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/copy)
	* copies a range of elements to a new location (function template)
	* Copies the elements in the range, defined by \[first, last), to another range beginning at d_first.
	* [c++ - How to use copy_if for maps - Stack Overflow](https://stackoverflow.com/questions/23548139/how-to-use-copy-if-for-maps)
* [std::transform - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/transform)
	* applies a function to a range of elements, storing results in a destination range (function template)
	* std::transform applies the given function to a range and stores the result in another range, keeping the original elements order and beginning at d_first.
	* Return value
		* Output iterator to the element past the last element transformed.
	* Notes
		* std::transform does not guarantee in-order application of unary_op or binary_op. To apply a function to a sequence in-order or to apply a function that modifies the elements of a sequence, use std::for_each.
```c++
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
 
int main()
{
    std::string s{"hello"};
    std::transform(s.cbegin(), s.cend(),
                   s.begin(), // write to the same location
                   [](unsigned char c) { return std::toupper(c); });
    std::cout << "s = " << quoted(s) << '\n';
 
    // achieving the same with std::for_each (see Notes above)
    std::string g{"hello"};
    std::for_each(g.begin(), g.end(), [](char& c) { // modify in-place
        c = std::toupper(static_cast<unsigned char>(c));
    });
    std::cout << "g = " << quoted(g) << '\n';
 
    std::vector<std::size_t> ordinals;
    std::transform(s.cbegin(), s.cend(), std::back_inserter(ordinals),
                   [](unsigned char c) { return c; });
 
    std::cout << "ordinals: ";
    for (auto ord : ordinals) {
       std::cout << ord << ' ';
    }
 
    std::transform(ordinals.cbegin(), ordinals.cend(), ordinals.cbegin(),
                   ordinals.begin(), std::plus<>{});
 
    std::cout << "\nordinals: ";
    for (auto ord : ordinals) {
       std::cout << ord << ' ';
    }
    std::cout << '\n';
}
/*
s = "HELLO"
g = "HELLO"
ordinals: 72 69 76 76 79 
ordinals: 144 138 152 152 158
*/
```
* [std::remove, std::remove_if - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/remove)
	* removes elements satisfying specific criteria (function template)
	* Return value
		* Past-the-end iterator for the new range of values (if this is not end, then it points to an unspecified value, and so do iterators to any values between this iterator and end).
	* Complexity
		* Exactly std::distance(first, last) applications of the predicate.
	* Notes
		* A call to remove is typically followed by a call to a container's erase method, which erases the unspecified values and reduces the physical size of the container to match its new logical size. These two invocations together constitute a so-called [Erase–remove idiom](https://en.wikipedia.org/wiki/Erase-remove_idiom), which can be achieved by the free function std::erase that has overloads for all standard sequence containers, or std::erase_if that has overloads for all standard containers (since C++20).
		* The similarly-named container member functions list::remove, list::remove_if, forward_list::remove, and forward_list::remove_if erase the removed elements.
		* These algorithms cannot be used with associative containers such as std::set and std::map because their iterator types do not dereference to MoveAssignable types (the keys in these containers are not modifiable).
		* The standard library also defines an overload of std::remove in \<cstdio>, which takes a const char* and is used to delete files.
		* Because std::remove takes value by reference, it can have unexpected behavior if it is a reference to an element of the range \[first, last).
	* [std::remove, std::remove_if in c++ - GeeksforGeeks](https://www.geeksforgeeks.org/stdremove-stdremove_if-c/)
	* [c++ - difference between erase and remove/remove_if algorithms? - Stack Overflow](https://stackoverflow.com/questions/3031923/difference-between-erase-and-remove-remove-if-algorithms)
		* No, std::remove_if will move the elements that don't match the predicate to the end of list and will return an iterator to the new "end". Erase will effectively drop the element (call the dtor) from the container.
		* The difference is perfectly illustrated by the examples
			* [remove_if - C++ Reference](https://cplusplus.com/reference/algorithm/remove_if/)
	* [c++ - using remove_if for a map container - Stack Overflow](https://stackoverflow.com/questions/29004092/using-remove-if-for-a-map-container)
		* remove_if works by scanning the elements and once an element is to be removed, it remembers the "gap" that will leave (keeping an iterator pointing thereto) while advancing another iterator to find the next element to retain... it then starts copying or moving elements from the latter position to the former until it reaches end().
		* That doesn't work for map, because you can't overwrite the pair<key,value> elements wholesale: the key values aren't allowed to be modified or the sorted-order invariant the implementation needs could be invalidated.
		* So, you'll need to abandon remove_if. You could use a normal loop, being careful to save the iterator-to-next-element rather than attempting to advance from a just-erased iterator. Lots of other questions about how to erase elements from a map while iterating, e.g. here....
		* [c++ - How to remove from a map while iterating it? - Stack Overflow](https://stackoverflow.com/questions/8234779/how-to-remove-from-a-map-while-iterating-it)
	* [c++ - remove_if equivalent for std::map - Stack Overflow](https://stackoverflow.com/questions/800955/remove-if-equivalent-for-stdmap)
* [std::swap - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/swap)
  * [swap() in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/swap-in-cpp/)
* [std::reverse - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/reverse)
	* reverses the order of elements in a range (function template)
	* Parameters
		* first, last	-	the range of elements to reverse
		* policy	-	the execution policy to use. See execution policy for details.
	* Type requirements
		* -BidirIt must meet the requirements of ValueSwappable and LegacyBidirectionalIterator.
	* Return value
		* (none)
	* Complexity
		* Exactly (last - first)/2 swaps.
	* Exceptions
		* The overload with a template parameter named ExecutionPolicy reports errors as follows:
		* If execution of a function invoked as part of the algorithm throws an exception and ExecutionPolicy is one of the standard policies, std::terminate is called. For any other ExecutionPolicy, the behavior is implementation-defined.
		* If the algorithm fails to allocate memory, std::bad_alloc is thrown.
```c++
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
 
int main()
{
    std::vector<int> v{1, 2, 3};
    std::reverse(v.begin(), v.end());
    for(auto e : v) std::cout << e;
    std::cout << '\n';
 
    int a[] = {4, 5, 6, 7};
    std::reverse(std::begin(a), std::end(a));
    for(auto e : a) std::cout << e;
}
/*
321
7654
*/
```
* [Reverse For Loops in C++ - Fluent C++](https://www.fluentcpp.com/2020/02/11/reverse-for-loops-in-cpp/)

##### Partitioning operations

##### Sorting operations

* [std::sort - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/sort)
	* Sorts the elements in the range \[first, last) in non-descending order. The order of equal elements is not guaranteed to be preserved.
	* [std::sort() in C++ STL - GeeksforGeeks](https://www.geeksforgeeks.org/sort-c-stl/)
```c++
#include <algorithm>
#include <functional>
#include <array>
#include <iostream>
#include <string_view>
 
int main()
{
    std::array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
 
    auto print = [&s](std::string_view const rem) {
        for (auto a : s) {
            std::cout << a << ' ';
        }
        std::cout << ": " << rem << '\n';
    };
 
    std::sort(s.begin(), s.end());
    print("sorted with the default operator<");
 
    std::sort(s.begin(), s.end(), std::greater<int>());
    print("sorted with the standard library compare function object");
 
    struct {
        bool operator()(int a, int b) const { return a < b; }
    } customLess;
    std::sort(s.begin(), s.end(), customLess);
    print("sorted with a custom function object");
 
    std::sort(s.begin(), s.end(), [](int a, int b) {
        return a > b;
    });
    print("sorted with a lambda expression");
}

/*
0 1 2 3 4 5 6 7 8 9 : sorted with the default operator<
9 8 7 6 5 4 3 2 1 0 : sorted with the standard library compare function object
0 1 2 3 4 5 6 7 8 9 : sorted with a custom function object
9 8 7 6 5 4 3 2 1 0 : sorted with a lambda expression
*/
```

##### Binary search operations (on sorted ranges)

* [lower_bound - C++ Reference](http://www.cplusplus.com/reference/algorithm/lower_bound/)
  * Returns an iterator pointing to the first element in the range \[first,last) which does not compare less than val.
  * [upper_bound - C++ Reference](http://www.cplusplus.com/reference/algorithm/upper_bound/)
  * [Lower Bound-STL | HackerRank](https://www.hackerrank.com/challenges/cpp-lower-bound/problem)
```c++
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, temp, q, y;
    vector<int> vec;
    vector<int>::iterator   low;
    
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> temp;
        vec.push_back(temp);
    }
    
    sort(vec.begin(), vec.end());
    
    cin >> q;
    for (int i = 0; i < q; i ++) {
        cin >> y;
        low = lower_bound(vec.begin(), vec.end(), y);
        if (*low == y) 
            cout << "Yes " << low - vec.begin() + 1 << endl;
        else
            cout << "No " << low - vec.begin() + 1 << endl;         
    }
    
    return 0;
}
```

##### Other operations on sorted ranges

##### Set operations (on sorted ranges)

##### Heap operations

##### Minimum/maximum operations

* [std::max - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/max)
	* returns the greater of the given values (function template)
* [std::max_element - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/max_element)
	* returns the largest element in a range (function template)
	* Finds the greatest element in the range \[first, last).
	* Return value
		* Iterator to the greatest element in the range \[first, last). If several elements in the range are equivalent to the greatest element, returns the iterator to the first such element. Returns last if the range is empty.
	* Complexity
		* Exactly max(N-1,0) comparisons, where N = std::distance(first, last).
```c++
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
 
static bool abs_compare(int a, int b)
{
    return (std::abs(a) < std::abs(b));
}
 
int main()
{
    std::vector<int> v{ 3, 1, -14, 1, 5, 9 }; 
    std::vector<int>::iterator result;
 
    result = std::max_element(v.begin(), v.end());
    std::cout << "max element at: " << std::distance(v.begin(), result) << '\n';
 
    result = std::max_element(v.begin(), v.end(), abs_compare);
    std::cout << "max element (absolute) at: " << std::distance(v.begin(), result) << '\n';
}
```
* [Find element with the maximum value in a map in C++ | Techie Delight](https://www.techiedelight.com/find-element-with-the-maximum-value-in-a-map-in-cpp/)
	* 1. Using std::max_element
	* 2. Using Loop
	* Note that user defined condition, e.g. x.second < 4 && y.second < 4, doesn't work
```c++
#include <iostream>
#include <map>
#include <algorithm>
 
int main()
{
    std::map<std::string, int> map = {
        {"two", 2}, {"one", 1}, {"four", 4}, {"three", 3}
    };
 
    auto pr = std::max_element(map.begin(), map.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
 
    std::cout << pr->first << std::endl;        // four

    pr = std::max_element(map.begin(), map.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second && x.second < 4 && y.second < 4;
                });
 
    std::cout << pr->first << std::endl;        // still four rather than three
 
    return 0;
}
```
* [std::min - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/min)
	* Returns the smaller of the given values.
		* 1-2) Returns the smaller of a and b.
		* 3-4) Returns the smallest of the values in initializer list ilist.
	* The (1,3) versions use operator< to compare the values, the (2,4) versions use the given comparison function comp.
	* [std::min in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/stdmin-in-cpp/)
	* [max - Find the smallest amongst 3 numbers in C++ - Stack Overflow](https://stackoverflow.com/questions/9424173/find-the-smallest-amongst-3-numbers-in-c)
		* `std::min({x, y, z})`
* [std::min_element - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/min_element)
	* returns the smallest element in a range (function template)
	* returns the smallest element in a range (function template)
	* Return value
		* Iterator to the smallest element in the range \[first, last). If several elements in the range are equivalent to the smallest element, returns the iterator to the first such element. Returns last if the range is empty.

##### Comparison operations

##### Permutation operations

##### Numeric operations

* Defined in header \<numeric>
* [std::accumulate - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/accumulate)
	* sums up a range of elements(function template)
	* Return value
		* 1) The sum of the given value and elements in the given range.
		* 2) The result of left fold of the given range over op
```c++
#include <iostream>
#include <numeric>
#include <map>
#include <vector>
 
int main()
{
    std::map<int, int> mp{{1, 1}, {3, 3}, {2, 2}};
    
    auto sum_map = std::accumulate(mp.begin(), mp.end(), 
                                    0, 
                                    [](const auto& a, const auto& b){
                                        return a + b.first * b.second;
                                    });
    
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    int sum = std::accumulate(v.begin(), v.end(), 0);
 
    int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
 
    auto dash_fold = [](std::string a, int b) {
                         return std::move(a) + '-' + std::to_string(b);
                     };
 
    std::string s = std::accumulate(std::next(v.begin()), v.end(),
                                    std::to_string(v[0]), // start with first element
                                    dash_fold);
 
    // Right fold using reverse iterators
    std::string rs = std::accumulate(std::next(v.rbegin()), v.rend(),
                                     std::to_string(v.back()), // start with last element
                                     dash_fold);
 
    std::cout << "sum_map: " << sum_map << '\n'
              << "sum: " << sum << '\n'
              << "product: " << product << '\n'
              << "dash-separated string: " << s << '\n'
              << "dash-separated string (right-folded): " << rs << '\n';
}
/*
sum_map: 14
sum: 55
product: 3628800
dash-separated string: 1-2-3-4-5-6-7-8-9-10
dash-separated string (right-folded): 10-9-8-7-6-5-4-3-2-1
*/
```
* [std::inner_product - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/inner_product)
	* computes the inner product of two ranges of elements (function template)
	* Computes inner product (i.e. sum of products) or performs ordered map/reduce operation on the range \[first1, last1) and the range beginning at first2.
```c++
#include <numeric>
#include <iostream>
#include <vector>
#include <functional>
int main()
{
    std::vector<int> a{0, 1, 2, 3, 4};
    std::vector<int> b{5, 4, 2, 3, 1};
 
    int r1 = std::inner_product(a.begin(), a.end(), b.begin(), 0);
    std::cout << "Inner product of a and b: " << r1 << '\n';
 
    int r2 = std::inner_product(a.begin(), a.end(), b.begin(), 0,
                                std::plus<>(), std::equal_to<>());
    std::cout << "Number of pairwise matches between a and b: " <<  r2 << '\n';
}
```
* [std::partial_sum - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/partial_sum)
	* computes the partial sum of a range of elements(function template)
	* Return value
		* Iterator to the element past the last element written.

##### Operations on uninitialized memory

##### C library

#### [Iterator library](https://en.cppreference.com/w/cpp/iterator)

##### Iterator adaptors

* [std::back_inserter - cppreference.com](https://en.cppreference.com/w/cpp/iterator/back_inserter)
	* creates a std::back_insert_iterator of type inferred from the argument (function template)
	* back_inserter is a convenient function template that constructs a std::back_insert_iterator for the container c with the type deduced from the type of the argument.
	* Parameters
		* c	-	container that supports a push_back operation
	* Return value
		* A std::back_insert_iterator which can be used to add elements to the end of the container c
* [std::inserter - cppreference.com](https://en.cppreference.com/w/cpp/iterator/inserter)
	* creates a std::insert_iterator of type inferred from the argument (function template)
	* inserter is a convenience function template that constructs a std::insert_iterator for the container c and its iterator i with the type deduced from the type of the argument.
	* Parameters
		* c	-	container that supports an insert operation
		* i	-	iterator in c indicating the insertion position
	* Return value
		* A std::insert_iterator which can be used to insert elements into the container c at the position indicated by i.
```c++
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <set>
 
int main()
{
    std::multiset<int> s {1, 2, 3};
 
    // std::inserter is commonly used with multi-sets
    std::fill_n(std::inserter(s, s.end()), 5, 2);
 
    for (int n : s)
        std::cout << n << ' ';
    std::cout << '\n';
 
    std::vector<int> d {100, 200, 300};
    std::vector<int> v {1, 2, 3, 4, 5};
 
    // when inserting in a sequence container, insertion point advances
    // because each std::insert_iterator::operator= updates the target iterator
    std::copy(d.begin(), d.end(), std::inserter(v, std::next(v.begin())));
 
    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';
}

/*
Output:

1 2 2 2 2 2 2 3 
1 100 200 300 2 3 4 5
*/
```

##### Iterator operations

* Defined in header \<iterator>
* [std::advance - cppreference.com](https://en.cppreference.com/w/cpp/iterator/advance)
	* Increments given iterator it by n elements.
	* If n is negative, the iterator is decremented. In this case, InputIt must meet the requirements of LegacyBidirectionalIterator, otherwise the behavior is undefined.
	* [advance - C++ Reference](https://www.cplusplus.com/reference/iterator/advance/)
		* Advance iterator
			* Advances the iterator it by n element positions.
			* If it is a random-access iterator, the function uses just once operator+ or operator-. Otherwise, the function uses repeatedly the increase or decrease operator (operator++ or operator--) until n elements have been advanced.
	* [std::advance in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/stdadvance-in-cpp/)
* [std::next - cppreference.com](https://en.cppreference.com/w/cpp/iterator/next)
	* increment an iterator (function template)
	* Return the nth successor of iterator it.
	* Notes
		* Although the expression ++c.begin() often compiles, it is not guaranteed to do so: c.begin() is an rvalue expression, and there is no LegacyInputIterator requirement that specifies that increment of an rvalue is guaranteed to work. In particular, when iterators are implemented as pointers or its operator++ is lvalue-ref-qualified, ++c.begin() does not compile, while std::next(c.begin()) does.
* [std::prev - cppreference.com](https://en.cppreference.com/w/cpp/iterator/prev)
	* decrement an iterator (function template)
	* Return the nth predecessor of iterator it.
	* Notes
		* Although the expression --c.end() often compiles, it is not guaranteed to do so: c.end() is an rvalue expression, and there is no iterator requirement that specifies that decrement of an rvalue is guaranteed to work. In particular, when iterators are implemented as pointers or its operator-- is lvalue-ref-qualified, --c.end() does not compile, while std::prev(c.end()) does.

##### Range access

* These non-member functions provide a generic interface for containers, plain arrays, and [std::initializer_list](https://en.cppreference.com/w/cpp/utility/initializer_list).
* [std::begin, std::cbegin - cppreference.com](https://en.cppreference.com/w/cpp/iterator/begin)
	* returns an iterator to the beginning of a container or array(function template)
* [std::end, std::cend - cppreference.com](https://en.cppreference.com/w/cpp/iterator/end)
	* returns an iterator to the end of a container or array(function template)

### [C++ Standard Library](https://www.tutorialspoint.com/cplusplus/cpp_standard_library.htm)

* [什么是 C 和 C++ 标准库？](https://mp.weixin.qq.com/s/wErRQ3AzgJ9lzQKsNG9SzA)
  * https://www.oschina.net/translate/c-c-standard-library
  * C 和 C++ 是如何制订的
  * C 标准库
  * C++ 标准库
  * 实现 C/C++ 标准库
  * GNU/Linux 版实现
  * Mac 和 iOS 版实现
  * Windows 版实现
  * Android 版实现
  * 我能使用不同版本的实现代码来替代默认实现吗？
  * 如果我们脱离了标准库怎么办？

#### [Utility library](https://en.cppreference.com/w/cpp/utility)

* C++ includes a variety of utility libraries that provide functionality ranging from bit-counting to partial function application. These libraries can be broadly divided into two groups:
	* language support libraries, and
	* general-purpose libraries.

##### Language support

###### [Type support (basic types, RTTI, type traits) - cppreference.com](https://en.cppreference.com/w/cpp/types)

#
[Fixed width integer types (since C++11)](https://en.cppreference.com/w/cpp/types/integer)
* Types
* Defined in header \<cstdint>
* [g77-mingw32/include/stdint.h](https://www.rpi.edu/dept/cis/software/g77-mingw32/include/stdint.h)

|uint8_t/uint16_t/uint32_t/uint64_t(optional) | unsigned integer type with width of exactly 8, 16, 32 and 64 bits respectively (provided if and only if the implementation directly supports the type) (typedef) |
| - | - |

#
Numeric limits 
* Defined in header \<limits>

| numeric_limits | provides an interface to query properties of all fundamental numeric types. |
| - | - |

* [std::numeric_limits\<T>::min - cppreference.com](https://en.cppreference.com/w/cpp/types/numeric_limits/min)
	* Returns the minimum finite value representable by the numeric type T.
	* For floating-point types with denormalization, min returns the minimum positive normalized value. Note that this behavior may be unexpected, especially when compared to the behavior of min for integral types. To find the value that has no values less than it, use numeric_limits::lowest.
	* min is only meaningful for bounded types and for unbounded unsigned types, that is, types that represent an infinite set of negative values have no meaningful minimum.
* [std::numeric_limits\<T>::max - cppreference.com](https://en.cppreference.com/w/cpp/types/numeric_limits/max)
	* Returns the maximum finite value representable by the numeric type T. Meaningful for all bounded types.
* [std::numeric_limits\<T>::epsilon - cppreference.com](https://en.cppreference.com/w/cpp/types/numeric_limits/epsilon)
	* returns the difference between 1.0 and the next representable value of the given floating-point type (public static member function)
	* Returns the machine epsilon, that is, the difference between 1.0 and the next value representable by the floating-point type T. It is only meaningful if std::numeric_limits\<T>::is_integer == false.
* [std::numeric_limits\<T>::infinity - cppreference.com](https://en.cppreference.com/w/cpp/types/numeric_limits/infinity)
	* Returns the special value "positive infinity", as represented by the floating-point type T. Only meaningful if std::numeric_limits\<T>::has_infinity == true. In IEEE 754, the most common binary representation of floating-point numbers, the positive infinity is the value with all bits of the exponent set and all bits of the fraction cleared.

#
[C numeric limits interface](https://en.cppreference.com/w/cpp/types/climits)
* INT_MAX        = 2147483647
* LONG_MAX       = 9223372036854775807
* UINT_MAX       = 4294967295
* ULONG_MAX      = 18446744073709551615
* DBL_MAX          = 1.79769e+308

#
Type relationships
* [is_same - C++ Reference](https://www.cplusplus.com/reference/type_traits/is_same/)
	* template \<class T, class U> struct is_same;
	* Trait class that identifies whether T is the same type as U, including having the same const and/or volatile qualification, if any.
	* Two different type names are considered to represent the same type if -and only if- one is a typedef of the other: Two names representing types with the exact same characteristics but which none is a typedef of the other are not considered the same type.
	* is_same inherits from integral_constant as being either true_type or false_type, depending on whether T and U are the same type.
	* [std::is_same - cppreference.com](https://en.cppreference.com/w/cpp/types/is_same)
		* If T and U name the same type (taking into account const/volatile qualifications), provides the member constant value equal to true. Otherwise value is false.
		* Commutativity is satisfied, i.e. for any two types T and U, is_same\<T, U>::value == true if and only if is_same\<U, T>::value == true.
		* The behavior of a program that adds specializations for is_same or is_same_v (since C++17) is undefined.

###### [Program support utilities](https://en.cppreference.com/w/cpp/utility/program)

* Defined in header \<cstdlib>
* [std::abort - cppreference.com](https://en.cppreference.com/w/cpp/utility/program/abort)
	* Causes abnormal program termination unless SIGABRT is being caught by a signal handler passed to std::signal and the handler does not return.
	* Note: it will cause Application Error in Windows Logs under Event Viewer
* [std::exit - cppreference.com](https://en.cppreference.com/w/cpp/utility/program/exit)
	* Causes normal program termination to occur.
	* Several cleanup steps are performed
	* [Exit codes in C/C++ with Examples - GeeksforGeeks](https://www.geeksforgeeks.org/exit-codes-in-c-c-with-examples/)
		* The purpose of the exit() function is to terminate the execution of a program. The “return 0”(or EXIT_SUCCESS) implies that the code has executed successfully without any error. Exit codes other than “0”(or EXIT_FAILURE) indicate the presence of an error in the code. Among all the exit codes, the codes 1, 2, 126 – 165 and 255 have special meanings and hence these should be avoided for user-defined exit codes.
* [EXIT_SUCCESS, EXIT_FAILURE - cppreference.com](https://en.cppreference.com/w/cpp/utility/program/EXIT_status)
	* The EXIT_SUCCESS and EXIT_FAILURE macros expand into integral expressions that can be used as arguments to the std::exit function (and, therefore, as the values to return from the main function), and indicate program execution status.
* [std::system - cppreference.com](https://en.cppreference.com/w/cpp/utility/program/system)
	* Calls the host environment's command processor (e.g. /bin/sh, cmd.exe, command.com) with the parameter command. Returns an implementation-defined value (usually the value that the invoked program returns).
	* If command is a null pointer, checks if the host environment has a command processor and returns a nonzero value if and only if the command processor exists.
```c++
#include <cstdlib>
#include <fstream>
#include <iostream>
 
int main()
{
    std::system("ls -l >test.txt"); // execute the UNIX command "ls -l >test.txt"
    std::cout << std::ifstream("test.txt").rdbuf();
}
```

###### [Initializer lists](https://en.cppreference.com/w/cpp/utility/initializer_list)

* Defined in header \<initializer_list>
* [std::initializer_list - cppreference.com](https://en.cppreference.com/w/cpp/utility/initializer_list)(C++11)
	* creates a temporary array in [list-initialization](https://en.cppreference.com/w/cpp/language/list_initialization) and then references it (class template)
	* An object of type std::initializer_list\<T> is a lightweight proxy object that provides access to an array of objects of type const T.
	* A std::initializer_list object is automatically constructed when:
		* a braced-init-list is used to list-initialize an object, where the corresponding constructor accepts an std::initializer_list parameter
		* a braced-init-list is used as the right operand of assignment or as a function call argument, and the corresponding assignment operator/function accepts an std::initializer_list parameter
		* a braced-init-list is bound to auto, including in a ranged for loop
	* Initializer lists may be implemented as a pair of pointers or pointer and length. Copying a std::initializer_list does not copy the underlying objects.
	* The underlying array is a temporary array of type const T[N], in which each element is copy-initialized (except that narrowing conversions are invalid) from the corresponding element of the original initializer list. The lifetime of the underlying array is the same as any other temporary object, except that initializing an initializer_list object from the array extends the lifetime of the array exactly like binding a reference to a temporary (with the same exceptions, such as for initializing a non-static class member). The underlying array may be allocated in read-only memory.
	* The program is ill-formed if an explicit or partial specialization of std::initializer_list is declared.
* [List-initialization (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/list_initialization)
	* Initializes an object from braced-init-list.
	* Syntax
		* Direct-list-initialization
			* T object { arg1, arg2, ... };	(1)	
			* T { arg1, arg2, ... }	(2)	
			* new T { arg1, arg2, ... }	(3)	
			* Class { T member { arg1, arg2, ... }; };	(4)	
			* Class::Class() : member { arg1, arg2, ... } {...	(5)	
		* Copy-list-initialization
			* T object = { arg1, arg2, ... };	(6)	
			* function ({ arg1, arg2, ... })	(7)	
			* return { arg1, arg2, ... };	(8)	
			* object [{ arg1, arg2, ... }]	(9)	
			* object = { arg1, arg2, ... }	(10)	
			* U ({ arg1, arg2, ... })	(11)	
			* Class { T member = { arg1, arg2, ... }; };	(12)	
	* Narrowing conversions
		* List-initialization limits the allowed implicit conversions by prohibiting the following:
			* conversion from a floating-point type to an integer type
			* conversion from a long double to double or to float and conversion from double to float, except where the source is a constant expression and overflow does not occur
			* conversion from an integer type to a floating-point type, except where the source is a constant expression whose value can be stored exactly in the target type
			* conversion from integer or unscoped enumeration type to integer type that cannot represent all values of the original, except where source is a constant expression whose value can be stored exactly in the target type
			* conversion from a pointer type or pointer-to-member type to bool
	* Notes
		* Every initializer clause is sequenced before any initializer clause that follows it in the braced-init-list. This is in contrast with the arguments of a function call expression, which are unsequenced (until C++17)indeterminately sequenced (since C++17).
		* A braced-init-list is not an expression and therefore has no type, e.g. decltype({1,2}) is ill-formed. Having no type implies that template type deduction cannot deduce a type that matches a braced-init-list, so given the declaration template\<class T> void f(T); the expression f({1,2,3}) is ill-formed. However, the template parameter can otherwise be deduced, as is the case for std::vector\<int> v(std::istream_iterator\<int>(std::cin), {}), where the iterator type is deduced by the first argument but also used in the second parameter position. A special exception is made for type deduction using the keyword auto , which deduces any braced-init-list as std::initializer_list in copy-list-initialization.
		* Also because a braced-init-list has no type, special rules for overload resolution apply when it is used as an argument to an overloaded function call.
		* Aggregates copy/move initialize directly from single-element braced-init-list of the same type, but non-aggregates consider initializer_list constructors first
		* Some compilers (e.g., gcc 10) only consider conversion from a pointer or a pointer-to-member to bool narrowing in C++20 mode.
```c++
#include <iostream>
#include <vector>
#include <map>
#include <string>
 
struct Foo
{
    std::vector<int> mem = {1, 2, 3}; // list-initialization of a non-static member
    std::vector<int> mem2;
 
    Foo() : mem2{-1, -2, -3} {} // list-initialization of a member in constructor
};
 
std::pair<std::string, std::string> f(std::pair<std::string, std::string> p)
{
    return {p.second, p.first}; // list-initialization in return statement
}
 
int main()
{
    int n0{};  // value-initialization (to zero)
    int n1{1}; // direct-list-initialization
 
    std::string s1{'a', 'b', 'c', 'd'}; // initializer-list constructor call
    std::string s2{s1, 2, 2};           // regular constructor call
    std::string s3{0x61, 'a'}; // initializer-list ctor is preferred to (int, char)
 
    int n2 = {1}; // copy-list-initialization
    double d = double{1.2}; // list-initialization of a prvalue, then copy-init
    auto s4 = std::string{"HelloWorld"}; // same as above, no temporary created since C++17
 
    std::map<int, std::string> m = // nested list-initialization
    {
        {1, "a"},
        {2, {'a', 'b', 'c'}},
        {3, s1}
    };
 
    std::cout << f({"hello", "world"}).first // list-initialization in function call
              << '\n';
 
    const int (&ar)[2] = {1, 2}; // binds a lvalue reference to a temporary array
    int&& r1 = {1}; // binds a rvalue reference to a temporary int
//  int& r2 = {2}; // error: cannot bind rvalue to a non-const lvalue ref
 
//  int bad{1.0}; // error: narrowing conversion
    unsigned char uc1{10}; // okay
//  unsigned char uc2{-1}; // error: narrowing conversion
 
    Foo f;
 
    std::cout << n0 << ' ' << n1 << ' ' << n2 << '\n'
              << s1 << ' ' << s2 << ' ' << s3 << '\n';
    for(auto p: m)
        std::cout << p.first << ' ' << p.second << '\n';
    for(auto n: f.mem)
        std::cout << n << ' ';
    for(auto n: f.mem2)
        std::cout << n << ' ';
}
```
* [ES.23: Prefer the {}-initializer syntax - C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#es23-prefer-the--initializer-syntax)
	* Reason Prefer {}. The rules for {} initialization are simpler, more general, less ambiguous, and safer than for other forms of initialization.
Use = only when you are sure that there can be no narrowing conversions. For built-in arithmetic types, use = only with auto.
	* Avoid () initialization, which allows parsing ambiguities.
	* Exception For containers, there is a tradition for using {...} for a list of elements and (...) for sizes
	* Note {}-initializers do not allow narrowing conversions (and that is usually a good thing) and allow explicit constructors (which is fine, we’re intentionally initializing a new variable).
	* Note {} initialization can be used for nearly all initialization; other forms of initialization can’t
	* Note Initialization of a variable declared using auto with a single value, e.g., {v}, had surprising results until C++17. The C++17 rules are somewhat less surprising
	* Use ={...} if you really want an initializer_list\<T>
	* Note ={} gives copy initialization whereas {} gives direct initialization. Like the distinction between copy-initialization and direct-initialization itself, this can lead to surprises. {} accepts explicit constructors; ={} does not.
	* Use plain {}-initialization unless you specifically want to disable explicit constructors.	

##### General-purpose utilities

###### Swap and type operations

* Defined in header \<utility>
* [std::forward - cppreference.com](https://en.cppreference.com/w/cpp/utility/forward)
	* forwards a function argument (function template)
	* 1) Forwards lvalues as either lvalues or as rvalues, depending on T
	* 2) Forwards rvalues as rvalues and prohibits forwarding of rvalues as lvalues
* [std::move - cppreference.com](https://en.cppreference.com/w/cpp/utility/move)
	* obtains an rvalue reference (function template)
	* std::move is used to indicate that an object t may be "moved from", i.e. allowing the efficient transfer of resources from t to another object.
	* In particular, std::move produces an [xvalue expression](https://en.cppreference.com/w/cpp/language/value_category) that identifies its argument t. It is exactly equivalent to a static_cast to an rvalue reference type.
	* Return value
		* `static_cast<typename std::remove_reference<T>::type&&>(t)`
```c++
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
#include <string>
 
int main()
{
    std::string str = "Salut";
    std::vector<std::string> v;
 
    // uses the push_back(const T&) overload, which means 
    // we'll incur the cost of copying str
    v.push_back(str);
    std::cout << "After copy, str is " << std::quoted(str) << '\n';
 
    // uses the rvalue reference push_back(T&&) overload, 
    // which means no strings will be copied; instead, the contents
    // of str will be moved into the vector.  This is less
    // expensive, but also means str might now be empty.
    v.push_back(std::move(str));
    std::cout << "After move, str is " << std::quoted(str) << '\n';
 
    std::cout << "The contents of the vector are { " << std::quoted(v[0])
                                             << ", " << std::quoted(v[1]) << " }\n";
}
/*
After copy, str is "Salut"
After move, str is ""
The contents of the vector are { "Salut", "Salut" }
*/
```
* [F.48: Don’t return std::move(local)](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f48-dont-return-stdmovelocal)
	* `Reason` With guaranteed copy elision, it is now almost always a pessimization to expressly use std::move in a return statement.
	* `Example, bad`
    ```c++
    S f()
    {
      S result;
      return std::move(result);
    }
    ```
	* `Example, good`
    ```c++
    S f()
    {
      S result;
      return result;
    }
    ```
	* `Enforcement` This should be enforced by tooling by checking the return expression .
```c++
#include <iostream>
#include <vector>
  
void f(std::vector<int>& v)
{
    std::vector<int> result = {1, 2};
    v = std::move(result);
    
    return;
}

std::vector<int> f1()
{
    std::vector<int> result = {1, 2};
    return std::move(result);   
    // warning: moving a local object in a return statement prevents copy elision [-Wpessimizing-move]
    // note: remove 'std::move' call
}

int main()
{
    std::vector<int> z{};
    
    f(z);

    for (auto it : z)
        std::cout << it << " "; // 1 2     
 
    return 0;
}
```

###### Pairs and tuples

* Defined in header \<utility>

| [pair](https://en.cppreference.com/w/cpp/utility/pair) | implements binary tuple, i.e. a pair of values(class template) |
| - | - |
| [tuple](https://en.cppreference.com/w/cpp/utility/tuple) | implements fixed size container, which holds elements of possibly different types(class template) |

* [std::pair - cppreference.com](https://en.cppreference.com/w/cpp/utility/pair)
	* std::pair is a class template that provides a way to store two heterogeneous objects as a single unit. A pair is a specific case of a std::tuple with two elements.
	* If neither T1 nor T2 is a possibly cv-qualified class type with non-trivial destructor, or array thereof, the destructor of pair is trivial.
	* Member objects
		* Member name
			* first
			* second
	* Non-member functions
		* [make_pair](https://en.cppreference.com/w/cpp/utility/pair/make_pair)
			* creates a pair object of type, defined by the argument types(function template)
* [c++ - Check if pair is empty or uninitialized - Stack Overflow](https://stackoverflow.com/questions/57109084/check-if-pair-is-empty-or-uninitialized)
```c++
#include <optional>

std::optional<std::pair<int, int>> res;

if (res) // the pair is initialized and usable
   doStuff(*res);
else // ... it's not, hence initialize it
   res = std::make_pair(42, 43);
```
* [std::tuple - cppreference.com](https://en.cppreference.com/w/cpp/utility/tuple)
	* Class template std::tuple is a fixed-size collection of heterogeneous values. It is a generalization of std::pair.
	* If std::is_trivially_destructible\<Ti>::value is true for every Ti in Types, the destructor of tuple is trivial.
	* Non-member functions
		* [make_tuple](https://en.cppreference.com/w/cpp/utility/tuple/make_tuple)
			* creates a tuple object of the type defined by the argument types(function template)
	* [Tuples in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/tuples-in-c/)
```c++
#include <tuple>
#include <iostream>
#include <string>
#include <stdexcept>
 
std::tuple<double, char, std::string> get_student(int id)
{
    if (id == 0) return std::make_tuple(3.8, 'A', "Lisa Simpson");
    if (id == 1) return std::make_tuple(2.9, 'C', "Milhouse Van Houten");
    if (id == 2) return std::make_tuple(1.7, 'D', "Ralph Wiggum");
    throw std::invalid_argument("id");
}
 
int main()
{
    auto student0 = get_student(0);
    std::cout << "ID: 0, "
              << "GPA: " << std::get<0>(student0) << ", "
              << "grade: " << std::get<1>(student0) << ", "
              << "name: " << std::get<2>(student0) << '\n';
 
    double gpa1;
    char grade1;
    std::string name1;
    std::tie(gpa1, grade1, name1) = get_student(1);
    std::cout << "ID: 1, "
              << "GPA: " << gpa1 << ", "
              << "grade: " << grade1 << ", "
              << "name: " << name1 << '\n';
 
    // C++17 structured binding:
    auto [ gpa2, grade2, name2 ] = get_student(2);
    std::cout << "ID: 2, "
              << "GPA: " << gpa2 << ", "
              << "grade: " << grade2 << ", "
              << "name: " << name2 << '\n';
}
```

###### Sum types and type erased wrappers

* [std::optional - cppreference.com](https://en.cppreference.com/w/cpp/utility/optional)
	* Defined in header \<optional>
	* a wrapper that may or may not hold an object (class template)
  * template\< class T > class optional; (since C++17)
  * The class template std::optional manages an optional contained value, i.e. a value that may or may not be present.
  * A common use case for optional is the return value of a function that may fail. As opposed to other approaches, such as std::pair\<T,bool>, optional handles expensive-to-construct objects well and is more readable, as the intent is expressed explicitly.
  * Any instance of optional\<T> at any given point in time either contains a value or does not contain a value.
  * If an optional\<T> contains a value, the value is guaranteed to be allocated as part of the optional object footprint, i.e. no dynamic memory allocation ever takes place. Thus, an optional object models an object, not a pointer, even though operator*() and operator->() are defined.
  * When an object of type optional\<T> is contextually converted to bool, the conversion returns true if the object contains a value and false if it does not contain a value.
  * The optional object contains a value in the following conditions:
    * The object is initialized with/assigned from a value of type T or another optional that contains a value.
    * The object does not contain a value in the following conditions:
    * The object is default-initialized.
    * The object is initialized with/assigned from a value of type std::nullopt_t or an optional object that does not contain a value.
    * The member function reset() is called.
  * There are no optional references; a program is ill-formed if it instantiates an optional with a reference type. Alternatively, an optional of a std::reference_wrapper of type T may be used to hold a reference. In addition, a program is ill-formed if it instantiates an optional with the (possibly cv-qualified) tag types std::nullopt_t or std::in_place_t.
  * [std::optional\<T>::operator->, std::optional\<T>::operator* - cppreference.com](https://en.cppreference.com/w/cpp/utility/optional/operator*)
  	* accesses the contained value (public member function)
  	* The behavior is undefined if *this does not contain a value.
  	* Return value
	  	* Pointer or reference to the contained value.
  	* Notes
  		* This operator does not check whether the optional contains a value! You can do so manually by using has_value() or simply operator bool(). Alternatively, if checked access is needed, value() or value_or() may be used.
  * [std::optional\<T>::value - cppreference.com](https://en.cppreference.com/w/cpp/utility/optional/value)
  	* returns the contained value (public member function)	
  	* If *this contains a value, returns a reference to the contained value.
  	* Otherwise, throws a std::bad_optional_access exception.
  	* Notes
  		* The dereference operator operator*() does not check if this optional contains a value, which may be more efficient than value().
  * [std::make_optional - cppreference.com](https://en.cppreference.com/w/cpp/utility/optional/make_optional)
  	* creates an optional object
```c++
#include <string>
#include <functional>
#include <iostream>
#include <optional>
 
// optional can be used as the return type of a factory that may fail
std::optional<std::string> create(bool b) {
    if (b)
        return "Godzilla";
    return {};
}
 
// std::nullopt can be used to create any (empty) std::optional
auto create2(bool b) {
    return b ? std::optional<std::string>{"Godzilla"} : std::nullopt;
}
 
// std::reference_wrapper may be used to return a reference
auto create_ref(bool b) {
    static std::string value = "Godzilla";
    return b ? std::optional<std::reference_wrapper<std::string>>{value}
             : std::nullopt;
}
 
int main()
{
    std::cout << "create(false) returned "
              << create(false).value_or("empty") << '\n';
 
    // optional-returning factory functions are usable as conditions of while and if
    if (auto str = create2(true)) {
        std::cout << "create2(true) returned " << *str << '\n';
    }
 
    if (auto str = create_ref(true)) {
        // using get() to access the reference_wrapper's value
        std::cout << "create_ref(true) returned " << str->get() << '\n';
        str->get() = "Mothra";
        std::cout << "modifying it changed it to " << str->get() << '\n';
    }
}
```
* [optional Class | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/optional-class?view=msvc-170)
* [std::optional: How, when, and why - C++ Team Blog](https://devblogs.microsoft.com/cppblog/stdoptional-how-when-and-why/)
	* optional is mandatory
		* optional is particularly well-suited to the delayed initialization problem because it is itself an instance of delayed initialization. The contained T may be initialized at construction, or sometime later, or never. Any contained T must be destroyed when the optional is destroyed. The designers of optional have already answered most of the questions that arise in this context.
	* Conclusions
		* Any time you need a tool to express “value-or-not-value”, or “possibly an answer”, or “object with delayed initialization”, you should reach into your toolbox for std::optional. Using a vocabulary type for these cases raises the level of abstraction, making it easier for others to understand what your code is doing. The declarations optional/<T/> f(); and void g(optional/<T/>); express intent more clearly and concisely than do pair/<T, bool> f(); or void g(T t, bool is_valid);. Just as is the case with words, adding to our vocabulary of types increases our capacity to describe complex problems simply – it makes us more efficient.
* [C++17常用新特性(十四)---std::optional](https://mp.weixin.qq.com/s/q_hSZmY4vwGBu7P-54ZdEw)
	* C++17提供了std::optional模板帮助我们解决实际编码中的问题，如实际编程时需要返回、传递或者使用一个对象，但是这个对象可能存在或者不存在值。如果要在编码过程中处理这种情况，就要写很多的代码对这些异常情况进行处理。C++17后std::optional<>提供了此类问题的一种类型安全的解决方案。
* [std::any - cppreference.com](https://en.cppreference.com/w/cpp/utility/any)
	* Defined in header \<any>
	* Objects that hold instances of any CopyConstructible type. (class)
	* The class any describes a type-safe container for single values of any copy constructible type.
		* 1) An object of class any stores an instance of any type that satisfies the constructor requirements or is empty, and this is referred to as the state of the class any object. The stored instance is called the contained object. Two states are equivalent if they are either both empty or if both are not empty and if the contained objects are equivalent.
		* 2) The non-member any_cast functions provide type-safe access to the contained object.
	* Implementations are encouraged to avoid dynamic allocations for small objects, but such an optimization may only be applied to types for which std::is_nothrow_move_constructible returns true.
* [C++17常用新特性(十三)---std::any](https://mp.weixin.qq.com/s/qzm_hYj7JEr0AOpxQkDm4g)

###### [Function objects](https://en.cppreference.com/w/cpp/utility/functional)

* A function object is any object for which the function call operator is defined. C++ provides many built-in function objects as well as support for creation and manipulation of new function objects.

#
Partial function application

* std::bind_front and std::bind provide support for [partial function application](https://en.wikipedia.org/wiki/Partial_application), i.e. binding arguments to functions to produce new functions.
* [std::bind - cppreference.com](https://en.cppreference.com/w/cpp/utility/functional/bind)
	* binds one or more arguments to a function object (function template)
	* The function template bind generates a forwarding call wrapper for f. Calling this wrapper is equivalent to invoking f with some of its arguments bound to args.

#
Operator function objects

* [std::multiplies - cppreference.com](https://en.cppreference.com/w/cpp/utility/functional/multiplies)
	* function object implementing x * y (class template)
	* Function object for performing multiplication. Effectively calls operator* on two instances of type T.
* [std::modulus - cppreference.com](https://en.cppreference.com/w/cpp/utility/functional/modulus)
	* function object implementing x % y (class template)
	* Function object for computing remainders of divisions. Implements operator% for type T.
* [std::greater - cppreference.com](https://en.cppreference.com/w/cpp/utility/functional/greater)
	* function object implementing x > y (class template)

#### [Ranges library](https://en.cppreference.com/w/cpp/ranges)

* [起底 C++ Range 令人惊讶的局限性！](https://mp.weixin.qq.com/s/iB70FXO-D7C-72N4l9KnzA)
  * https://www.fluentcpp.com/2019/09/13/the-surprising-limitations-of-c-ranges-beyond-trivial-use-cases/

#### [Numerics library](https://en.cppreference.com/w/cpp/numeric)

* The C++ numerics library includes common mathematical functions and types, as well as optimized numeric arrays and support for random number generation.

##### Mathematical functions and types

###### [Common mathematical functions]()

* The header \<cmath> provides standard C library mathematical functions such as std::fabs, std::sqrt, and std::sin.

#
Basic operations

* [std::fmod, std::fmodf, std::fmodl - cppreference.com](https://en.cppreference.com/w/cpp/numeric/math/fmod)
	* remainder of the floating point division operation (function)
	* The floating-point remainder of the division operation x/y calculated by this function is exactly the value x - n*y, where n is x/y with its fractional part truncated.
	* The returned value has the same sign as x and is less than y in magnitude.
```c++
#include <iostream>
#include <cmath>
#include <cfenv>
 
// #pragma STDC FENV_ACCESS ON
int main()
{
    std::cout << "fmod(+5.1, +3.0) = " << std::fmod(5.1,3) << '\n'
              << "fmod(-5.1, +3.0) = " << std::fmod(-5.1,3) << '\n'
              << "fmod(+5.1, -3.0) = " << std::fmod(5.1,-3) << '\n'
              << "fmod(-5.1, -3.0) = " << std::fmod(-5.1,-3) << '\n'
              << "fmod(1.1, 0.2) = " << std::fmod(1.1,0.2) << '\n'
              << "fmod(1.0, 0.2) = " << std::fmod(1.0,0.2) << '\n';
 
    // special values
    std::cout << "fmod(+0.0, 1.0) = " << std::fmod(0, 1) << '\n'
              << "fmod(-0.0, 1.0) = " << std::fmod(-0.0, 1) << '\n'
              << "fmod(5.1, Inf) = " << std::fmod(5.1, INFINITY) << '\n';
 
    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
    std::cout << "fmod(+5.1, 0) = " << std::fmod(5.1, 0) << '\n';
    if(std::fetestexcept(FE_INVALID))
        std::cout << "    FE_INVALID raised\n";
}
/*
fmod(+5.1, +3.0) = 2.1
fmod(-5.1, +3.0) = -2.1
fmod(+5.1, -3.0) = 2.1
fmod(-5.1, -3.0) = -2.1
fmod(1.1, 0.2) = 0.1
fmod(1.0, 0.2) = 0.2
fmod(+0.0, 1.0) = 0
fmod(-0.0, 1.0) = -0
fmod(5.1, Inf) = 5.1
fmod(+5.1, 0) = -nan
    FE_INVALID raised
*/
```

#
Nearest integer floating point operations

* [std::round, std::roundf, std::roundl, std::lround, std::lroundf, std::lroundl, std::llround, std::llroundf - cppreference.com](https://en.cppreference.com/w/cpp/numeric/math/round)
	* nearest integer, rounding away from zero in halfway cases (function)
```c++
#include <iostream>
#include <cmath>
#include <cfenv>
#include <climits>
 
// #pragma STDC FENV_ACCESS ON
 
int main()
{
    // round
    std::cout << "round(+2.3) = " << std::round(2.3)
              << "  round(+2.5) = " << std::round(2.5)
              << "  round(+2.7) = " << std::round(2.7) << '\n'
              << "round(-2.3) = " << std::round(-2.3)
              << "  round(-2.5) = " << std::round(-2.5)
              << "  round(-2.7) = " << std::round(-2.7) << '\n';
 
    std::cout << "round(-0.0) = " << std::round(-0.0)  << '\n'
              << "round(-Inf) = " << std::round(-INFINITY) << '\n';
 
    // lround
    std::cout << "lround(+2.3) = " << std::lround(2.3)
              << "  lround(+2.5) = " << std::lround(2.5)
              << "  lround(+2.7) = " << std::lround(2.7) << '\n'
              << "lround(-2.3) = " << std::lround(-2.3)
              << "  lround(-2.5) = " << std::lround(-2.5)
              << "  lround(-2.7) = " << std::lround(-2.7) << '\n';
 
    std::cout << "lround(-0.0) = " << std::lround(-0.0)  << '\n'
              << "lround(-Inf) = " << std::lround(-INFINITY) << '\n';
 
    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
    std::cout << "std::lround(LONG_MAX+1.5) = "
              << std::lround(LONG_MAX+1.5) << '\n';
    if (std::fetestexcept(FE_INVALID))
              std::cout << "    FE_INVALID was raised\n";
}
/*
round(+2.3) = 2  round(+2.5) = 3  round(+2.7) = 3
round(-2.3) = -2  round(-2.5) = -3  round(-2.7) = -3
round(-0.0) = -0
round(-Inf) = -inf
lround(+2.3) = 2  lround(+2.5) = 3  lround(+2.7) = 3
lround(-2.3) = -2  lround(-2.5) = -3  lround(-2.7) = -3
lround(-0.0) = 0
lround(-Inf) = -9223372036854775808
std::lround(LONG_MAX+1.5) = -9223372036854775808
    FE_INVALID was raised
*/
```
* [Round to 2 decimal places in C++ - Java2Blog](https://java2blog.com/round-to-2-decimal-places-cpp/#:~:text=double%20type%20variables.-,Using%20the%20ceil()%20function%20to%20round%20to%202%20decimal,decimal%20places%20in%20C%2B%2B.)
	* `std::round(x * 100.0) / 100.0`

###### [Mathematical constants (since C++20)](https://en.cppreference.com/w/cpp/numeric/constants)

* The header \<numbers> provides several mathematical constants, such as std::numbers::pi or std::numbers::sqrt2
* [How to use the PI constant in C++?](https://www.tutorialspoint.com/how-to-use-the-pi-constant-in-cplusplus)
	* The PI constant is present in the cmath header file. The name of the constant is M_PI. 

##### Miscellanous

###### [Pseudo-random number generation](https://en.cppreference.com/w/cpp/numeric/random)

* The header \<random> defines pseudo-random number generators and numerical distributions. The header \<cstdlib> also includes C-style random number generation via std::srand and std::rand.
* [std::uniform_int_distribution - cppreference.com](https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution)
* [c++ - C++11 random numbers - Stack Overflow](https://stackoverflow.com/questions/14009637/c11-random-numbers/14009667#14009667)
* [c++ - Generate random numbers using C++11 random library - Stack Overflow](https://stackoverflow.com/questions/19665818/generate-random-numbers-using-c11-random-library/19666713#19666713)
```c++
#include <random>
#include <iostream>
 
int main()
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(1, 6);
 
    for (int n=0; n<10; ++n)
        //Use `distrib` to transform the random unsigned int generated by gen into an int in [1, 6]
        std::cout << distrib(gen) << ' ';
    std::cout << '\n';
}
```

## Best Practice

* [C++ 实用指南](https://mp.weixin.qq.com/s/PZ27a-Epy_WUITk7SWOHCQ)
  * 介   绍
  * 一些问题
  * 其他问题？
  * 如何保持理智
  * 保持乐观，语言在不断发展
  * 使用指南
  * 还有工具！
  * 努力跟上最新进展
  * 细节太多了？
  * 使用你需要的东西
  * 增量变更
  * 最后的底线：你的旧代码仍然可以编译
  * 总   结
* [编写可移植 C/C++ 程序的一些要点](https://mp.weixin.qq.com/s/Q_vCEHmJuF6WB5NsfyHkpw)
  * https://blog.csdn.net/absurd
  * 1、分层设计，隔离平台相关的代码。
  * 2、事先熟悉各目标平台，合理抽象底层功能。
  * 3、尽量使用标准 C/C++ 函数。
  * 4、尽量不要使用 C/C++ 新标准里出现的特性。
  * 5、尽量不要使用 C/C++ 标准里没有明确规定的特性。
  * 6、尽量不要使用准标准函数。
  * 7、注意标准函数的细节。
  * 8、小心数据标准数据类型。
  * 9、最好不要使用平台独有的特性。
  * 10、最好不要使用编译器特有的特性。
  * 11、注意平台的特性。
  * 12、最好清楚不同平台的资源限制。
* [C++ 的门门道道 | 技术头条 - CSDN](https://mp.weixin.qq.com/s/XRq0D1UJTyVI-uyjfmJuqg)
  * C++是一门被广泛使用的系统级编程语言，更是高性能后端标准开发语言；C++虽功能强大，灵活巧妙，但却属于易学难精的专家型语言，不仅新手难以驾驭，就是老司机也容易掉进各种陷阱。
  * 本文结合作者的工作经验和学习心得，对C++语言的一些高级特性，做了简单介绍；对一些常见的误解，做了解释澄清；对比较容易犯错的地方，做了归纳总结；希望借此能增进大家对C++语言了解，减少编程出错，提升工作效率。
* [C/C++ 程序员的编程修养](https://mp.weixin.qq.com/s/X5eS6-iI8w-VNaASLTS0Eg)
  * 1、版权和版本
  * 2、缩进、空格、换行、空行、对齐
  * 3、程序注释
  * 4、函数的[in][out]参数
  * 5、对系统调用的返回进行判断
  * 6、if 语句对出错的处理
  * 7、头文件中的#ifndef
  * 8、在堆上分配内存
  * 9、变量的初始化
  * 10、h和c文件的使用
  * 11、出错信息的处理
  * 12、常用函数和循环语句中的被计算量
  * 13、函数名和变量名的命名
  * 14、函数的传值和传指针
  * 15、修改别人程序的修养
  * 16、把相同或近乎相同的代码形成函数和宏
  * 17、表达式中的括号
  * 18、函数参数中的const
  * 19、函数的参数个数（多了请用结构）
  * 20、函数的返回类型，不要省略
  * 21、goto语句的使用
  * 22、宏的使用
  * 23、static的使用
  * 24、函数中的代码尺寸
  * 25、typedef的使用
  * 26、为常量声明宏
  * 27、不要为宏定义加分号
  * 28、||和&&的语句执行顺序
  * 29、尽量用for而不是while做循环
  * 30、请sizeof类型而不是变量
  * 31、不要忽略Warning
  * 32、书写Debug版和Release版的程序
* [为什么说 C++ 太复杂？有必要这么复杂吗？| 原力计划 (qq.com)](https://mp.weixin.qq.com/s/qYbKq-krR_GkBNbHsvbl5Q)
  * [为什么说C++太复杂？复杂的必要性是为什么？_韩江雪de 小屋-CSDN博客](https://blog.csdn.net/qq_33375598/article/details/105927654)
* [为什么我十分喜欢C，却很不喜欢C++ (qq.com)](https://mp.weixin.qq.com/s/3MAr5sdeYkeoGNTOJ4f6TA)
  * [Why I still like C and strongly dislike C++ « Kostya's Boring Codec World (multimedia.cx)](https://codecs.multimedia.cx/2021/05/why-i-still-like-c-and-strongly-dislike-cpp/)
* [C++ 过去的这一年 (qq.com)](https://mp.weixin.qq.com/s/QymYhKJ_877DEdjYYFYHQQ)
  * 本年度我想强调的就以下三件事情：
    * C++ 20即将发布。
    * 开发工具 – 让编写C++代码更加容易！
    * C++在开发者中的稳定位置
  * 总而言之，我认为在未来的十年，我们可以以一种积极乐观的态度看待C++。虽然我们无法预知更远的将来会发生什么，但是至少在接下来的十年里，我相信C++应该是稳定的。有了所有这些工具的帮助，新的C++标准编写的C++代码会更加容易访问，并且更加不容易出错。在可预见的将来，C++仍然是追求性能的应用程序的无二选择，甚至它会取代C和Fortran。
* [提高C++性能的编程技术](https://mp.weixin.qq.com/s/SqN8gphEzRNsQMExrFlZxw)
	* 最近看了一本书《提高C++性能的编程技术》，这本书内容比较老，有些内容不太适合现在的编译器，但里面很多内容还是值得我们学习的。
	* 我这里整理出了自认为有用的条目分享给大家，希望对大家有所帮助，想了解具体内容的的朋友可以直接去看书哈。
	* 我将这些内容分为了三大类别：
		* 对象的创建与销毁：主要介绍对象构造与销毁的代价和临时对象那些事。
		* 函数调用：主要介绍内联和虚函数及模板相关的知识点。
		* 设计：如何设计并编写出更高效的代码。
	* 对象的创建与销毁：
		* C++中对象的定义会隐式的执行构造函数和析构函数，这是有开销的，对象的生命周期不是无偿的，至少对象的创建和销毁会消耗CPU周期。所以若非必要，不要随便定义对象，要等到需要使用对象的地方再创建它。
		* 对象的创建或销毁会触发对父对象和成员对象的递归创建或销毁，要当心复杂层次中对象的复合使用。它们使得创建和销毁的开销更加高昂。
		* 对象的拷贝是有开销的，很多时候可以减少拷贝，考虑按引用或者指针传递和返回对象。
		* RVO可以省去创建和销毁局部对象的步骤，从而改善性能。
		* 临时对象会以构造函数和析构函数的形式降低一半的性能。在\<op>可能是“+、-、＊”或者“/”的地方，可以考虑使用\<op>=运算符消除临时对象。
		* 编译器必须初始化被包含的成员对象之后再执行构造函数体。必须在初始化阶段完成成员对象的创建。这可以降低随后在构造函数部分调用赋值操作符的开销。在某些情况下，这样也可以避免临时对象的产生。
		* 将构造函数声明为explicit，可以避免隐式转换，一般这块都会被列为项目的编码规范，不符合这个规范是过不了code review的。
	* 函数调用：
		* 绝大多数的性能优化是靠内联做到的。
		* 内联就是用方法的代码来替换对方法的调用。（和宏是不是挺像）
		* 内联通过消除调用开销来提升性能，并且允许进行调用间优化。
		* 内联也有缺点，尤其是滥用的情况下。内联可能会使代码量变大，而代码量增多后会较原先出现更多的缓存失败和页面错误。
		* 为什么说虚函数慢？虚函数的代价在于无法内联函数调用，因为这些调用是在运行时动态绑定的。唯一潜在的效率问题是从内联获得的速度（如果可以内联的话）。
		* 模板比继承提供更好的性能。它把对类型的解析提前到编译期间，也可以认为这是没有成本的。
	* 设计：
		* 软件性能和灵活性之间存在一种基本的平衡，太灵活的设计一般性能都不太好，你的设计只需在当前范围之内足够灵活就可以了。在完成同样的简单工作时，char\*有时可以比string对象更有效率。
		* 引用计数想必大家都知道，有些场景中没必要使用引用计数，使用的简单的非计数对象即可，但是有些情况下，引用计数是个非常有用且有效的设计，尤其是在下述场景中：
			* 目标对象是很大的资源消费者。
			* 资源分配和释放的代价很高。
			* 高度共享，好多对象共享同一资源
		* 最快的代码是从不执行的代码，可做以下思考：
			* 你打算使用该计算结果吗？不打算使用就别浪费资源啦
			* 你现在需要该结果吗？请在真正需要的时候再进行计算。在一些执行流程中有些结果永远不会被使用，因此不必过早地计算
			* 你是否已经知道结果？那可以考虑结果重复使用，而不是每次都做计算
		* 有的时候可能无法绕开该计算，此时就必须完成它，那如何加快计算速度？可做以下思考：
			* 该计算是否过于通用？上面说过，没必要过度设计，满足需求即可。
			* 有些情况下有些考虑使用库调用，有些库调用比较灵活，有些库调用性能比较高，考虑使用高效的算法和数据结构。
			* 尽量减少内存管理，这些调用的代价比较高。
			* 80-20原则，如果考虑所有可能的输入数据，则可以发现20%的数据在80%时间里出现。因此，应当以牺牲其他不经常出现的场景为代价来提高典型输入的处理速度。
			* 缓存、RAM和磁盘访问的速度差异很明显，可能有10倍以上的差异。应该多编写缓存友好的代码。
		* 有些计算只有在特定的if-else分支下才需要，所以没必要过早计算，因为有可能它的计算结果不会被用到。
		* 定期清理不需要的代码：大型软件往往会变得错综复杂，杂乱不堪。混乱软件的一大特点就是执行失效代码（那些曾经用来实现某个目标，但现在已经不需要的代码）。定期清理失效和僵死代码可以增强软件性能，同时对于软件也是一种维护。
		* 考虑利用多处理器：
			* 将任务做分解：将大的任务分为小任务，使线程并发地执行这些小任务。
			* 缩小临界区：临界区应该只包含关键代码，不直接操作共享资源的代码不要放在临界区内。
			* 减小锁粒度：不要用同样的锁来保护所有资源，除非这些资源是同时更新的。
			* 读写锁：读多写少可以考虑使用读写锁。
			* 伪共享：不要在类定义里把两个使用频度都很高的锁放太靠近，它们共享同一个缓存行可能触发缓存一致性风暴。
			* 惊群现象：仔细分析您的锁调用的特征。当锁被释放时，是所有的等待线程都被唤醒还是只唤醒一个线程？唤醒所有线程会威胁到应用的可扩展性。
		* 要使用的存储器离处理器越远，访问所需的时间就越长。离处理器最近的是寄存器，虽然容量很少，但是速度很快。对寄存器的优化对程序的性能提升而言是极为有益的。
		* 上下文切换的开销巨大，请尽量避免上下文切换。
* [C/C++ include header file order - Stack Overflow](https://stackoverflow.com/questions/2762568/c-c-include-header-file-order)
	* My personal preference is to go from local to global, each subsection in alphabetical order, i.e.:
		* h file corresponding to this cpp file (if applicable)
		* headers from the same component,
		* headers from other components,
		* system headers.
	* My rationale for 1. is that it should prove that each header (for which there is a cpp) can be #included without prerequisites (terminus technicus: header is "self-contained"). And the rest just seems to flow logically from there.
* [性能统计类](https://mp.weixin.qq.com/s/6LHThiscLQ1gNCwLlTSHRQ)
```c++
#include <iostream>
#include <chrono>
using namespace std;
class PerfSum{
    public:
        PerfSum()
        {
            _beginTime = std::chrono::high_resolution_clock::now();
        }
        ~PerfSum()
        {
            auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now()-_beginTime);
            std::cout<<"统计性能结束，时间过去了"<< ms.count() <<"毫秒"<<std::endl;
        }
    private:
        std::chrono::high_resolution_clock::time_point _beginTime;
 };

//使用方法：
void TestStdVec()
{
    std::vector<int> vec ;
    PerfSum t;
    
    for(long i=0;i<1000000;i++) {
        vec.push_back(i);
    }
    std::cout<<"End"<<std::endl;
}

int main() 
{
    std::cout<<"标准容器插入1000000次:"<<std::endl;
    TestStdVec();
}
```

### Bug

* [C ++ 中不容忽视的 25 个 API 错误设计！](https://mp.weixin.qq.com/s/Yyno5VNHr88BaQvMoZafVA)
  * https://www.acodersjourney.com/top-25-cplusplus-api-design-mistakes-and-how-to-avoid-them/
  * 错误＃1：不将你的API放在命名空间中
  * 错误＃2：在你的公共API头的全局范围中包含“using namespace”
  * 错误＃3：无视“三法则”
  * 错误＃4：不将API中的移动构造函数和移动赋值运算符标记为noexcept
  * 错误＃5：不将不可抛出的API标记为noexcept
  * 错误＃6：不将单个参数构造函数标记为显式
  * 错误＃7：不将只读数据/方法标记为const
  * 错误＃8：通过const引用返回API的内部
  * 错误＃9：使用隐式模板实例化时，使用模板实现细节来混淆公共头文件
  * 错误＃10：当用例已知时，不使用显式模板实例化
  * 错误＃11：在默认函数参数中公开内部值
  * 错误＃12：将#Defines用于C ++ API
  * 错误＃13：使用友元类
  * 错误＃14：不避免不必要的include头文件
  * 错误＃15：对外来（不是你自己的）对象类型使用前向声明
  * 错误＃16：不让头文件必须自行编译
  * 错误＃17：没有为你的API提供版本控制信息
  * 错误＃18：从一开始就没有决定静态或动态库的实现
  * 错误＃19：没有认识到ABI的兼容性
  * 错误＃20：向已发布的类API添加纯虚方法
  * 错误＃21：不记录API是同步还是异步
  * 错误＃22：没有使用平台/编译器支持的最低公共特性
  * 错误＃23：不考虑开源项目的头文件实现
  * 错误＃24：参数类型不一致
  * 错误＃25：没有API审核流程！
* [这 5 个 C/C++ Bug](https://mp.weixin.qq.com/s/w6YRs_3MkJTRz4Yo8aFOAw)
  * 1. 变量未初始化
  * 2. 数组越界
  * 3. 字符串溢出
  * 4. 内存重复释放
  * 5. 使用无效的文件指针
* [代码优化导致的奇葩问题](https://mp.weixin.qq.com/s/p2GRR3n0s338K1qAmZOhMA)
  * 总结、什么情况会导致这样的问题？
  * 1、堆栈溢出应该是一个原因，之前我有遇到的情况是栈空间设置太小，然后溢出到堆空间导致问题。
  * 2、使用某个函数导致溢出，我们使用的函数，比如，内存拷贝函数，如果长度设置不对，也会导致影响到其他的代码。
  * 3、还有就是上面说的编译器优化导致的问题。
* [C++编程新手容易犯的 10 种编程错误](https://mp.weixin.qq.com/s/tUT9sDR-d1aTzWof3TCjNg)
	* 1、有些关键字在 cpp 文件中多写了
	* 2、函数参数的默认值写到函数实现中了
	* 3、在编写类的时候，在类的结尾处忘记添加 ";" 分号了
	* 4、只添加了函数声明，没有函数实现
	* 5、cpp 文件忘记添加到工程中，导致没有生成供链接使用的 obj 文件
	* 6、函数中返回了一个局部变量的地址或者引用
	* 7、忘记将父类中的接口声明 virtual 函数，导致多态没有生效
	* 8、该使用双指针的地方，却使用了单指针
	* 9、发布 exe 程序时，忘记将 exe 依赖的 C 运行时库和 MFC 库带上
	* 10、应该使用深拷贝，却使用了浅拷贝
* [常见的C++软件异常场景分析与总结](https://mp.weixin.qq.com/s/QkSz04-YGo4PB2EWlJ-wqA)
	* https://blog.csdn.net/chenlycly/article/details/82734138
	* 1、野指针问题
	* 2、空指针问题
	* 3、堆内存被释放两次
	* 4、栈内存被当做堆内存来释放
	* 5、内存访问越界
	* 6、函数调用约定不一致引起的栈不平衡的问题
	* 7、调用虚函数时的二次寻址
	* 8、debug和release库混用的问题
	* 9、死循环问题
	* 10、死锁问题排查
	* 11、数据类型使用违规引起的问题
	* 12、抛出异常后导致部分代码被跳过的问题
	* 13、类对象没有初始化就直接访问问题

### Memory Leak

* [C++ 如何避免内存泄露](https://mp.weixin.qq.com/s/oBTNXxUiU3StexuyCKPI6w)
  * 内存是如何泄露的
  * 经验 #1：尽量避免在堆上分配内存
  * 经验 #2：使用 Arena
  * 经验 #3：使用 Coroutine
  * 经验 #4：善用 RAII
  * 经验 #5：便于 Debug
* [你踩过几种C++内存泄露的坑？](https://mp.weixin.qq.com/s/8h_ek1NLE9mOKdA2WiOoQw)
  * 1. 函数内或者类成员内存未释放
  * 2. delete []
  * 3. delete (void*)
  * 4. Virtual destructor
  * 5. 对象循环引用
  * 6. 资源泄露
* [C++常见的三种内存破坏的场景和分析](https://mp.weixin.qq.com/s/uG4R-oSjf2AO-OVm2A1rPw)
  * 有一定C++开发经验的同学大多数踩过内存破坏的坑,有这么几种现象:
    * 比如某个变量整形，在程序中只可能初始化或者赋值为1或者2, 但是在使用的时候却发现其为0或者其他的情况。对于其他类型，比如字符串等，可能出现了一种出乎意料的值！
    * 程序在堆上申请内存或者释放内存的时候，在内存充足的情况下，居然出现了堆错误。
  * 当出现以上场景的时候，你该思考一下，是不是出现了内存破坏的情况了。而本文主要通过展示和分析常见的三种内存破坏导致覆盖相邻变量的场景，让读者在碰到类似的场景，不至于束手无策。而对于堆上的内存破坏，很常见并且棘手的场景，本人将在后续的文章和大家分享。
  * 1. 内存破坏之强制类型转换
  * 2. 字符串拷贝溢出
  * 3. 随机性的内存被修改
* [一文搞定 | Linux共享内存原理](https://mp.weixin.qq.com/s/RB6KRXF_uJF7wXjRvDyhmQ)
  * https://cloud.tencent.com/developer/article/1396351
  * 在Linux系统中，每个进程都有独立的虚拟内存空间，也就是说不同的进程访问同一段虚拟内存地址所得到的数据是不一样的，这是因为不同进程相同的虚拟内存地址会映射到不同的物理内存地址上。
  * 但有时候为了让不同进程之间进行通信，需要让不同进程共享相同的物理内存，Linux通过 共享内存 来实现这个功能。下面先来介绍一下Linux系统的共享内存的使用。
  * 共享内存使用
  * 共享内存实现原理
* [C/C++ 动态检测内存错误利器 - ASan](https://mp.weixin.qq.com/s/u6UtoXQkdcomtGZxX9vsvw)
  * ASan，即Address Sanitizer，是一个适用于c/c++程序的动态内存错误检测器，它由一个编译器检测模块（LLVM pass）和一个替换malloc函数的运行时库组成，在性能及检测内存错误方面都优于Valgrind，你值得拥有。

### Unit Testing

* [c-cpp/学习笔记之Catch2 at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BCatch2)
* [C++ 单元测试与代码覆盖率](https://mp.weixin.qq.com/s/QV62sN4ILPGk4Ko-a0ZsfA)
  * 本文以C++语言为基础，讲解如何进行单元测试并生成测试报告。
  * 在工具上，我们会使用下面这些：
    * GCC
    * CMake
    * Google Test
    * gcov
    * lcov
* [现代C++测试工具链(是时候抛弃gtest/google bench了)](https://mp.weixin.qq.com/s/fmcUmH-AEUFO9mIMDJRX7g)
	* http://www.purecpp.org/detail?id=2291
	* gtest的问题
		* gtest需要安装有时候带来很多不方便，比如需要经常切换gcc和clang的时候就比较麻烦，安装的gtest可能在另一个编译器下编译不过, 编写跨平台程序的时候需要多次安装gtest，非常不便。另外一个问题是网络原因，下载安装gtest或者git上拉gtest都可能因为网络原因失败。
	* 现代C++ unit test库
		* 除了gtest之外，还有很多轻量级易用的单元测试库，比如doctest和catch，相比gtest需要编译/安装，他们都是header only的，直接包含到工程里就可以做单元测试了，portable又没有任何依赖，而且对编译器版本要求也不高，只需要C++11就行了，用了之后只有一个字：爽！
		* 这里推荐使用[doctest](https://github.com/doctest/doctest)，原因是[它的性能比catch更好](https://github.com/doctest/doctest/blob/master/doc/markdown/benchmarks.md)，当然也比gtest好, 来看看doctest怎么用的吧。
	* doctest基本用法
	* doctest的断言宏
	* 现代C++ mock库
		* [FakeIt](https://github.com/eranpeer/FakeIt)是C++11写的header only的mock库，用起来也很方便：
	* 现代C++ benchmark库
		* [nanobench](https://github.com/martinus/nanobench)也是C++11写的header only的库，使用起来也很简单，包含头文件即可。
	* 总结
		* 用现代C++测试工具链：doctest+FakeIt+nanobench, 可以完美地替代gtest/gmock和google bench，没有任何依赖，无需安装，直接包含头文件就可以用，非常容易集成和使用，是时候抛弃google test和google bench了!

## Application

* [简单的生成Email的C++程序 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2010/10/26/1860900.html)
* [C++控制台打飞机小游戏 | CSDN 博文精选](https://mp.weixin.qq.com/s/ML7bm89cBwkLVpyPt1dmkg)
  * https://blog.csdn.net/C20190102/article/details/102727963

### FINANCE

#### QUANT

* [rburkholder/trade-frame: C++ 17 based library (with sample applications) for testing equities, futures, etfs & options based automated trading ideas using DTN IQFeed real time data feed and Interactive Brokers (IB TWS API) for trade execution. [I have a private repository which has more recent changes, which get back-ported randomly][irc: #tradeframe on OFTC]](https://github.com/rburkholder/trade-frame)
* How to build a order book ?
	* https://www.google.com/search?q=c%2B%2B+order+book+implementation&oq=c%2B%2B+order+book&aqs=edge.1.69i57j0i512j0i22i30l2j0i390l3.13525j0j1&sourceid=chrome&ie=UTF-8#scso=_TI-5Yt2ZPMPTz7sP5q6-8Ao27:740.9090576171875
	* https://github.com/bigfatwhale/orderbook
	* https://alexabosi.wordpress.com/2014/08/28/limit-order-book-implementation-for-low-latency-trading-in-c/
	* https://quant.stackexchange.com/questions/3783/what-is-an-efficient-data-structure-to-model-order-book
	* https://web.archive.org/web/20110219163448/http://howtohft.wordpress.com/2011/02/15/how-to-build-a-fast-limit-order-book/
	* https://github.com/charles-cooper/itch-order-book
	* https://www.google.com/search?q=c%2B%2B+tse+order+book&sxsrf=ALiCzsbmZMhBQv6SNPDcogDsFVIRhTLY-A%3A1656329814805&ei=Vpa5YuviMIjSz7sPoZ2G6AQ&ved=0ahUKEwjr5fexxc34AhUI6XMBHaGOAU0Q4dUDCA4&uact=5&oq=c%2B%2B+tse+order+book&gs_lcp=Cgdnd3Mtd2l6EAM6BwgAEEcQsANKBAhBGABKBAhGGABQxQpYrRFgwxRoAXABeACAAdABiAG_BZIBBTAuMy4xmAEAoAEByAEIwAEB&sclient=gws-wiz#scso=_bJa5YvmuMoGq4t4PltaniA822:0
	* https://objectcomputing.com/resources/publications/sett/august-2013-building-a-market-data-feed-with-liquibook
	* https://www.youtube.com/watch?v=fxN4xEZvrxI
	* https://github.com/olibre/Cpp14-OrderBook
	* https://github.com/topics/order-book?o=desc&s=forks

## FAQ

* How to execute command and get output ?
  * [process - How do I execute a command and get the output of the command within C++ using POSIX? - Stack Overflow](https://stackoverflow.com/questions/478898/how-do-i-execute-a-command-and-get-the-output-of-the-command-within-c-using-po)
  * [system - C++ Reference](https://www.cplusplus.com/reference/cstdlib/system/)
    * Execute system command
      * Invokes the command processor to execute a command.
      * If command is a null pointer, the function only checks whether a command processor is available through this function, without invoking any command.
      * The effects of invoking a command depend on the system and library implementation, and may cause a program to behave in a non-standard manner or to terminate.
  * [std::unique_ptr - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr)
```c++
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

std::string exec(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}
```
* [What are Forward declarations in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/what-are-forward-declarations-in-c/)
	* Forward Declaration refers to the beforehand declaration of the syntax or signature of an identifier, variable, function, class, etc. prior to its usage (done later in the program).
	* [c++ forward declaration of a static class member - Stack Overflow](https://stackoverflow.com/questions/15806331/c-forward-declaration-of-a-static-class-member)
		* No, you can't. You can either include the header in the header, or separate the implementation Use::f in an implementation file and include M's header there.
	* [Enum.7: Specify the underlying type of an enumeration only when necessary](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#enum7-specify-the-underlying-type-of-an-enumeration-only-when-necessary)
		* Reason: The default is the easiest to read and write. int is the default integer type. int is compatible with C enums.
		* Note: Specifying the underlying type is necessary in forward declarations of enumerations
* How to set Product Version of .dll files?
	* MSVS > Project *** > Resource Files > ***.rc > Version > VS_VERSION_INFO > ProductVersion

### ERROR FIX

* How to fix "error C1853: '.pch' precompiled header file is from a previous version of the compiler, or the precompiled header is C++ and you are using it from C (or vice versa)" ?
	* Rebuild All
* How to fix "Compiler error C2653: not a class or namespace name" ?
	* Generate full list of includes files to see include stack
		* MSVS > Property > C/C++ > Advanced > Show Includes > Yes
	* Fix circular dependency in header files. Need to look into the included header files as well.
	* [c++ - Compiler error C2653: not a class or namespace name - Stack Overflow](https://stackoverflow.com/questions/15740952/compiler-error-c2653-not-a-class-or-namespace-name)
		* You have a circular dependency in your headers. BaseEntity.h includes Input.h, which includes ScreenSystem.h, which includes GameScreen.h, which in turn re-includes BaseEntity.h. This leads to class names appearing before they are declared, causing compilation failure.
		* To avoid this, do not include headers unnecessarily. 
	* [c# - What is a circular dependency and how can I solve it? - Stack Overflow](https://stackoverflow.com/questions/38042130/what-is-a-circular-dependency-and-how-can-i-solve-it)
* How to fix "LNK1104: cannot open file 'libboost_log-vc142-mt-x32-1_72.lib'" when building project in MSVS ?
  * check the path, e.g. "BOOST_ROOT", in system enviroment variable to see if "\\" is appended at the end, e.g. C:\Program Files\boost\boost_1_72_0\
* How to fix "error LNK2019: unresolved external symbol "char * __stdcall _com_util::ConvertBSTRToString(wchar_t *)" (?ConvertBSTRToString@_com_util@@YGPADPA_W@Z) referenced in function "public: char const * __thiscall _bstr_t::Data_t::GetString(void)const " (?GetString@Data_t@_bstr_t@@QBEPBDXZ)" when #include \<comutil.h>?
  * Append "comsuppw.lib" to MSVS > Project Property > Linker > Input
  * [error LNK2019 related to ConvertStringToBSTR](https://social.microsoft.com/Forums/windows/he-IL/8e2b44f4-3884-445c-9da9-e6abb2783b4c/error-lnk2019-related-to-convertstringtobstr?forum=Vsexpressvc)
  * [ConvertStringToBSTR | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/convertstringtobstr?redirectedfrom=MSDN&view=msvc-160)
* How to fix "error LNK2019: unresolved external symbol __imp__UuidCreate@4" ?
	* Under Project menu, open <project name> Properties -> Configuration Properties -> Linker -> Command Line. Type Rpcrt4.lib into the Additional Options box.
	* [How to Link with .lib file -- UuidCreate()](https://forums.codeguru.com/showthread.php?448070-How-to-Link-with-lib-file-UuidCreate())
* How to fix "warning LNK4075: ignoring '/INCREMENTAL' due to '/OPT:ICF' specification" ?
  * Change default to below values in MSVS > Your project property > Linker > Optimization :
    * References = Keep Unreferenced Data (/OPT:NOREF)
    * Enable COMDAT Folding = Do Not Remove Redundant COMDATs (/OPT:NOICF)
  * [c++ - LNK4075: ignoring '/EDITANDCONTINUE' due to '/OPT:ICF' specification - Stack Overflow](https://stackoverflow.com/questions/1574367/lnk4075-ignoring-editandcontinue-due-to-opticf-specification)
  * [Linker Tools Warning LNK4075 | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/error-messages/tool-errors/linker-tools-warning-lnk4075?view=msvc-160)
* How to fix compile error "has initializer but incomplete type" ?
	* `#include <sstream>`
	* [compilation - C++ compile error: has initializer but incomplete type - Stack Overflow](https://stackoverflow.com/questions/13428164/c-compile-error-has-initializer-but-incomplete-type)
* How to fix compile error "undefined reference to utils::FileUtils::func()" ?
	* check .cpp if FileUtils::func() exists
	* for template function, move the definition to .h
		* [c++ - undefined reference to template function - Stack Overflow](https://stackoverflow.com/questions/10632251/undefined-reference-to-template-function)
	* for inline function, move the definition to .h
		* [C++ inline resulted in undefined reference - Stack Overflow](https://stackoverflow.com/questions/32739086/c-inline-resulted-in-undefined-reference)
			* Inlines must be defined in the same translation unit where they are used. By defining your "inline" function in the .cpp file, it is only usable in the same .cpp file. You need to move it either to the header file, or some special "inlines" file that some projects prefer to keep their implementation details a bit more hidden (you'd then #include that inlines file, either in your header or in main.cpp).
		* [inline - C++ inlining class methods causes undefined reference - Stack Overflow](https://stackoverflow.com/questions/4769479/c-inlining-class-methods-causes-undefined-reference)
			* The body of an inline function needs to be in the header so that the compiler can actually substitute it wherever required. 
* How to fix compile error "error: unterminated #ifdef" ?
	* add missing `#endif`
* How to fix link error "undefined reference to 'std::filesystem::__cxx11::directory_iterator::operator*() const" ?
	* It need to add `-lstdc++fs` to option.
		* `g++ -lstdc++fs -std=c++17 -o fs fs.cpp -lstdc++fs`
	* [c++ - std::filesystem link error on ubuntu 18.10 - Stack Overflow](https://stackoverflow.com/questions/53852684/stdfilesystem-link-error-on-ubuntu-18-10) 
* How to fix error "**Cannot evaluate function -- may be inlined**" ?
	* [c++ - Cannot evaluate function -- may be inlined - Stack Overflow](https://stackoverflow.com/questions/22163730/cannot-evaluate-function-may-be-inlined)
