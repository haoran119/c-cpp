# 学习笔记之C / C++

* [C++ Language Reference | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/cpp-language-reference?view=msvc-160)
* [cppreference.com](https://en.cppreference.com/w/)
* [cplusplus.com - The C++ Resources Network](http://www.cplusplus.com/)
* [Learn C++ – Skill up with our free tutorials](https://www.learncpp.com/)
* [C++ Tutorial](https://www.tutorialspoint.com/cplusplus/index.htm)
* [C++ Programming Language - GeeksforGeeks](https://www.geeksforgeeks.org/c-plus-plus/?ref=shm)
* [fffaraz/awesome-cpp: A curated list of awesome C++ (or C) frameworks, libraries, resources, and shiny things.](https://github.com/fffaraz/awesome-cpp)
* [Clean Code - Uncle Bob / Lesson 1 - YouTube](https://www.youtube.com/watch?v=7EmboKQH8lM)
* [Cᐩᐩ Weekly With Jason Turner - YouTube](https://www.youtube.com/channel/UCxHAlbZQNFU2LgEtiqd2Maw)
* [c-cpp/面试总结之C-C++ at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E9%9D%A2%E8%AF%95%E6%80%BB%E7%BB%93%E4%B9%8BC-C%2B%2B)
* [c-cpp/学习笔记之C++入门到精通 at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BC%2B%2B%E5%85%A5%E9%97%A8%E5%88%B0%E7%B2%BE%E9%80%9A)
* [学习笔记之C++ How to Program(part) - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2010/10/26/1860906.html)
* [学习笔记之C++ Primer中文版（第五版） - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/7071876.html)
* [学习笔记之Effective C++ 2nd Edition - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2011/04/24/1930631.html)
* [学习笔记之高质量C++/C编程指南 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/5577934.html)
* [学习笔记之Linux开发(C语言) - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/5122821.html)
* [学习笔记之C/C++指针使用常见的坑 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8464520.html)

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
  * [CP: Concurrency and parallelism](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-concurrency)
  * [E: Error handling](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-errors)
  * [Con: Constants and immutability](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-const)
  * [T: Templates and generic programming](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-templates)
  * [CPL: C-style programming](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-cpl)
  * [SF: Source files](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-source)
  * [SL: The Standard Library](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-stdlib)

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
* [C++ 的门门道道 | 技术头条 - CSDN](https://mp.weixin.qq.com/s/XRq0D1UJTyVI-uyjfmJuqg)
  * C++是一门被广泛使用的系统级编程语言，更是高性能后端标准开发语言；C++虽功能强大，灵活巧妙，但却属于易学难精的专家型语言，不仅新手难以驾驭，就是老司机也容易掉进各种陷阱。
  * 本文结合作者的工作经验和学习心得，对C++语言的一些高级特性，做了简单介绍；对一些常见的误解，做了解释澄清；对比较容易犯错的地方，做了归纳总结；希望借此能增进大家对C++语言了解，减少编程出错，提升工作效率。
* [35 个 More Effective C++ 改善编程与设计的最佳方法 | 原力计划](https://mp.weixin.qq.com/s/PQbkpjUScbYIywo4tsIdqw)
* [进入编译器后，一个函数经历了什么？](https://mp.weixin.qq.com/s/kYilpl4K_XpVDF3gaKoRAQ)
* [五分钟小知识：为什么说 ++i 的效率比 i++ 高？](https://mp.weixin.qq.com/s/___R-0mc7zezAEVG-1-b5w)
  * 对于内置类型，前置和后置自增或者自减在编译器优化的情况下，两者并无多大差别，而对于自定义类型，如无特别需要，人们似乎更加偏爱前置自增或自减，因为后置自增常常会产生临时对象。
* [每个开发者都应该了解的一些C++特性](https://mp.weixin.qq.com/s/Hpn7KqYlBKz0JdryiozqyQ)
* [C ++ 中不容忽视的 25 个 API 错误设计！](https://mp.weixin.qq.com/s/Yyno5VNHr88BaQvMoZafVA)
* [谈一谈 C++ 中的值的类型 (qq.com)](https://mp.weixin.qq.com/s/MQNIkeS3eMUmaezyUL8ZkQ)
* [如何攻克 C++ 中复杂的类型转换？](https://mp.weixin.qq.com/s/lJiva3BUJXUV0cpX1dOe2Q)
  * https://github.com/yingyulou
* [详解 C++ 的隐式类型转换与函数重载！](https://mp.weixin.qq.com/s/S_1KPn_GWJ7hmLH19Dajfg)
  * https://github.com/yingyulou
* [谁说 C++ 的强制类型转换很难懂？](https://mp.weixin.qq.com/s/q3iwtvqMSp6lNC_ZR_SP6A)
  * https://github.com/yingyulou
* [为什么将 0.1f 改为 0 会使性能降低 10 倍？](https://mp.weixin.qq.com/s/bMacxnC_JBuqFDz8k2fp3w)
  * http://cenalulu.github.io/linux/about-denormalized-float-number/
* [起底 C++ Range 令人惊讶的局限性！](https://mp.weixin.qq.com/s/iB70FXO-D7C-72N4l9KnzA)
  * https://www.fluentcpp.com/2019/09/13/the-surprising-limitations-of-c-ranges-beyond-trivial-use-cases/
* [C++虚函数表原理浅析 (qq.com)](https://mp.weixin.qq.com/s/lKfOZUM1txbUncD6ZBSO4w)
* [为什么说 C++ 太复杂？有必要这么复杂吗？| 原力计划 (qq.com)](https://mp.weixin.qq.com/s/qYbKq-krR_GkBNbHsvbl5Q)
  * [为什么说C++太复杂？复杂的必要性是为什么？_韩江雪de 小屋-CSDN博客](https://blog.csdn.net/qq_33375598/article/details/105927654)
* [贯穿 C++ 11 与 C++ 17 的 Lambda 到底是个什么？](https://mp.weixin.qq.com/s/ok5xND2q4kPqBguhcvU42g)
  * https://hackernoon.com/all-about-Lambda-functions-in-cfrom-c11-to-c17-2t1j32qw
* [C++控制台打飞机小游戏 | CSDN 博文精选](https://mp.weixin.qq.com/s/ML7bm89cBwkLVpyPt1dmkg)
  * https://blog.csdn.net/C20190102/article/details/102727963
* [解读C++即将迎来的重大更新（一）：C++20的四大新特性](https://mp.weixin.qq.com/s/QpqvZ3a7nFdHGjIBiKX67g)
  * https://www.modernescpp.com/index.php/thebigfour
* [一个合格的ACMer的代码当中，都藏着哪些秘密？ (qq.com)](https://mp.weixin.qq.com/s/0_qWix8jARKulLFKUR5UNg)
* [为什么我十分喜欢C，却很不喜欢C++ (qq.com)](https://mp.weixin.qq.com/s/3MAr5sdeYkeoGNTOJ4f6TA)
  * [Why I still like C and strongly dislike C++ « Kostya's Boring Codec World (multimedia.cx)](https://codecs.multimedia.cx/2021/05/why-i-still-like-c-and-strongly-dislike-cpp/)
* [C++ 过去的这一年 (qq.com)](https://mp.weixin.qq.com/s/QymYhKJ_877DEdjYYFYHQQ)
  * 本年度我想强调的就以下三件事情：
    * C++ 20即将发布。
    * 开发工具 – 让编写C++代码更加容易！
    * C++在开发者中的稳定位置
  * 总而言之，我认为在未来的十年，我们可以以一种积极乐观的态度看待C++。虽然我们无法预知更远的将来会发生什么，但是至少在接下来的十年里，我相信C++应该是稳定的。有了所有这些工具的帮助，新的C++标准编写的C++代码会更加容易访问，并且更加不容易出错。在可预见的将来，C++仍然是追求性能的应用程序的无二选择，甚至它会取代C和Fortran。

### Basics

* [<bits/stdc++.h> in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/bitsstdc-h-c/)
  * It is basically a header file that includes every standard library. In programming contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
In programming contests, people do focus more on finding the algorithm to solve a problem than on software engineering. From, software engineering perspective, it is a good idea to minimize the include. If you use it actually includes a lot of files, which your program may not need, thus increases both compile time and program size unnecessarily.
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
  * [Predefined macros | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-160)
    * _NATIVE_WCHAR_T_DEFINED Defined as 1 when the /Zc:wchar_t compiler option is set. Otherwise, undefined.
    * [/Zc:wchar_t (wchar_t Is Native Type) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/build/reference/zc-wchar-t-wchar-t-is-native-type?view=msvc-160)
      * Parse wchar_t as a built-in type according to the C++ standard.
* constexpr 
  * [constexpr (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/constexpr-cpp?view=msvc-160)
  * [Understanding constexpr specifier in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/understanding-constexper-specifier-in-c/)
    * constexpr is a feature added in C++ 11. The main idea is performance improvement of programs by doing computations at compile time rather than run time. Note that once a program is compiled and finalized by developer, it is run multiple times by users. The idea is to spend time in compilation and save time at run time (similar to template metaprogramming)

#### Preprocessor

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
* [inject_statement import attribute | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/inject-statement?view=msvc-160)
  * Inserts its argument as source text into the type-library header.
  * #import type-library inject_statement( "source-text" )
* [named_guids import attribute | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/named-guids?view=msvc-160)
  * Tells the compiler to define and initialize GUID variables in the old style, of the form LIBID_MyLib, CLSID_MyCoClass, IID_MyInterface, and DIID_MyDispInterface.
  * #import type-library named_guids
* [rename_namespace import attribute | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/rename-namespace?view=msvc-160)
  * Renames the namespace that contains the contents of the type library.
  * #import type-library rename_namespace( "NewName" )
* [#undef directive (C/C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/hash-undef-directive-c-cpp?view=msvc-160)
  * Removes (undefines) a name previously created with #define.
  * #undef identifier

### Basic Input/Output

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

### Strings

* StringStream
  * [stringstream - C++ Reference](https://www.cplusplus.com/reference/sstream/stringstream/)
  * [std::basic_stringstream - cppreference.com](https://en.cppreference.com/w/cpp/io/basic_stringstream)
  * [stringstream in C++ and its applications - GeeksforGeeks](https://www.geeksforgeeks.org/stringstream-c-applications/)
    * A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin).
    * Basic methods are –
      * clear() — to clear the stream
      * str() — to get and set string object whose content is present in stream.
      * operator << — add a string to the stringstream object.
      * operator >> — read something from the stringstream object,
  * [StringStream | HackerRank](https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem)

### Object Oriented Programming

* [Abstract Classes - Polymorphism | HackerRank](https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem)
  * [LRU Cache Implementation - GeeksforGeeks](https://www.geeksforgeeks.org/lru-cache-implementation/)
  * [list - C++ Reference](http://www.cplusplus.com/reference/list/list/?kw=list)
  * [pair - C++ Reference](http://www.cplusplus.com/reference/utility/pair/?kw=pair)
  * [unordered_map - C++ Reference](http://www.cplusplus.com/reference/unordered_map/unordered_map/?kw=unordered_map)

### Exception Handling

* [exception - C++ Reference](http://www.cplusplus.com/reference/exception/exception/)
  * [Inherited Code | HackerRank](https://www.hackerrank.com/challenges/inherited-code/problem)
  * [Exceptional Server | HackerRank](https://www.hackerrank.com/challenges/exceptional-server/problem)
  * [to_string - C++ Reference](https://www.cplusplus.com/reference/string/to_string/)
  * [string::c_str - C++ Reference](https://www.cplusplus.com/reference/string/string/c_str/)
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

### Standard Template Library (STL)

* [deque - C++ Reference](http://www.cplusplus.com/reference/deque/deque/)
  * deque (usually pronounced like "deck") is an irregular acronym of double-ended queue. Double-ended queues are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or its back).
  * [Deque-STL | HackerRank](https://www.hackerrank.com/challenges/deque-stl/problem)
  * [Sliding Window Maximum (Maximum of all subarrays of size k) - GeeksforGeeks](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/#disqus_thread)
* [lower_bound - C++ Reference](http://www.cplusplus.com/reference/algorithm/lower_bound/)
  * Returns an iterator pointing to the first element in the range \[first,last) which does not compare less than val.
  * [upper_bound - C++ Reference](http://www.cplusplus.com/reference/algorithm/upper_bound/)
  * [Lower Bound-STL | HackerRank](https://www.hackerrank.com/challenges/cpp-lower-bound/problem)
* [map - C++ Reference](http://www.cplusplus.com/reference/map/map/)
  * [map::operator[] - C++ Reference](http://www.cplusplus.com/reference/map/map/operator[]/)
    * If k matches the key of an element in the container, the function returns a reference to its mapped value.
    * If k does not match the key of any element in the container, the function inserts a new element with that key and returns a reference to its mapped value. Notice that this always increases the container size by one, even if no mapped value is assigned to the element (the element is constructed using its default constructor).
    * A similar member function, map::at, has the same behavior when an element with the key exists, but throws an exception when it does not.
    * A call to this function is equivalent to:
      * (*((this->insert(make_pair(k,mapped_type()))).first)).second
  * [Maps-STL | HackerRank](https://www.hackerrank.com/challenges/cpp-maps/problem)
* [std::swap - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/swap)
  * [swap() in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/swap-in-cpp/)

### C++ Library

* Chrono
  * [\<chrono> - C++ Reference](https://www.cplusplus.com/reference/chrono/)
  * [Date and time utilities - cppreference.com](https://en.cppreference.com/w/cpp/chrono)
    * C++ includes support for two types of time manipulation:
      * The chrono library, a flexible collection of types that track time with varying degrees of precision (e.g. std::chrono::time_point).
      * C-style date and time library (e.g. std::time)
  * [\<chrono> | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/chrono?view=msvc-160)
  * [Chrono in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/chrono-in-c/)

### C++ Advanced
* Lambda expression
  * [Lambda expressions in C++ | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-160)
  * [Lambda expressions (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/lambda)
  * [Lambda expression in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/lambda-expression-in-c/)

## FAQ

* How to set precision of float / double in output ?
  * [std::setprecision - cppreference.com](https://en.cppreference.com/w/cpp/io/manip/setprecision)
    * /*unspecified*/ setprecision( int n );
    * When used in an expression out << setprecision(n) or in >> setprecision(n), sets the precision parameter of the stream out or in to exactly n.
  * [std::fixed, std::scientific, std::hexfloat, std::defaultfloat - cppreference.com](https://en.cppreference.com/w/cpp/io/manip/fixed)
    * This is an I/O manipulator, it may be called with an expression such as out << std::fixed for any out of type std::basic_ostream or with an expression such as in >> std::scientific for any in of type std::basic_istream.
  ```c++
  cout << fixed << setprecision(9) << e << endl; // 14049.304930000  
  ```
