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
* [c-cpp/面试总结之C-C++ at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E9%9D%A2%E8%AF%95%E6%80%BB%E7%BB%93%E4%B9%8BC-C%2B%2B)
* [c-cpp/学习笔记之C++入门到精通 at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BC%2B%2B%E5%85%A5%E9%97%A8%E5%88%B0%E7%B2%BE%E9%80%9A)
* [学习笔记之C++ How to Program(part) - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2010/10/26/1860906.html)
* [学习笔记之C++ Primer中文版（第五版） - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/7071876.html)
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

### Basics

* [[ZZ]C++编译器—gcc的用法 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2010/10/08/1845888.html)
* [<bits/stdc++.h> in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/bitsstdc-h-c/)
  * It is basically a header file that includes every standard library. In programming contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
In programming contests, people do focus more on finding the algorithm to solve a problem than on software engineering. From, software engineering perspective, it is a good idea to minimize the include. If you use it actually includes a lot of files, which your program may not need, thus increases both compile time and program size unnecessarily.
* [一个合格的ACMer的代码当中，都藏着哪些秘密？ (qq.com)](https://mp.weixin.qq.com/s/0_qWix8jARKulLFKUR5UNg)

#### Data Types

* [【ZZ】C++11之统一初始化语法 | 桃子的博客志 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/8674208.html)
* [为什么将 0.1f 改为 0 会使性能降低 10 倍？](https://mp.weixin.qq.com/s/bMacxnC_JBuqFDz8k2fp3w)
  * http://cenalulu.github.io/linux/about-denormalized-float-number/
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
* [Enumeration declaration - cppreference.com](https://en.cppreference.com/w/cpp/language/enum)
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
* [谈一谈 C++ 中的值的类型 (qq.com)](https://mp.weixin.qq.com/s/MQNIkeS3eMUmaezyUL8ZkQ)
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
        * an xvalue if new_type is an rvalue reference to 
        type;
        * a prvalue otherwise.
  * [const_cast examples](https://www.geeksforgeeks.org/const_cast-in-c-type-casting-operators/)
    * C++ supports following 4 types of casting operators:
      * 1. const_cast
      * 2. static_cast
      * 3. dynamic_cast
      * 4. reinterpret_cast
* [如何攻克 C++ 中复杂的类型转换？](https://mp.weixin.qq.com/s/lJiva3BUJXUV0cpX1dOe2Q)
  * https://github.com/yingyulou
* [详解 C++ 的隐式类型转换与函数重载！](https://mp.weixin.qq.com/s/S_1KPn_GWJ7hmLH19Dajfg)
  * https://github.com/yingyulou
* [谁说 C++ 的强制类型转换很难懂？](https://mp.weixin.qq.com/s/q3iwtvqMSp6lNC_ZR_SP6A)
  * https://github.com/yingyulou

#### Storage Classes

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
* [C++ keywords: mutable - cppreference.com](https://en.cppreference.com/w/cpp/keyword/mutable)
  * [mutable type specifier](https://en.cppreference.com/w/cpp/language/cv)
    * mutable - permits modification of the class member declared mutable even if the containing object is declared const.
  * [lambda-declarator](https://en.cppreference.com/w/cpp/language/lambda) that removes const qualification from parameters captured by copy (since C++11)
    * mutable: allows body to modify the objects captured by copy, and to call their non-const member functions
  * [C++ mutable keyword - GeeksforGeeks](https://www.geeksforgeeks.org/c-mutable-keyword/)

#### Operators

* [五分钟小知识：为什么说 ++i 的效率比 i++ 高？](https://mp.weixin.qq.com/s/___R-0mc7zezAEVG-1-b5w)
  * 对于内置类型，前置和后置自增或者自减在编译器优化的情况下，两者并无多大差别，而对于自定义类型，如无特别需要，人们似乎更加偏爱前置自增或自减，因为后置自增常常会产生临时对象。
* [typeid operator - cppreference.com](https://en.cppreference.com/w/cpp/language/typeid)
	* Queries information of a type.
	* Used where the dynamic type of a polymorphic object must be known and for static type identification.

#### Decision Making

* [if-else和switch-case哪个效率更高？看这四张图。](https://mp.weixin.qq.com/s/zZ2O1tamQ6NDMneu9kKZRQ)
  * 只有在case中的条件是连续数字或相隔不大时，编译器会使用表结构做优化，性能优于if-else。
  * 其他情况下，switch-case其实就是逐个分支判断，性能与if-else无异。
  * switch-case中的case只能是常量，而if-else用途更广一些，本文仅讨论分支是常量的情况。
* [while(1) 和 for(;;)有什么区别？](https://mp.weixin.qq.com/s/a9g9PAwgc3oXoQXBvT49bA)
* 你会发现，除了文件名不同，其余都相同。
* 当然，这里额外说一下，不同代码、不同编译器，以及不同优化等级，可能最终结果有所差异。

#### Functions

* [进入编译器后，一个函数经历了什么？](https://mp.weixin.qq.com/s/kYilpl4K_XpVDF3gaKoRAQ)
* [C/C++ 中的 argc，argv 到底是什么？](https://mp.weixin.qq.com/s/Mik2n9oLP-PuFNU3lP48Zw)
* [exit(0) vs exit(1) in C/C++ with Examples - GeeksforGeeks](https://www.geeksforgeeks.org/exit0-vs-exit1-in-c-c-with-examples/)
	* Exit Success: Exit Success is indicated by exit(0) statement which means successful termination of the program, i.e. program has been executed without any error or interrupt.
	* Exit Failure: Exit Failure is indicated by exit(1) which means the abnormal termination of the program, i.e. some error or interrupt has occurred. We can use different integer other than 1 to indicate different types of errors.

##### Lambda

* [Lambda expressions in C++ | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-160)
  * In C++11 and later, a lambda expression—often called a lambda—is a convenient way of defining an anonymous function object (a closure) right at the location where it's invoked or passed as an argument to a function. Typically lambdas are used to encapsulate a few lines of code that are passed to algorithms or asynchronous functions. This article defines what lambdas are, and compares them to other programming techniques. It describes their advantages, and provides some basic examples.
  * [Lambda expressions (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/lambda)
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
	* [string::find - C++ Reference](https://www.cplusplus.com/reference/string/string/find/)
		* Find content in string
			* Searches the string for the first occurrence of the sequence specified by its arguments.
			* When pos is specified, the search only includes characters at or after position pos, ignoring any possible occurrences that include characters before pos.
			* Notice that unlike member find_first_of, whenever more than one character is being searched for, it is not enough that just one of these characters match, but the entire sequence must match.
		* [std::basic_string<CharT,Traits,Allocator>::find - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/find)
	* [std::basic_string<CharT,Traits,Allocator>::substr - cppreference.com](https://en.cppreference.com/w/cpp/string/basic_string/substr)
		* Returns a substring [pos, pos+count). If the requested substring extends past the end of the string, i.e. the count is greater than size() - pos (e.g. if count == npos), the returned substring is [pos, size()).
	* [std::to_string - C++ Reference](https://www.cplusplus.com/reference/string/to_string/)
		* Convert numerical value to string
			* Returns a string with the representation of val.
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

* [使用 C++ 的 StringBuilder 提升 4350% 的性能](https://mp.weixin.qq.com/s/YfY_c4D_kWSth5tETqnhkg)
  * 经常出现客户端打电话抱怨说：你们的程序慢如蜗牛。你开始检查可能的疑点：文件IO，数据库访问速度，甚至查看web服务。但是这些可能的疑点都很正常，一点问题都没有。
  * 你使用最顺手的性能分析工具分析，发现瓶颈在于一个小函数，这个函数的作用是将一个长的字符串链表写到一文件中。
  * 你对这个函数做了如下优化：将所有的小字符串连接成一个长的字符串，执行一次文件写入操作，避免成千上万次的小字符串写文件操作。
  * 这个优化只做对了一半。
  * 你先测试大字符串写文件的速度，发现快如闪电。然后你再测试所有字符串拼接的速度。
  * 好几年。
  * 怎么回事？你会怎么克服这个问题呢？
  * 你或许知道.net程序员可以使用StringBuilder来解决此问题。这也是本文的起点。

#### Pointers

* [一文掌握 C++ 智能指针的使用](https://mp.weixin.qq.com/s/bn7BAzBSxgbrkgRMnuy8-A)
  * RAII 与引用计数
  * std::shared_ptr
  * std::unique_ptr
  * std::weak_ptr

#### Basic Input/Output

* [【ZZ】cin、cin.get()、cin.getline()、getline()、gets()等函数的用法 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2011/04/21/2024345.html)
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
```c++
#include <bits/stdc++.h>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
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
  * [How can I get the list of files in a directory using C or C++? - Stack Overflow](https://stackoverflow.com/questions/612097/how-can-i-get-the-list-of-files-in-a-directory-using-c-or-c)
* [std::filesystem::directory_iterator - cppreference.com](https://en.cppreference.com/w/cpp/filesystem/directory_iterator)
  * directory_iterator is a LegacyInputIterator that iterates over the directory_entry elements of a directory (but does not visit the subdirectories). The iteration order is unspecified, except that each directory entry is visited only once. The special pathnames dot and dot-dot are skipped.
  * If the directory_iterator reports an error or is advanced past the last directory entry, it becomes equal to the default-constructed iterator, also known as the end iterator. Two end iterators are always equal, dereferencing or incrementing the end iterator is undefined behavior.
  * If a file or a directory is deleted or added to the directory tree after the directory iterator has been created, it is unspecified whether the change would be observed through the iterator.
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

#### Exception Handling

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
* [std::runtime_error - cppreference.com](https://en.cppreference.com/w/cpp/error/runtime_error)
  * Defines a type of object to be thrown as exception. It reports errors that are due to events beyond the scope of the program and can not be easily predicted.
  * [exception - c++: Catch runtime_error - Stack Overflow](https://stackoverflow.com/questions/7491877/c-catch-runtime-error)
* [noexcept specifier (since C++11) - cppreference.com](https://en.cppreference.com/w/cpp/language/noexcept_spec)
  * Specifies whether a function could throw exceptions.
  * [noexcept (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/noexcept-cpp?view=msvc-160)
  * [Exception specifications (throw, noexcept) (C++) | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/exception-specifications-throw-cpp?view=msvc-160)
  * [Modern C++ best practices for exceptions and error handling | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/errors-and-exception-handling-modern-cpp?view=msvc-160)
  * [C++ Core Guidelines - E.12: Use noexcept when exiting a function because of a throw is impossible or unacceptable](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#e12-use-noexcept-when-exiting-a-function-because-of-a-throw-is-impossible-or-unacceptable)
    * Reason To make error handling systematic, robust, and efficient.
    * Note Many standard-library functions are noexcept including all the standard-library functions “inherited” from the C Standard Library.
  * [C++ Core Guidelines - F.6: If your function must not throw, declare it noexcept](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#f6-if-your-function-must-not-throw-declare-it-noexcept)
    * Reason If an exception is not supposed to be thrown, the program cannot be assumed to cope with the error and should be terminated as soon as possible. Declaring a function noexcept helps optimizers by reducing the number of alternative execution paths. It also speeds up the exit after failure.
    * Example Put noexcept on every function written completely in C or in any other language without exceptions. The C++ Standard Library does that implicitly for all functions in the C Standard Library.
    * Note constexpr functions can throw when evaluated at run time, so you might need conditional noexcept for some of those.
    * noexcept is most useful (and most clearly correct) for frequently used, low-level functions.

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

##### Function Template

##### Class Template

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

#### Preprocessor

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

##### Conditional inclusions (#ifdef, #ifndef, #if, #endif, #else and #elif)

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

* [std::thread - cppreference.com](https://en.cppreference.com/w/cpp/thread/thread)
	* The class thread represents a single thread of execution. Threads allow multiple functions to execute concurrently.
	* Threads begin execution immediately upon construction of the associated thread object (pending any OS scheduling delays), starting at the top-level function provided as a constructor argument. The return value of the top-level function is ignored and if it terminates by throwing an exception, std::terminate is called. The top-level function may communicate its return value or an exception to the caller via std::promise or by modifying shared variables (which may require synchronization, see std::mutex and std::atomic)
	* std::thread objects may also be in the state that does not represent any thread (after default construction, move from, detach, or join), and a thread of execution may not be associated with any thread objects (after detach).
	* No two std::thread objects may represent the same thread of execution; std::thread is not CopyConstructible or CopyAssignable, although it is MoveConstructible and MoveAssignable.
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
* [用三个线程按顺序循环打印ABC三个字母 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/8575543.html)
* [Sleep v.s. sleep - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/p/5584088.html)
* [Multithreading in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/multithreading-in-cpp/)
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
* [C/C++ 线程库的详细使用](https://mp.weixin.qq.com/s/2PCUSTXrTGuOVgpNmWdA_Q)
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

### Standard Template Library (STL)

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
* [std::swap - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/swap)
  * [swap() in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/swap-in-cpp/)

#### Sequence

* [std::array - cppreference.com](https://en.cppreference.com/w/cpp/container/array)
  * std::array is a container that encapsulates fixed size arrays.
  * This container is an aggregate type with the same semantics as a struct holding a C-style array T[N] as its only non-static data member. Unlike a C-style array, it doesn't decay to T* automatically. As an aggregate type, it can be initialized with aggregate-initialization given at most N initializers that are convertible to T: std::array<int, 3> a = {1,2,3};.
  * The struct combines the performance and accessibility of a C-style array with the benefits of a standard container, such as knowing its own size, supporting assignment, random access iterators, etc.
  * std::array satisfies the requirements of Container and ReversibleContainer except that default-constructed array is not empty and that the complexity of swapping is linear, satisfies the requirements of ContiguousContainer, (since C++17) and partially satisfies the requirements of SequenceContainer.
  * There is a special case for a zero-length array (N == 0). In that case, array.begin() == array.end(), which is some unique value. The effect of calling front() or back() on a zero-sized array is undefined.
  * An array can also be used as a tuple of N elements of the same type.
* [std::vector - cppreference.com](https://en.cppreference.com/w/cpp/container/vector)
	* [std::vector<T,Allocator>::emplace_back - cppreference.com](https://en.cppreference.com/w/cpp/container/vector/emplace_back)
	* [vector::emplace_back - C++ Reference](http://www.cplusplus.com/reference/vector/vector/emplace_back/)
		* Construct and insert element at the end
			* Inserts a new element at the end of the vector, right after its current last element. This new element is constructed in place using args as the arguments for its constructor.
			* This effectively increases the container size by one, which causes an automatic reallocation of the allocated storage space if -and only if- the new vector size surpasses the current vector capacity.
			* The element is constructed in-place by calling allocator_traits::construct with args forwarded.
			* A similar member function exists, push_back, which either copies or moves an existing object into the container.
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

#### Associative

* [std::map - cppreference.com](https://en.cppreference.com/w/cpp/container/map)
	* [map - C++ Reference](http://www.cplusplus.com/reference/map/map/)
	* [map::cbegin - C++ Reference](http://www.cplusplus.com/reference/map/map/cbegin/)
		* Return const_iterator to beginning
			* Returns a const_iterator pointing to the first element in the container.
			* A const_iterator is an iterator that points to const content. This iterator can be increased and decreased (unless it is itself also const), just like the iterator returned by map::begin, but it cannot be used to modify the contents it points to, even if the map object is not itself const.
			* If the container is empty, the returned iterator value shall not be dereferenced.
  * [map::operator[] - C++ Reference](http://www.cplusplus.com/reference/map/map/operator[]/)
    * If k matches the key of an element in the container, the function returns a reference to its mapped value.
    * If k does not match the key of any element in the container, the function inserts a new element with that key and returns a reference to its mapped value. Notice that this always increases the container size by one, even if no mapped value is assigned to the element (the element is constructed using its default constructor).
    * A similar member function, map::at, has the same behavior when an element with the key exists, but throws an exception when it does not.
    * A call to this function is equivalent to:
      * (*((this->insert(make_pair(k,mapped_type()))).first)).second
	* [map::begin() and end() in C++ STL - GeeksforGeeks](https://www.geeksforgeeks.org/mapbegin-end-c-stl/)
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

#### Unordered associative

* [std::unordered_set - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_set)
	* Unordered set is an associative container that contains a set of unique objects of type Key. Search, insertion, and removal have average constant-time complexity.
	* Internally, the elements are not sorted in any particular order, but organized into buckets. Which bucket an element is placed into depends entirely on the hash of its value. This allows fast access to individual elements, since once a hash is computed, it refers to the exact bucket the element is placed into.
	* Container elements may not be modified (even by non const iterators) since modification could change an element's hash and corrupt the container.
	* std::unordered_set meets the requirements of Container, AllocatorAwareContainer, UnorderedAssociativeContainer.
	* [std::unordered_set<Key,Hash,KeyEqual,Allocator>::count - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_set/count)
* [std::unordered_map - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map)
	* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::begin(size_type), std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::cbegin(size_type) - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/begin2)
	* [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::size - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/size)
  * [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::at - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/at)
    * Returns a reference to the mapped value of the element with key equivalent to key. If no such element exists, an exception of type std::out_of_range is thrown.
  * [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::operator[] - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/operator_at)
    * Returns a reference to the value that is mapped to a key equivalent to key, performing an insertion if such key does not already exist.
  * [std::unordered_map<Key,T,Hash,KeyEqual,Allocator>::count - cppreference.com](https://en.cppreference.com/w/cpp/container/unordered_map/count)
  * [unordered_map - C++ Reference](https://www.cplusplus.com/reference/unordered_map/unordered_map/)
    * Unordered Map
    * Unordered maps are associative containers that store elements formed by the combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys.
    * In an unordered_map, the key value is generally used to uniquely identify the element, while the mapped value is an object with the content associated to this key. Types of key and mapped value may differ.
    * Internally, the elements in the unordered_map are not sorted in any particular order with respect to either their key or mapped values, but organized into buckets depending on their hash values to allow for fast access to individual elements directly by their key values (with a constant average time complexity on average).
    * unordered_map containers are faster than map containers to access individual elements by their key, although they are generally less efficient for range iteration through a subset of their elements.
    * Unordered maps implement the direct access operator (operator[]) which allows for direct access of the mapped value using its key value as argument.
    * Iterators in the container are at least forward iterators.
    * [Static const map inside class/struct - C++ Forum](http://www.cplusplus.com/forum/general/266519/)

#### Adaptors

#### Views

### C++ Standard Library

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

#### Algorithm library

* [std::find, std::find_if, std::find_if_not - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/find)
  * [find_if - C++ Reference](https://www.cplusplus.com/reference/algorithm/find_if/)
    * Find element in range
      * Returns an iterator to the first element in the range \[first,last) for which pred returns true. If no such element is found, the function returns last.
  * [std::find_if , std::find_if_not in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/stdfind_if-stdfind_if_not-in-c/)

#### Iterator library

* [std::advance - cppreference.com](https://en.cppreference.com/w/cpp/iterator/advance)
	* Increments given iterator it by n elements.
	* If n is negative, the iterator is decremented. In this case, InputIt must meet the requirements of LegacyBidirectionalIterator, otherwise the behavior is undefined.
	* [advance - C++ Reference](https://www.cplusplus.com/reference/iterator/advance/)
		* Advance iterator
			* Advances the iterator it by n element positions.
			* If it is a random-access iterator, the function uses just once operator+ or operator-. Otherwise, the function uses repeatedly the increase or decrease operator (operator++ or operator--) until n elements have been advanced.
	* [std::advance in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/stdadvance-in-cpp/)

#### Ranges library

* [起底 C++ Range 令人惊讶的局限性！](https://mp.weixin.qq.com/s/iB70FXO-D7C-72N4l9KnzA)
  * https://www.fluentcpp.com/2019/09/13/the-surprising-limitations-of-c-ranges-beyond-trivial-use-cases/
 
#### Utility library

* [\<chrono> - C++ Reference](https://www.cplusplus.com/reference/chrono/)
  * [Date and time utilities - cppreference.com](https://en.cppreference.com/w/cpp/chrono)
    * C++ includes support for two types of time manipulation:
      * The chrono library, a flexible collection of types that track time with varying degrees of precision (e.g. std::chrono::time_point).
      * C-style date and time library (e.g. std::time)
  * [\<chrono> | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/chrono?view=msvc-160)
  * [Chrono in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/chrono-in-c/)
* [std::function - cppreference.com](https://en.cppreference.com/w/cpp/utility/functional/function)
  * [function - C++ Reference](https://www.cplusplus.com/reference/functional/function/)
    * Function wrapper
      * Class that can wrap any kind of callable element (such as functions and function objects) into a copyable object, and whose type depends solely on its call signature (and not on the callable element type itself).
      * An object of a function class instantiation can wrap any of the following kinds of callable objects: a function, a function pointer, a pointer to member, or any kind of function object (i.e., an object whose class defines operator(), including closures).
      * A decay copy of the wrapped callable object is stored internally by the object, which becomes the function's target. The specific type of this target callable object is not needed in order to instantiate the function wrapper class; only its call signature.
      * The function object can be copied and moved around, and can be used to directly invoke the callable object with the specified call signature (see member operator()).
      * function objects can also be in a state with no target callable object. In this case they are known as empty functions, and calling them throws a bad_function_call exception.
  * [C++ Library - \<functional>](https://www.tutorialspoint.com/cpp_standard_library/functional.htm)
* [is_same - C++ Reference](https://www.cplusplus.com/reference/type_traits/is_same/)
  * template \<class T, class U> struct is_same;
  * Trait class that identifies whether T is the same type as U, including having the same const and/or volatile qualification, if any.
  * Two different type names are considered to represent the same type if -and only if- one is a typedef of the other: Two names representing types with the exact same characteristics but which none is a typedef of the other are not considered the same type.
  * is_same inherits from integral_constant as being either true_type or false_type, depending on whether T and U are the same type.
  * [std::is_same - cppreference.com](https://en.cppreference.com/w/cpp/types/is_same)
    * If T and U name the same type (taking into account const/volatile qualifications), provides the member constant value equal to true. Otherwise value is false.
    * Commutativity is satisfied, i.e. for any two types T and U, is_same\<T, U>::value == true if and only if is_same\<U, T>::value == true.
    * The behavior of a program that adds specializations for is_same or is_same_v (since C++17) is undefined.
* [std::optional - cppreference.com](https://en.cppreference.com/w/cpp/utility/optional)
  * Defined in header \<optional>
  * template\< class T > class optional; (since C++17)
  * The class template std::optional manages an optional contained value, i.e. a value that may or may not be present.
  * A common use case for optional is the return value of a function that may fail. As opposed to other approaches, such as std::pair\<T,bool\>, optional handles expensive-to-construct objects well and is more readable, as the intent is expressed explicitly.
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
  * [optional Class | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/standard-library/optional-class?view=msvc-170)
  * [std::optional: How, when, and why - C++ Team Blog](https://devblogs.microsoft.com/cppblog/stdoptional-how-when-and-why/)
    * optional is mandatory
      * optional is particularly well-suited to the delayed initialization problem because it is itself an instance of delayed initialization. The contained T may be initialized at construction, or sometime later, or never. Any contained T must be destroyed when the optional is destroyed. The designers of optional have already answered most of the questions that arise in this context.
    * Conclusions
      * Any time you need a tool to express “value-or-not-value”, or “possibly an answer”, or “object with delayed initialization”, you should reach into your toolbox for std::optional. Using a vocabulary type for these cases raises the level of abstraction, making it easier for others to understand what your code is doing. The declarations optional/<T/> f(); and void g(optional/<T/>); express intent more clearly and concisely than do pair/<T, bool> f(); or void g(T t, bool is_valid);. Just as is the case with words, adding to our vocabulary of types increases our capacity to describe complex problems simply – it makes us more efficient.

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

### Modern C++

* [每个开发者都应该了解的一些C++特性](https://mp.weixin.qq.com/s/Hpn7KqYlBKz0JdryiozqyQ)
  * https://www.freecodecamp.org/news/some-awesome-modern-c-features-that-every-developer-should-know-5e3bf6f79a3c/
  * C++ 是一种强大的编程语言，但也因为其复杂性一直让用户望而却步。后来，C++ 决定做出改变，然后发展至今，成了编程社区最受欢迎的语言之一。C++ 有一些新特性非常好用，本文对此进行了介绍，比如 auto、lambda、constexpr、tuple、智能指针等。
  * auto 概念
  * lambda 表达式
  * if 或 switch 语句里的初始状态
  * 编译时执行 constexpr
  * tuple
  * 类模版参数推断
  * 智能指针
* [C++ 11 新特性梳理](https://mp.weixin.qq.com/s/c6BCvqbmwU6jCOhjL7qQPQ)
  * https://www.jianshu.com/p/78c700c8d72d
  * 在面试中，经常被问的一个问题就是：你了解C++11哪些新特性？一般而言，回答以下四个方面就够了：
    * “语法糖”：nullptr, auto自动类型推导，范围for循环，初始化列表, lambda表达式等
    * 右值引用和移动语义
    * 智能指针
    * C++11多线程编程：thread库及其相配套的同步原语mutex, lock_guard, condition_variable, 以及异步std::furture
* [解读C++即将迎来的重大更新（一）：C++20的四大新特性](https://mp.weixin.qq.com/s/QpqvZ3a7nFdHGjIBiKX67g)
  * https://www.modernescpp.com/index.php/thebigfour

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

## Application

* [简单的生成Email的C++程序 - 浩然119 - 博客园](https://www.cnblogs.com/pegasus923/archive/2010/10/26/1860900.html)
* [C++控制台打飞机小游戏 | CSDN 博文精选](https://mp.weixin.qq.com/s/ML7bm89cBwkLVpyPt1dmkg)
  * https://blog.csdn.net/C20190102/article/details/102727963

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
* How to lock files ?
  * You can simply use the Win32 API CreateFile and then specify no sharing rights. This will ensure that no other processes can access the file.
  * The dwShareMode DWORD specifies the type of sharing you would like, for example GENERIC_READ. If you specify 0 then that means no sharing rights should be granted.
  ```c++
  HANDLE hFile = CreateFile(_T("c:\\file.txt"), GENERIC_READ, 0, NULL, OPEN_EXISTING, 0, NULL);
  ```
  * If you want to only lock a certain part of the file you can use LockFile or LockFileEx.
  ```c++
  //Lock the first 1024 bytes
  BOOL bLocked = LockFile(hFile, 0, 0, 1024, 0);
  ```
  * [Locking files using C++ on Windows - Stack Overflow](https://stackoverflow.com/questions/853805/locking-files-using-c-on-windows)
  * [CreateFileA function (fileapi.h) - Win32 apps | Microsoft Docs](https://docs.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-createfilea?redirectedfrom=MSDN)
  * [c++ - Using std:fstream how to deny access (read and write) to the file - Stack Overflow](https://stackoverflow.com/questions/839856/using-stdfstream-how-to-deny-access-read-and-write-to-the-file)
* How to get UNC path of local folder ?
  * [windows - UNC path to a folder on my local computer - Stack Overflow](https://stackoverflow.com/questions/2787203/unc-path-to-a-folder-on-my-local-computer)
    * If you're going to access your local computer (or any computer) using UNC, you'll need to setup a share. If you haven't already setup a share, you could use the default administrative shares. Example: 
    * \\localhost\c$\my_dir
  * [What is Universal Naming Convention (UNC)? - Definition from WhatIs.com](https://whatis.techtarget.com/definition/Universal-Naming-Convention-UNC)
    * In a network, the Universal Naming Convention (UNC) is a way to identify a shared file in a computer without having to specify (or know) the storage device it is on. 
    * In Windows operating systems, the UNC name format is:
    * \\servername\sharename\path\filename
* How to execute command and get output ?
  * [process - How do I execute a command and get the output of the command within C++ using POSIX? - Stack Overflow](https://stackoverflow.com/questions/478898/how-do-i-execute-a-command-and-get-the-output-of-the-command-within-c-using-po)
  * [system - C++ Reference](https://www.cplusplus.com/reference/cstdlib/system/)
    * Execute system command
      * Invokes the command processor to execute a command.
      * If command is a null pointer, the function only checks whether a command processor is available through this function, without invoking any command.
      * The effects of invoking a command depend on the system and library implementation, and may cause a program to behave in a non-standard manner or to terminate.
  * [std::unique_ptr - cppreference.com](https://en.cppreference.com/w/cpp/memory/unique_ptr)
* How to check if process is in deadlock ?
	* Task Manager > Performance > Open Resource Monitor > Select process > Analyze Wait Chain...

### ERROR FIX

* How to fix "LNK1104: cannot open file 'libboost_log-vc142-mt-x32-1_72.lib'" when building project in MSVS ?
  * check the path, e.g. "BOOST_ROOT", in system enviroment variable to see if "\\" is appended at the end, e.g. C:\Program Files\boost\boost_1_72_0\
* How to fix "error LNK2019: unresolved external symbol "char * __stdcall _com_util::ConvertBSTRToString(wchar_t *)" (?ConvertBSTRToString@_com_util@@YGPADPA_W@Z) referenced in function "public: char const * __thiscall _bstr_t::Data_t::GetString(void)const " (?GetString@Data_t@_bstr_t@@QBEPBDXZ)" when #include \<comutil.h>?
  * Append "comsuppw.lib" to MSVS > Project Property > Linker > Input
  * [error LNK2019 related to ConvertStringToBSTR](https://social.microsoft.com/Forums/windows/he-IL/8e2b44f4-3884-445c-9da9-e6abb2783b4c/error-lnk2019-related-to-convertstringtobstr?forum=Vsexpressvc)
  * [ConvertStringToBSTR | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/convertstringtobstr?redirectedfrom=MSDN&view=msvc-160)
* How to fix "warning LNK4075: ignoring '/INCREMENTAL' due to '/OPT:ICF' specification" ?
  * Change default to below values in MSVS > Your project property > Linker > Optimization :
    * References = Keep Unreferenced Data (/OPT:NOREF)
    * Enable COMDAT Folding = Do Not Remove Redundant COMDATs (/OPT:NOICF)
  * [c++ - LNK4075: ignoring '/EDITANDCONTINUE' due to '/OPT:ICF' specification - Stack Overflow](https://stackoverflow.com/questions/1574367/lnk4075-ignoring-editandcontinue-due-to-opticf-specification)
  * [Linker Tools Warning LNK4075 | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/error-messages/tool-errors/linker-tools-warning-lnk4075?view=msvc-160)
