# 学习笔记之C / C++

* [C++ Language Reference | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/cpp-language-reference?view=msvc-160)
  * [Welcome back to C++ - Modern C++ | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-160)
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
* [c-cpp/学习笔记之Windows Programming at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BWindows%20Programming)

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
* [C/C++ PK 各大编程语言](https://mp.weixin.qq.com/s/zTuPyQRkjkVWp_KIjMh_Kw)

### Basics

* [<bits/stdc++.h> in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/bitsstdc-h-c/)
  * It is basically a header file that includes every standard library. In programming contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
In programming contests, people do focus more on finding the algorithm to solve a problem than on software engineering. From, software engineering perspective, it is a good idea to minimize the include. If you use it actually includes a lot of files, which your program may not need, thus increases both compile time and program size unnecessarily.

#### Data Types

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
* [Type conversions](https://www.cplusplus.com/doc/tutorial/typecasting/)
  * [const_cast Operator | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/const-cast-operator?view=msvc-160)
    * Removes the const, volatile, and __unaligned attribute(s) from a class.
    * Syntax
      * const_cast \<type-id> (expression)
  * [const_cast conversion - cppreference.com](https://en.cppreference.com/w/cpp/language/const_cast)
    * Converts between types with different cv-qualification.
    * Syntax
      * const_cast < new_type > ( expression )		
    * Returns a value of type new_type.
    * Explanation
      * Only the following conversions can be done with const_cast. In particular, only const_cast may be used to cast away (remove) constness or volatility.
        * 1) Two possibly multilevel pointers to the same type may be converted between each other, regardless of cv-qualifiers at each level.
        * 2) lvalue of any type T may be converted to a lvalue or rvalue reference to the same type T, more or less cv-qualified. Likewise, a prvalue of class type or an xvalue of any type may be converted to a more or less cv-qualified rvalue reference. The result of a reference const_cast refers to the original object if expression is a glvalue and to the materialized temporary otherwise (since C++17).
        * 3) Same rules apply to possibly multilevel pointers to data members and possibly multilevel pointers to arrays of known and unknown bound (arrays to cv-qualified elements are considered to be cv-qualified themselves) (since C++17)
        * 4) null pointer value may be converted to the null pointer value of new_type
      * As with all cast expressions, the result is:
        * an lvalue if new_type is an lvalue reference type or an rvalue reference to function type;
        * an xvalue if new_type is an rvalue reference to object type;
        * a prvalue otherwise.
  * [const_cast examples](https://www.geeksforgeeks.org/const_cast-in-c-type-casting-operators/)
    * C++ supports following 4 types of casting operators:
      * 1. const_cast
      * 2. static_cast
      * 3. dynamic_cast
      * 4. reinterpret_cast
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
  * [c++ - Difference between `constexpr` and `const` - Stack Overflow](https://stackoverflow.com/questions/14116003/difference-between-constexpr-and-const?rq=1)
  * [c++ - constexpr const vs constexpr variables? - Stack Overflow](https://stackoverflow.com/questions/28845058/constexpr-const-vs-constexpr-variables)

#### Strings

* [basic_string - C++ Reference](https://www.cplusplus.com/reference/string/basic_string/)
  * Generic string class
  * The basic_string is the generalization of class string for any character type (see string for a description).
  * [std::basic_string - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string)
    * The class template basic_string stores and manipulates sequences of char-like objects, which are non-array objects of trivial standard-layout type. The class is dependent neither on the character type nor on the nature of operations on that type. The definitions of the operations are supplied via the Traits template parameter - a specialization of std::char_traits or a compatible traits class. Traits::char_type and CharT must name the same type; otherwise the program is ill-formed.
    * The elements of a basic_string are stored contiguously, that is, for a basic_string s, &*(s.begin() + n) == &*s.begin() + n for any n in [0, s.size()), or, equivalently, a pointer to s[0] can be passed to functions that expect a pointer to the first element of a null-terminated (since C++11)CharT[] array.
    * std::basic_string satisfies the requirements of AllocatorAwareContainer, SequenceContainer and ContiguousContainer (since C++17)
  * [std::basic_string_view - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string_view)
    * The class template basic_string_view describes an object that can refer to a constant contiguous sequence of char-like objects with the first element of the sequence at position zero.
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
* [string::compare - C++ Reference](https://www.cplusplus.com/reference/string/string/compare/)
  * Compare strings
    * Compares the value of the string object (or a substring) to the sequence of characters specified by its arguments.
    * The compared string is the value of the string object or -if the signature used has a pos and a len parameters- the substring that begins at its character in position pos and spans len characters.
    * This string is compared to a comparing string, which is determined by the other arguments passed to the function.
* [string::find - C++ Reference](https://www.cplusplus.com/reference/string/string/find/)
  * Find content in string
    * Searches the string for the first occurrence of the sequence specified by its arguments.
    * When pos is specified, the search only includes characters at or after position pos, ignoring any possible occurrences that include characters before pos.
    * Notice that unlike member find_first_of, whenever more than one character is being searched for, it is not enough that just one of these characters match, but the entire sequence must match.
  * [std::basic_string<CharT,Traits,Allocator>::find - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/find)
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

#### Basic Input/Output

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

### Object Oriented Programming

* [Abstract Classes - Polymorphism | HackerRank](https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem)
  * [LRU Cache Implementation - GeeksforGeeks](https://www.geeksforgeeks.org/lru-cache-implementation/)
  * [list - C++ Reference](http://www.cplusplus.com/reference/list/list/?kw=list)
  * [pair - C++ Reference](http://www.cplusplus.com/reference/utility/pair/?kw=pair)
  * [unordered_map - C++ Reference](http://www.cplusplus.com/reference/unordered_map/unordered_map/?kw=unordered_map)

### C++ Advanced

#### Files and Streams

* [c++ - How to copy a file from a folder to another folder - Stack Overflow](https://stackoverflow.com/questions/9125122/how-to-copy-a-file-from-a-folder-to-another-folder)
  * [std::filesystem::copy - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/copy)
    * Defined in header \<filesystem> since C++ 17
  * [std::filesystem::copy_options - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/copy_options)
  * [\<filesystem> | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/filesystem?view=msvc-160)
    * Include the header \<filesystem> for access to classes and functions that manipulate and retrieve information about paths, files, and directories.
  * [c++ - How to use copy_file in boost::filesystem? - Stack Overflow](https://stackoverflow.com/questions/4785491/how-to-use-copy-file-in-boostfilesystem)
    * [Filesystem Reference - copy_file()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#copy_file)
  * [string - How can I extract the file name and extension from a path in C++ - Stack Overflow](https://stackoverflow.com/questions/4430780/how-can-i-extract-the-file-name-and-extension-from-a-path-in-c)
    * [Filesystem Reference - Class path](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#class-path)
    * [Filesystem Reference - path extension()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#path-extension)
    * [Filesystem Reference - string()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#string)
  * [Filesystem Reference - remove()](https://www.boost.org/doc/libs/1_72_0/libs/filesystem/doc/reference.html#remove)

#### Exception Handling

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
* [std::runtime_error - cppreference.com](https://en.cppreference.com/w/cpp/error/runtime_error)
  * Defines a type of object to be thrown as exception. It reports errors that are due to events beyond the scope of the program and can not be easily predicted.
  * [exception - c++: Catch runtime_error - Stack Overflow](https://stackoverflow.com/questions/7491877/c-catch-runtime-error)
* [noexcept specifier (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/noexcept_spec)
  * Specifies whether a function could throw exceptions.
  * [noexcept (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/noexcept-cpp?view=msvc-160)
  * [Exception specifications (throw, noexcept) (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/exception-specifications-throw-cpp?view=msvc-160)
  * [Modern C++ best practices for exceptions and error handling | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/errors-and-exception-handling-modern-cpp?view=msvc-160)

#### Preprocessor

* [Preprocessor directives - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/preprocessor/)
* [Predefined macros | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-160)
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
* [Lambda expressions in C++ | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-160)
  * In C++11 and later, a lambda expression—often called a lambda—is a convenient way of defining an anonymous function object (a closure) right at the location where it's invoked or passed as an argument to a function. Typically lambdas are used to encapsulate a few lines of code that are passed to algorithms or asynchronous functions. This article defines what lambdas are, and compares them to other programming techniques. It describes their advantages, and provides some basic examples.
  * [Lambda expressions (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/lambda)
  * [Lambda expression in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/lambda-expression-in-c/)
* [C++ keywords: mutable - cppreference.com](https://en.cppreference.com/w/cpp/keyword/mutable)
  * [mutable type specifier](https://en.cppreference.com/w/cpp/language/cv)
    * mutable - permits modification of the class member declared mutable even if the containing object is declared const.
  * [lambda-declarator](https://en.cppreference.com/w/cpp/language/lambda) that removes const qualification from parameters captured by copy (since C++11)
    * mutable: allows body to modify the objects captured by copy, and to call their non-const member functions
  * [C++ mutable keyword - GeeksforGeeks](https://www.geeksforgeeks.org/c-mutable-keyword/)
* Parse command line
  * [Chapter 31. Boost.Program_options - 1.72.0](https://www.boost.org/doc/libs/1_72_0/doc/html/program_options.html)
    * The program_options library allows program developers to obtain program options, that is (name, value) pairs from the user, via conventional methods such as command line and config file.
    * [default_value() - Class template typed_value - 1.72.0](https://www.boost.org/doc/libs/1_72_0/doc/html/boost/program_options/typed_value.html#id-1_3_32_9_10_1_1_1_5_1-bb)
    * [c++ - Boost.Program_Options: When <bool> is specified as a command-line option, what are valid command-line parameters? - Stack Overflow](https://stackoverflow.com/questions/15629771/boost-program-options-when-bool-is-specified-as-a-command-line-option-what-a)

#### Multithreading

* [lock_guard - C++ Reference](https://www.cplusplus.com/reference/mutex/lock_guard/)
  * template \<class Mutex> class lock_guard;
  * Lock guard
    * A lock guard is an object that manages a mutex object by keeping it always locked.
    * On construction, the mutex object is locked by the calling thread, and on destruction, the mutex is unlocked. It is the simplest lock, and is specially useful as an object with automatic duration that lasts until the end of its context. In this way, it guarantees the mutex object is properly unlocked in case an exception is thrown.
    * Note though that the lock_guard object does not manage the lifetime of the mutex object in any way: the duration of the mutex object shall extend at least until the destruction of the lock_guard that locks it.
  * [mutex - C++ Reference](https://www.cplusplus.com/reference/mutex/mutex/)
    * class mutex;
    * Mutex class
      * A mutex is a lockable object that is designed to signal when critical sections of code need exclusive access, preventing other threads with the same protection from executing concurrently and access the same memory locations.
      * mutex objects provide exclusive ownership and do not support recursivity (i.e., a thread shall not lock a mutex it already owns) -- see recursive_mutex for an alternative class that does.
      * It is guaranteed to be a standard-layout class.
  * [std::lock_guard - cppreference.com](https://en.cppreference.com/w/cpp/thread/lock_guard)
    * Defined in header \<mutex>
    * template\< class Mutex > class lock_guard; (since C++11)
    * The class lock_guard is a mutex wrapper that provides a convenient RAII-style mechanism for owning a mutex for the duration of a scoped block.
    * When a lock_guard object is created, it attempts to take ownership of the mutex it is given. When control leaves the scope in which the lock_guard object was created, the lock_guard is destructed and the mutex is released.
    * The lock_guard class is non-copyable.
    * [std::lock_guard\<Mutex>::lock_guard - cppreference.com](https://en.cppreference.com/w/cpp/thread/lock_guard/lock_guard)
  * [RAII - cppreference.com](https://en.cppreference.com/w/cpp/language/raii)
    * Resource Acquisition Is Initialization or RAII, is a C++ programming technique[1][2] which binds the life cycle of a resource that must be acquired before use (allocated heap memory, thread of execution, open socket, open file, locked mutex, disk space, database connection—anything that exists in limited supply) to the lifetime of an object.
    * RAII can be summarized as follows:
      * encapsulate each resource into a class, where
        * the constructor acquires the resource and establishes all class invariants or throws an exception if that cannot be done,
        * the destructor releases the resource and never throws exceptions;
      * always use the resource via an instance of a RAII-class that either
        * has automatic storage duration or temporary lifetime itself, or
        * has lifetime that is bounded by the lifetime of an automatic or temporary object
    * Move semantics make it possible to safely transfer resource ownership between objects, across scopes, and in and out of threads, while maintaining resource safety.
    * Classes with open()/close(), lock()/unlock(), or init()/copyFrom()/destroy() member functions are typical examples of non-RAII classes
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
* [unordered_map - C++ Reference](https://www.cplusplus.com/reference/unordered_map/unordered_map/)
  * Unordered Map
  * Unordered maps are associative containers that store elements formed by the combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys.
  * In an unordered_map, the key value is generally used to uniquely identify the element, while the mapped value is an object with the content associated to this key. Types of key and mapped value may differ.
  * Internally, the elements in the unordered_map are not sorted in any particular order with respect to either their key or mapped values, but organized into buckets depending on their hash values to allow for fast access to individual elements directly by their key values (with a constant average time complexity on average).
  * unordered_map containers are faster than map containers to access individual elements by their key, although they are generally less efficient for range iteration through a subset of their elements.
  * Unordered maps implement the direct access operator (operator[]) which allows for direct access of the mapped value using its key value as argument.
  * Iterators in the container are at least forward iterators.
  * [Static const map inside class/struct - C++ Forum](http://www.cplusplus.com/forum/general/266519/)

### C++ Standard Library

* [\<chrono> - C++ Reference](https://www.cplusplus.com/reference/chrono/)
  * [Date and time utilities - cppreference.com](https://en.cppreference.com/w/cpp/chrono)
    * C++ includes support for two types of time manipulation:
      * The chrono library, a flexible collection of types that track time with varying degrees of precision (e.g. std::chrono::time_point).
      * C-style date and time library (e.g. std::time)
  * [\<chrono> | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/chrono?view=msvc-160)
  * [Chrono in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/chrono-in-c/)
* [is_same - C++ Reference](https://www.cplusplus.com/reference/type_traits/is_same/)
  * template <class T, class U> struct is_same;
  * Trait class that identifies whether T is the same type as U, including having the same const and/or volatile qualification, if any.
  * Two different type names are considered to represent the same type if -and only if- one is a typedef of the other: Two names representing types with the exact same characteristics but which none is a typedef of the other are not considered the same type.
  * is_same inherits from integral_constant as being either true_type or false_type, depending on whether T and U are the same type.
  * [std::is_same - cppreference.com](https://en.cppreference.com/w/cpp/types/is_same)
    * If T and U name the same type (taking into account const/volatile qualifications), provides the member constant value equal to true. Otherwise value is false.
    * Commutativity is satisfied, i.e. for any two types T and U, is_same<T, U>::value == true if and only if is_same<U, T>::value == true.
    * The behavior of a program that adds specializations for is_same or is_same_v (since C++17) is undefined.
 
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

* [C++ 单元测试与代码覆盖率](https://mp.weixin.qq.com/s/QV62sN4ILPGk4Ko-a0ZsfA)
  * 本文以C++语言为基础，讲解如何进行单元测试并生成测试报告。
  * 在工具上，我们会使用下面这些：
    * GCC
    * CMake
    * Google Test
    * gcov
    * lcov

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
* How to fix "LNK1104: cannot open file 'libboost_log-vc142-mt-x32-1_72.lib'" when building project in MSVS ?
  *  check the path, e.g. "BOOST_ROOT", in system enviroment variable to see if "\\" is appended at the end, e.g. C:\Program Files\boost\boost_1_72_0\
