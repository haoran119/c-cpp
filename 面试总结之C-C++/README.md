# 面试总结之C / C++

* [c-cpp/学习笔记之C-C++ at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BC-C%2B%2B)
* [学习笔记之IKM C++ 11 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8465745.html)
* [学习笔记之100 TOP Ikm C++ Online Test Questions - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8533582.html)
* [面试总结之指针 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/5581823.html)
* [[ZZ]软件工程师 C/C++笔试题 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2010/10/05/1842918.html)

## RESOURCES
* [Solve C++ | HackerRank](https://www.hackerrank.com/domains/cpp)
* [STL Containers - C++ Reference](http://www.cplusplus.com/reference/stl/)
* [C++ Data Structures and Algorithms Cheat Sheet](https://github.com/gibsjose/cpp-cheat-sheet/blob/master/Data%20Structures%20and%20Algorithms.md)
* [C 语言与 C++ 面试知识总结 (qq.com)](https://mp.weixin.qq.com/s/x6DMkh54NQBOlDMqNxvf7w)
  * [huihut/interview: 📚 C/C++ 技术面试基础知识总结](https://github.com/huihut/interview)
    * [STL](https://github.com/huihut/interview#-stl)
    * [Effective C++](https://github.com/huihut/interview#effective-c)
    	* 为多态基类声明 virtual 析构函数（如果 class 带有任何 virtual 函数，它就应该拥有一个 virtual 析构函数）
    	* 别让异常逃离析构函数（析构函数应该吞下不传播异常，或者结束程序，而不是吐出异常；如果要处理异常应该在非析构的普通函数处理）
    	* 绝不在构造和析构过程中调用 virtual 函数（因为这类调用从不下降至 derived class）
    	* 令 operator= 返回一个 reference to *this （用于连锁赋值）
    	* 在 operator= 中处理 “自我赋值”
    	* 赋值对象时应确保复制 “对象内的所有成员变量” 及 “所有 base class 成分”（调用基类复制构造函数）
    	* 在资源管理类中小心 copying 行为（普遍的 RAII class copying 行为是：抑制 copying、引用计数、深度拷贝、转移底部资源拥有权（类似 auto_ptr））
    	* 以独立语句将 newed 对象存储于（置入）智能指针（如果不这样做，可能会因为编译器优化，导致难以察觉的资源泄漏）
    	* 宁以 pass-by-reference-to-const 替换 pass-by-value （前者通常更高效、避免切割问题（slicing problem），但不适用于内置类型、STL迭代器、函数对象）
    	* 必须返回对象时，别妄想返回其 reference（绝不返回 pointer 或 reference 指向一个 local stack 对象，或返回 reference 指向一个 heap-allocated 对象，或返回 pointer 或 reference 指向一个 local static 对象而有可能同时需要多个这样的对象。）
    	* 避免使用 handles（包括 引用、指针、迭代器）指向对象内部（以增加封装性、使 const 成员函数的行为更像 const、降低 “虚吊号码牌”（dangling handles，如悬空指针等）的可能性）
    	* 将文件间的编译依存关系降至最低（如果使用 object references 或 object pointers 可以完成任务，就不要使用 objects；如果能够，尽量以 class 声明式替换 class 定义式；为声明式和定义式提供不同的头文件）
    	* 绝不重新定义继承而来的 non-virtual 函数
    	* 绝不重新定义继承而来的缺省参数值，因为缺省参数值是静态绑定（statically bound），而 virtual 函数却是动态绑定（dynamically bound）
    	* 明智而审慎地使用多重继承（多继承比单一继承复杂，可能导致新的歧义性，以及对 virtual 继承的需要，但确有正当用途，如 “public 继承某个 interface class” 和 “private 继承某个协助实现的 class”；virtual 继承可解决多继承下菱形继承的二义性问题，但会增加大小、速度、初始化及赋值的复杂度等等成本）
    	* 了解隐式接口和编译期多态（class 和 templates 都支持接口（interfaces）和多态（polymorphism）；class 的接口是以签名为中心的显式的（explicit），多态则是通过 virtual 函数发生于运行期；template 的接口是奠基于有效表达式的隐式的（implicit），多态则是通过 template 具现化和函数重载解析（function overloading resolution）发生于编译期）
    * [More Effective c++](https://github.com/huihut/interview#more-effective-c)
    	* 仔细区别 pointers 和 references（当你知道你需要指向某个东西，而且绝不会改变指向其他东西，或是当你实现一个操作符而其语法需求无法由 pointers 达成，你就应该选择 references；任何其他时候，请采用 pointers）
    	* 区别 increment/decrement 操作符的前置（prefix）和后置（postfix）形式（前置式累加后取出，返回一个 reference；后置式取出后累加，返回一个 const 对象；处理用户定制类型时，应该尽可能使用前置式 increment；后置式的实现应以其前置式兄弟为基础）
    	* 千万不要重载 &&，|| 和 , 操作符（&& 与 || 的重载会用 “函数调用语义” 取代 “骤死式语义”；, 的重载导致不能保证左侧表达式一定比右侧表达式更早被评估）
    	* 在 constructors 内阻止资源泄漏（由于 C++ 只会析构已构造完成的对象，因此在构造函数可以使用 try...catch 或者 auto_ptr（以及与之相似的 classes） 处理异常时资源泄露问题）
    	* 禁止异常流出 destructors 之外（原因：一、避免 terminate 函数在 exception 传播过程的栈展开（stack-unwinding）机制种被调用；二、协助确保 destructors 完成其应该完成的所有事情）
    	* 了解 “抛出一个 exception” 与 “传递一个参数” 或 “调用一个虚函数” 之间的差异（第一，exception objects 总是会被复制（by pointer 除外），如果以 by value 方式捕捉甚至被复制两次，而传递给函数参数的对象则不一定得复制；第二，“被抛出成为 exceptions” 的对象，其被允许的类型转换动作比 “被传递到函数去” 的对象少；第三，catch 子句以其 “出现于源代码的顺序” 被编译器检验对比，其中第一个匹配成功者便执行，而调用一个虚函数，被选中执行的是那个 “与对象类型最佳吻合” 的函数）
    	* 以 by reference 方式捕获 exceptions（可避免对象删除问题、exception objects 的切割问题，可保留捕捉标准 exceptions 的能力，可约束 exception object 需要复制的次数）
    	* 了解异常处理的成本（粗略估计，如果使用 try 语句块，代码大约整体膨胀 5%-10%，执行速度亦大约下降这个数；因此请将你对 try 语句块和 exception specifications 的使用限制于非用不可的地点，并且在真正异常的情况下才抛出 exceptions）
    * 英文：[Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
    * 中文：[C++ 风格指南](https://zh-google-styleguide.readthedocs.io/en/latest/google-cpp-styleguide/contents/)
    * [Bjarne Stroustrup 的常见问题](http://www.stroustrup.com/bs_faq.html)
    * [Bjarne Stroustrup 的 C++ 风格和技巧常见问题](http://www.stroustrup.com/bs_faq2.html)
* [C++ 面试突击 - LeetBook - 力扣（LeetCode）全球极客挚爱的技术成长平台](https://leetcode-cn.com/leetbook/detail/cpp-interview-highlights/)
  * [2021 秋招 100 道 C++ 面试高频题汇总](https://mp.weixin.qq.com/s/wPq-fJFua0xt5zfJf0fLJA)
  * 编译内存相关
    1. C++ 程序编译过程
    2. C++ 内存管理
    3. 栈和堆的区别
    4. 变量的区别
    5. 全局变量定义在头文件中有什么问题？
    6. 对象创建限制在堆或栈
    7. 内存对齐
    8. 类的大小
    9. 什么是内存泄露
    10. 怎么防止内存泄漏？内存泄漏检测工具的原理？
    11. 智能指针有哪几种？智能指针的实现原理？
    12. 一个 unique_ptr 怎么赋值给另一个 unique_ptr 对象？
    13. 使用智能指针会出现什么问题？怎么解决？
  * 语言对比
    1. C++ 11 新特性
    2. C 和 C++ 的区别
    3. Java 和 C++ 的区别
    4. Python 和 C++ 的区别
  * 面向对象
    1. 什么是面向对象？面向对象的三大特性
    2. 重载、重写、隐藏的区别
    3. 如何理解 C++ 是面向对象编程
    4. 什么是多态？多态如何实现？
  * 关键字库函数
    1. sizeof 和 strlen 的区别
    2. lambda 表达式（匿名函数）的具体应用和使用场景
    3. explicit 的作用（如何避免编译器进行隐式类型转换）
    4. C 和 C++ static 的区别
    5. static 的作用
    6. static 在类中使用的注意事项（定义、初始化和使用）
    7. static 全局变量和普通全局变量的异同
    8. const 作用及用法
    9. define 和 const 的区别
    10. define 和 typedef 的区别
    11. 用宏实现比较大小，以及两个数中的最小值
    12. inline 作用及使用方法
    13. inline 函数工作原理
    14. 宏定义（define）和内联函数（inline）的区别
    15. new 的作用？
    16. new 和 malloc 如何判断是否申请到内存？
    17. delete 实现原理？delete 和 delete[] 的区别？
    18. new 和 malloc 的区别，delete 和 free 的区别
    19. malloc 的原理？malloc 的底层实现？
    20. C 和 C++ struct 的区别？
    21. 为什么有了 class 还保留 struct？
    22. struct 和 union 的区别
    23. class 和 struct 的异同
    24. volatile 的作用？是否具有原子性，对编译器有什么影响？
    25. 什么情况下一定要用 volatile， 能否和 const 一起使用？
    26. 返回函数中静态变量的地址会发生什么？
    27. extern C 的作用？
    28. sizeof(1==1) 在 C 和 C++ 中分别是什么结果？
    29. memcpy 函数的底层原理？
    30. strcpy 函数有什么缺陷？
    31. auto 类型推导的原理
  * 类相关
    1. 什么是虚函数？什么是纯虚函数？
    2. 虚函数和纯虚函数的区别？
    3. 虚函数的实现机制
    4. 单继承和多继承的虚函数表结构
    5. 如何禁止构造函数的使用？
    6. 什么是类的默认构造函数？
    7. 构造函数、析构函数是否需要定义成虚函数？为什么？
    8. 如何避免拷贝？
    9. 如何减少构造函数开销？
    10. 多重继承时会出现什么状况？如何解决？
    11. 空类占多少字节？C++ 编译器会给一个空类自动生成哪些函数？
    12. 为什么拷贝构造函数必须为引用？
    13. C++ 类对象的初始化顺序
    14. 如何禁止一个类被实例化？
    15. 为什么用成员初始化列表会快一些？
    16. 实例化一个对象需要哪几个阶段
    17. 友元函数的作用及使用场景
    18. 静态绑定和动态绑定是怎么实现的？
    19. 深拷贝和浅拷贝的区别
    20. 编译时多态和运行时多态的区别
    21. 实现一个类成员函数，要求不允许修改类的成员变量？
    22. 如何让类不能被继承？
  * 语言特性相关
    1. 左值和右值的区别？左值引用和右值引用的区别，如何将左值转换成右值？
    2. std::move() 函数的实现原理
    3. 什么是指针？指针的大小及用法？
    4. 什么是野指针和悬空指针？
    5. C++ 11 nullptr 比 NULL 优势
    6. 指针和引用的区别？
    7. 常量指针和指针常量的区别
    8. 函数指针和指针函数的区别
    9. 强制类型转换有哪几种？
    10. 如何判断结构体是否相等？能否用 memcmp 函数判断结构体相等？
    11. 参数传递时，值传递、引用传递、指针传递的区别？
    12. 什么是模板？如何实现？
    13. 函数模板和类模板的区别？
    14. 什么是可变参数模板？
    15. 什么是模板特化？为什么特化？
    16. include " " 和 <> 的区别
    17. switch 的 case 里为何不能定义变量
    18. 迭代器的作用？
    19. 泛型编程如何实现？
    20. 什么是类型萃取？
  * 设计模式
    1. 了解哪些设计模式？
    2. 什么是单例模式？如何实现？应用场景？
    3. 什么是工厂模式？如何实现？应用场景？
    4. 什么是观察者模式？如何实现？应用场景？
* [这些C++工程师面试题你都会了吗？](https://mp.weixin.qq.com/s/JA3ZrRwS_KllNdJxVMQRdA)
  * [你们要的C++面试题答案来了--基础篇](https://mp.weixin.qq.com/s/YRo5Lm9pbbZnjY1DQfW6yw)
* [2021 年 C++ 岗就业如何？附学习路线图 (qq.com)](https://mp.weixin.qq.com/s/g6dHxYN7jhw_bLXqnFdEyA)
* [C++ 八股文（一）](https://mp.weixin.qq.com/s/qVSdP0hXbC7le5DC3vJHKw)
* [C/C++ 八股文（二）](https://mp.weixin.qq.com/s?__biz=MzA4MjI3NzQ1Nw==&mid=2247497197&idx=1&sn=eda5b49d1abaa48cdfa948744efba95a&chksm=9f8a90d3a8fd19c51ad9071de207ade8929d45071c7b9191acfea3d65cd3ff01b009aec303dd&scene=178&cur_album_id=1511180677537464321#rd)
* [C++来了，详细知识点思维导图！](https://mp.weixin.qq.com/s/0x_mWC7M0WhqJ03y1w6w2Q)
* [腾讯C++后台开发面试笔试知识点参考笔记](https://mp.weixin.qq.com/s/kdZVU4W7mEVGQKQgP64elw)
* [腾讯 C++ 笔试/面试题及答案](https://mp.weixin.qq.com/s/lX9mmmRecu2gw84xkInsww)
* [面试必备 | 常见C++笔试面试题整理](https://mp.weixin.qq.com/s/tpQTBlwAJTqxMe6krw9C_Q)
* [面试常问的 C/C++ 问题，你能答上来几个？](https://mp.weixin.qq.com/s/7hcT6HV7vx58PWHVO9Zmqw)
	* https://www.cnblogs.com/hjhgogo/p/9953506.html
* [重磅干货 | 五万字长文总结 C/C++ 知识（上）](https://mp.weixin.qq.com/s?__biz=MzA4MjI3NzQ1Nw==&mid=2247492098&idx=1&sn=e250dd4483b7d784ca91975b93fb25f3&chksm=9f8a873ca8fd0e2a53cc6b3f90f81198af01d4b8481b449f36387b7e798bef75e22d23608dce&scene=178&cur_album_id=1511180677537464321#rd)
* [重磅干货 | 五万字长文总结 C/C++ 知识（下）](https://mp.weixin.qq.com/s?__biz=MzA4MjI3NzQ1Nw==&mid=2247492170&idx=1&sn=c03b00547fbaee0da0217d8c4ec9a71d&chksm=9f8a8774a8fd0e62a4382eba643f8f60c6062b29a0f3add36f782e71177120ffac84e3b40337&scene=178&cur_album_id=1511180677537464321#rd)
* [C/C++ 易错点 56 条，干货收藏！](https://mp.weixin.qq.com/s/gO2fk25_TK4YDcNdcl676g)

## 编译内存相关

* #include “filename.h”和#include <filename.h>的区别
  * #include “filename.h”是指编译器将从当前工作目录上开始查找此文件
  * #include <filename.h>是指编译器将从标准库目录中开始查找此文件
* C++ 内存管理
  * C++ 内存分区：栈、堆、全局/静态存储区、常量存储区、代码区。
  * 栈：存放函数的局部变量、函数参数、返回地址等，由编译器自动分配和释放。
  * 堆：动态申请的内存空间，就是由 malloc 分配的内存块，由程序员控制它的分配和释放，如果程序执行结束还没有释放，操作系统会自动回收。
  * 全局区/静态存储区（.bss 段和 .data 段）：存放全局变量和静态变量，程序运行结束操作系统自动释放，在 C 语言中，未初始化的放在 .bss 段中，初始化的放在 .data 段中，C++ 中不再区分了。
  * 常量存储区（.rodata 段）：存放的是常量，不允许修改，程序运行结束自动释放。
  * 代码区（.text 段）：存放代码，不允许修改，但可以执行。编译后的二进制文件存放在这里。
  * 说明：
    * 从操作系统的本身来讲，以上存储区在内存中的分布是如下形式(从低地址到高地址)：.text 段 --> .data 段 --> .bss 段 --> 堆 --> unused --> 栈 --> env
* 变量的内存分区
  * [C/C++的四大内存分区 - CSDN博客](https://blog.csdn.net/K346K346/article/details/45592329)
* 对象创建限制在堆或栈
	* [如何定义一个只能在堆上（栈上）生成对象的类？](https://github.com/huihut/interview#%E5%A6%82%E4%BD%95%E5%AE%9A%E4%B9%89%E4%B8%80%E4%B8%AA%E5%8F%AA%E8%83%BD%E5%9C%A8%E5%A0%86%E4%B8%8A%E6%A0%88%E4%B8%8A%E7%94%9F%E6%88%90%E5%AF%B9%E8%B1%A1%E7%9A%84%E7%B1%BB)
	* 只能在堆上
		* 方法：将析构函数设置为私有
		* 原因：C++ 是静态绑定语言，编译器管理栈上对象的生命周期，编译器在为类对象分配栈空间时，会先检查类的析构函数的访问性。若析构函数不可访问，则不能在栈上创建对象。
	* 只能在栈上
		* 方法：将 new 和 delete 重载为私有
		* 原因：在堆上生成对象，使用 new 关键词操作，其过程分为两阶段：第一阶段，使用 new 在堆上寻找可用内存，分配给对象；第二阶段，调用构造函数生成对象。将 new 操作设置为私有，那么第一阶段就无法完成，就不能够在堆上生成对象。
* C structure，数据结构里有inter,char,float时，数据的内存布局会是怎样
  * 数据会以4位或是8位，16位等等方式对齐
* 为什么会有这种对齐
  * 这是因为机器寻址就是按照这种方式进行的，这样可以一次而不是多次读取一定数据
* [面试常考，项目易错！C/C++中的字节对齐 (qq.com)](https://mp.weixin.qq.com/s/F0QIjH-fMe7KP-CtlQVbHA)
* C pointer,指向数据结构与指向char的指针有区别吗
  * 它们正做+1运算时产生的位移不同
* delete数组指针，只delete第一个后果
  * 内存泄漏 

### [智能指针](https://github.com/haoran119/c-cpp/blob/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BC-C++/README.md#smart-pointers)

* [Move Semantics and Smart Pointers](https://www.learncpp.com/)
	* [M.1 — Intro to smart pointers and move semantics – Learn C++](https://www.learncpp.com/cpp-tutorial/intro-to-smart-pointers-move-semantics/)
	* [M.6 — std::unique_ptr – Learn C++](https://www.learncpp.com/cpp-tutorial/stdunique_ptr/)
	* [M.7 — std::shared_ptr – Learn C++](https://www.learncpp.com/cpp-tutorial/stdshared_ptr/)
	* [M.8 — Circular dependency issues with std::shared_ptr, and std::weak_ptr – Learn C++](https://www.learncpp.com/cpp-tutorial/circular-dependency-issues-with-stdshared_ptr-and-stdweak_ptr/)
	* [M.x — Chapter M comprehensive review – Learn C++](https://www.learncpp.com/cpp-tutorial/chapter-m-comprehensive-review/)
* 智能指针是为了解决动态内存分配时带来的内存泄漏以及多次释放同一块内存空间而提出的。C++11 中封装在了 \<memory\> 头文件中。
* C++11 中智能指针包括以下三种：
	* 共享指针（shared_ptr）：资源可以被多个指针共享，使用计数机制表明资源被几个指针共享。通过 use_count() 查看资源的所有者的个数，可以通过 unique_ptr、weak_ptr 来构造，调用 release() 释放资源的所有权，计数减一，当计数减为 0 时，会自动释放内存空间，从而避免了内存泄漏。
	* 独占指针（unique_ptr）：独享所有权的智能指针，资源只能被一个指针占有，该指针不能拷贝构造和赋值。但可以进行移动构造和移动赋值构造（调用 move() 函数），即一个 unique_ptr 对象赋值给另一个 unique_ptr 对象，可以通过该方法进行赋值。
	* 弱指针（weak_ptr）：指向 share_ptr 指向的对象，能够解决由shared_ptr带来的循环引用问题。
* 智能指针的实现原理： 计数原理。
* [智能指针_百度百科](http://baike.baidu.com/link?url=-4Fxt6pJdzfT54y9W-fRgMxlSYiedMOkLOxNlQf67rz_wHTOhIvtESgw6s8sEdgGMy2PxyNj0VUNe_IpaSBnbK)
	* 当类中有指针成员时，一般有两种方式来管理指针成员：一是采用值型的方式管理，每个类对象都保留一份指针指向的对象的拷贝；另一种更优雅的方式是使用智能指针，从而实现指针指向的对象的共享。
	* 智能指针(smart pointer)的一种通用实现技术是使用引用计数(reference count)。智能指针类将一个计数器与类指向的对象相关联，引用计数跟踪该类有多少个对象的指针指向同一对象。
	* 每次创建类的新对象时，初始化指针并将引用计数置为1；当对象作为另一对象的副本而创建时，拷贝构造函数拷贝指针并增加与之相应的引用计数；对一个对象进行赋值时，赋值操作符减少左操作数所指对象的引用计数（如果引用计数为减至0，则删除对象），并增加右操作数所指对象的引用计数；调用析构函数时，析构函数减少引用计数（如果引用计数减至0，则删除基础对象）。
	* 实现引用计数有两种经典策略：一是引入辅助类，二是使用句柄类。
	* 为了避免方案一中每个使用指针的类自己去控制引用计数，可以用一个类把指针封装起来。封装好后，这个类对象可以出现在用户类使用指针的任何地方，表现为一个指针的行为。我们可以像指针一样使用它，而不用担心普通成员指针所带来的问题，我们把这样的类叫句柄类。在封装句柄类时，需要申请一个动态分配的引用计数空间，指针与引用计数分开存储。
	* 智能指针是存储指向动态分配（堆）对象指针的类。除了能够在适当的时间自动删除指向的对象外，他们的工作机制很像C++的内置指针。智能指针在面对异常的时候格外有用，因为他们能够确保正确的销毁动态分配的对象。他们也可以用于跟踪被多用户共享的动态分配对象。
	* 事实上，智能指针能够做的还有很多事情，例如处理线程安全，提供写时复制，确保协议，并且提供远程交互服务。有能够为这些ESP (Extremely Smart Pointers)创建一般智能指针的方法，但是并没有涵盖进来。
	* 智能指针的大部分使用是用于生存期控制，阶段控制。它们使用operator->和operator*来生成原始指针，这样智能指针看上去就像一个普通指针。
	* 这样的一个类来自标准库：std::auto_ptr。它是为解决资源所有权问题设计的，但是缺少对引用数和数组的支持。并且，std::auto_ptr在被复制的时候会传输所有权。在大多数情况下，你需要更多的和/或者是不同的功能。这时就需要加入smart_ptr类。
* [智能指针（现代 C++）](https://msdn.microsoft.com/zh-cn/library/hh279674.aspx)
	* In modern C++ programming, the Standard Library includes smart pointers, which are used to help ensure that programs are free of memory and resource leaks and are exception-safe.
	* Smart pointers are defined in the std namespace in the \<memory\> header file. They are crucial to the RAII or Resource Acquisition Is Initialization programming idiom. The main goal of this idiom is to ensure that resource acquisition occurs at the same time that the object is initialized, so that all resources for the object are created and made ready in one line of code. In practical terms, the main principle of RAII is to give ownership of any heap-allocated resource—for example, dynamically-allocated memory or system object handles—to a stack-allocated object whose destructor contains the code to delete or free the resource and also any associated cleanup code.
	* In most cases, when you initialize a raw pointer or resource handle to point to an actual resource, pass the pointer to a smart pointer immediately. In modern C++, raw pointers are only used in small code blocks of limited scope, loops, or helper functions where performance is critical and there is no chance of confusion about ownership.
	* The C++ smart pointer idiom resembles object creation in languages such as C#: you create the object and then let the system take care of deleting it at the correct time. The difference is that no separate garbage collector runs in the background; memory is managed through the standard C++ scoping rules so that the runtime environment is faster and more efficient.
	* Important : Always create smart pointers on a separate line of code, never in a parameter list, so that a subtle resource leak won't occur due to certain parameter list allocation rules.
	* Use these smart pointers as a first choice for encapsulating pointers to plain old C++ objects (POCO).
	* unique_ptr
		* Allows exactly one owner of the underlying pointer. Use as the default choice for POCO unless you know for certain that you require a shared_ptr. Can be moved to a new owner, but not copied or shared. Replaces auto_ptr, which is deprecated. Compare to boost::scoped_ptr. unique_ptr is small and efficient; the size is one pointer and it supports rvalue references for fast insertion and retrieval from C++ Standard Library collections. Header file: \<memory\>. For more information, see [How to: Create and use unique_ptr instances | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-unique-ptr-instances?view=msvc-160) and [unique_ptr Class](https://docs.microsoft.com/en-us/cpp/standard-library/unique-ptr-class?view=msvc-160).
		* A unique_ptr does not share its pointer. It cannot be copied to another unique_ptr, passed by value to a function, or used in any C++ Standard Library algorithm that requires copies to be made. A unique_ptr can only be moved. This means that the ownership of the memory resource is transferred to another unique_ptr and the original unique_ptr no longer owns it. We recommend that you restrict an object to one owner, because multiple ownership adds complexity to the program logic. Therefore, when you need a smart pointer for a plain C++ object, use unique_ptr, and when you construct a unique_ptr, use the [make_unique](https://docs.microsoft.com/en-us/cpp/standard-library/memory-functions?view=msvc-160#make_unique) helper function.
	* shared_ptr
		* Reference-counted smart pointer. Use when you want to assign one raw pointer to multiple owners, for example, when you return a copy of a pointer from a container but want to keep the original. The raw pointer is not deleted until all shared_ptr owners have gone out of scope or have otherwise given up ownership. The size is two pointers; one for the object and one for the shared control block that contains the reference count. Header file: \<memory\>. For more information, see [How to: Create and use shared_ptr instances | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-shared-ptr-instances?view=msvc-160) and [shared_ptr Class](https://docs.microsoft.com/en-us/cpp/standard-library/shared-ptr-class?view=msvc-160).
			* Whenever possible, use the [make_shared](https://docs.microsoft.com/en-us/cpp/standard-library/memory-functions?view=msvc-160#make_shared) function to create a shared_ptr when the memory resource is created for the first time.
		* The shared_ptr type is a smart pointer in the C++ standard library that is designed for scenarios in which more than one owner might have to manage the lifetime of the object in memory. After you initialize a shared_ptr you can copy it, pass it by value in function arguments, and assign it to other shared_ptr instances. All the instances point to the same object, and share access to one "control block" that increments and decrements the reference count whenever a new shared_ptr is added, goes out of scope, or is reset. When the reference count reaches zero, the control block deletes the memory resource and itself.
	* weak_ptr
		* Special-case smart pointer for use in conjunction with shared_ptr. A weak_ptr provides access to an object that is owned by one or more shared_ptr instances, but does not participate in reference counting. Use when you want to observe an object, but do not require it to remain alive. Required in some cases to break circular references between shared_ptr instances. Header file: \<memory\>. For more information, see [How to: Create and use weak_ptr instances | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-weak-ptr-instances?view=msvc-160) and [weak_ptr Class](https://docs.microsoft.com/en-us/cpp/standard-library/weak-ptr-class?view=msvc-160).
		* Sometimes an object must store a way to access the underlying object of a shared_ptr without causing the reference count to be incremented. Typically, this situation occurs when you have cyclic references between shared_ptr instances.
		* The best design is to avoid shared ownership of pointers whenever you can. However, if you must have shared ownership of shared_ptr instances, avoid cyclic references between them. When cyclic references are unavoidable, or even preferable for some reason, use weak_ptr to give one or more of the owners a weak reference to another shared_ptr. By using a weak_ptr, you can create a shared_ptr that joins to an existing set of related instances, but only if the underlying memory resource is still valid. A weak_ptr itself does not participate in the reference counting, and therefore, it cannot prevent the reference count from going to zero. However, you can use a weak_ptr to try to obtain a new copy of the shared_ptr with which it was initialized. If the memory has already been deleted, the weak_ptr's bool operator returns false. If the memory is still valid, the new shared pointer increments the reference count and guarantees that the memory will be valid as long as the shared_ptr variable stays in scope.
* [Smart pointer - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Smart_pointer)
* [智能指针：从std::auto_ptr到std::unique_ptr - hanhuili的专栏 - 博客频道 - CSDN.NET](http://blog.csdn.net/hanhuili/article/details/8299912)
* [拥抱智能指针，告别内存泄露](https://mp.weixin.qq.com/s/evYOoS4_XfjkPXlDWXTnSg)
* [浅析 C++智能指针和 enable_shared_from_this 机制](https://mp.weixin.qq.com/s/a7Nl2jnbOtkfzEAK1TxVyA)

## 语言对比

* C++如何实现JAVA接口
  * [java接口_百度百科](http://baike.baidu.com/link?url=hoPdmBnxPUNPpyCRPD80NQVbOPS0qT5IoI1jezWUDT4Dz0MdgaVrPEurjtacqy6rJRZxO0CrQCNqDn5czUriNK)
  * [C++中的抽象类以及接口的区别联系_Linux编程_Linux公社-Linux系统门户网站](http://www.linuxidc.com/Linux/2012-10/73243.htm)

## 关键字库函数

* [size_t_百度百科](http://baike.baidu.com/link?url=sh8RRfasW1QG-PhcWPZhfcZ75Uw-KYLKh443jzpNg36hVk1Fu7WeTh4lEPLCuBx_iT0wglX5MRQUqXJMWV-oUK)
* static关键字至少有下列n个作用：
  * 函数体内static变量的作用范围为该函数体，不同于auto变量，该变量的内存只被分配一次，因此其值在下次调用时仍维持上次的值；
  * 在模块内的static全局变量可以被模块内所用函数访问，但不能被模块外其它函数访问；
  * 在模块内的static函数只可被这一模块内的其它函数调用，这个函数的使用范围被限制在声明它的模块内；
  * 在类中的static成员变量属于整个类所拥有，对类的所有对象只有一份拷贝；
  * 在类中的static成员函数属于整个类所拥有，这个函数不接收this指针，因而只能访问类的static成员变量。
* const关键字至少有下列n个作用：
  * 欲阻止一个变量被改变，可以使用const关键字。在定义该const变量时，通常需要对它进行初始化，因为以后就没有机会再去改变它了；
  * 对指针来说，可以指定指针本身为const，也可以指定指针所指的数据为const，或二者同时指定为const；
  * 在一个函数声明中，const可以修饰形参，表明它是一个输入参数，在函数内部不能改变其值；
  * 对于类的成员函数，若指定其为const类型，则表明其是一个常函数，不能修改类的成员变量；
  * 对于类的成员函数，有时候必须指定其返回值为const类型，以使得其返回值不为“左值”。
* 短小而被频繁调用的程序如何处理？
  * C语言用宏代替。
  * C++用inline，内联函数机制。
  * 内联函数可以得到宏的替换功能，所有可预见的状态和常规函数的类型检查。
* malloc / new operator / operator new的区别？
	* [malloc() vs new - GeeksforGeeks](https://www.geeksforgeeks.org/malloc-vs-new/)
	* [new vs operator new in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/new-vs-operator-new-in-cpp/)
	* [Difference between "new operator" and "operator new" in C++?](https://www.tutorialspoint.com/difference-between-new-operator-and-operator-new-in-cplusplus)

Item | malloc | new operator | operator new
-|-|-|-
Type|C function|operator and C++ keyword|C++ function to overload the new operator
Call constructor?|No|Yes|No but after returning the pointer from this overloaded method, the compiler calls the constructor
Return type|void*|exact data type|exact data type
Exception handling on failure|return NULL|throws bad_alloc exception|throws bad_alloc exception
Required size of memory|calculated manually|caculated by compiler|caculated by compiler

* [struct和union的区别](http://blog.csdn.net/firefly_2002/article/details/7954458)
  * 在存储多个成员信息时，编译器会自动给struct第个成员分配存储空间，struct可以存储多个成员信息，而union每个成员会用同一个存储空间，只能存储最后一个成员的信息。
  * 都是由多个不同的数据类型成员组成，但在任何同一时刻，Union只存放了一个被先选中的成员，而结构体的所有成员都存在。
  * 对于Union的不同成员赋值，将会对其他成员重写，原来成员的值就不存在了，而对于struct的不同成员赋值是互不影响的。
* struct和class的区别
  * [Access Control and Constraints of Structures, Classes and Unions](https://msdn.microsoft.com/en-us/library/4a1hcx0y.aspx)

|Structures|Classes|Unions|
| - | - | - |
|class key is struct|class key is class|class key is union|
|Default access is public|	Default access is private|	Default access is public
|No usage constraints|	No usage constraints|	Use only one member at a time
|Default inheritance is public	|Default inheritance is private	|-
|[not type-parameter-key in Template](https://stackoverflow.com/questions/2520130/why-are-structs-not-allowed-in-template-definitions)	|type-parameter-key in Template	|-

* [volatile](https://github.com/haoran119/c-cpp/blob/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BC-C++/README.md#const-type-qualifier)
  * [volatile_百度百科](http://baike.baidu.com/link?url=gPm-SmXKapujjcPjO3COGYDPSvH4VPOMabuV61XG7kM1kMhwX1AnNxF5_VZDiq7fizEaEfpYKLRBVgRt99BxOK)
  	* volatile是一个特征修饰符（type specifier）.volatile的作用是作为指令关键字，确保本条指令不会因编译器的优化而省略，且要求每次直接读值。
  	* volatile的变量是说这变量可能会被意想不到地改变，这样，编译器就不会去假设这个变量的值了。
  	* 简单地说就是防止编译器对代码进行优化。
  	* 精确地说就是，编译器在用到这个变量时必须每次都小心地重新读取这个变量的值，而不是使用保存在寄存器里的备份。

## 面向对象

* 面向对象的三大特性：
  * `封装(Encapsulation)`：将具体的实现过程和数据封装成一个函数，只能通过接口进行访问，降低耦合性。
  * `继承(Inheritance)`：子类继承父类的特征和行为，子类有父类的非 private 方法或成员变量，子类可以对父类的方法进行重写，增强了类之间的耦合性，但是当父类中的成员变量、成员函数或者类本身被 final 关键字修饰时，修饰的类不能继承，修饰的成员不能重写或修改。
  * `多态(Polymorphism)`：多态就是不同继承类的对象，对同一消息做出不同的响应，基类的指针指向或绑定到派生类的对象，使得基类指针呈现不同的表现方式。
* 重载、重写、隐藏的区别
  * `重载(Overload)`：是指同一可访问区内被声明几个具有不同参数列（参数的类型、个数、顺序）的同名函数，根据参数列表确定调用哪个函数，重载不关心函数返回类型。
  * `隐藏(Overwrite / Hide)`：是指派生类的函数屏蔽了与其同名的基类函数，主要只要同名函数，不管参数列表是否相同，基类函数都会被隐藏。
  * `重写(覆盖)(Override)`：是指派生类中存在重新定义的函数。函数名、参数列表、返回值类型都必须同基类中被重写的函数一致，只有函数体不同。派生类调用时会调用派生类的重写函数，不会调用被重写函数。重写的基类中被重写的函数必须有 virtual 修饰。
  * 重写和重载的区别：
    * 范围区别：对于类中函数的重载或者重写而言，重载发生在同一个类的内部，重写发生在不同的类之间（子类和父类之间）。
    * 参数区别：重载的函数需要与原函数有相同的函数名、不同的参数列表，不关注函数的返回值类型；重写的函数的函数名、参数列表和返回值类型都需要和原函数相同，父类中被重写的函数需要有 virtual 修饰。
    * virtual 关键字：重写的函数基类中必须有 virtual关键字的修饰，重载的函数可以有 virtual 关键字的修饰也可以没有。
  * 隐藏和重写，重载的区别：
    * 范围区别：隐藏与重载范围不同，隐藏发生在不同类中。
    * 参数区别：隐藏函数和被隐藏函数参数列表可以相同，也可以不同，但函数名一定相同；当参数不同时，无论基类中的函数是否被 virtual 修饰，基类函数都是被隐藏，而不是重写。
* C++虚拟机制
  * 用来实现多态

### 多重继承

* 可以为一个派生类指定多个基类，这样的继承结构称为`多重继承`或`多继承`
* Java/C#中没有多继承，C++中也应避免使用
* 当两个父类有同样的成员时会带来模糊性，这样导致了名称冲突(name collision)，在编译时将予以拒绝，也称之为`菱形继承`
* 可以在方法前说明基类，或者用虚继承来解决菱形继承问题
* [多重继承 - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E5%A4%9A%E9%87%8D%E7%BB%A7%E6%89%BF)
	* 多重继承可以导致某些令人混淆的情况，所以关于它的好处与风险之间孰轻孰重常常受人争论。Java使用了一个折衷的办法：Java允许一个类别继承自多于一个父接口（可以指定某一个类别，它继承了所有父类的类型，并必须拥有所有父类接口的外部可见方法的具体实现，并允许编译器强制以上要求），但只可以从一个父类继承实现（方法与数据）。微软的.NET编程语言，例如C#和Visual Basic .NET也使用了这种接口的做法。
* [Multiple inheritance - Wikipedia](https://en.wikipedia.org/wiki/Multiple_inheritance)
	* Multiple inheritance has been a controversial issue for many years, with opponents pointing to its increased complexity and ambiguity in situations such as the "diamond problem", where it may be ambiguous as to which parent class a particular feature is inherited from if more than one parent class implements same feature. This can be addressed in various ways, including using virtual inheritance. Alternate methods of object composition not based on inheritance such as mixins and traits have also been proposed to address the ambiguity.
	* The "diamond problem" (sometimes referred to as the "Deadly Diamond of Death") is an ambiguity that arises when two classes B and C inherit from A, and class D inherits from both B and C. If there is a method in A that B and C have overridden, and D does not override it, then which version of the method does D inherit: that of B, or that of C?
	* For example, in the context of GUI software development, a class Button may inherit from both classes Rectangle (for appearance) and Clickable (for functionality/input handling), and classes Rectangle and Clickable both inherit from the Object class. Now if the equals method is called for a Button object and there is no such method in the Button class but there is an overridden equals method in Rectangle or Clickable (or both), which method should be eventually called?
	* It is called the "diamond problem" because of the shape of the class inheritance diagram in this situation. In this case, class A is at the top, both B and C separately beneath it, and D joins the two together at the bottom to form a diamond shape.
	* Languages have different ways of dealing with these problems of repeated inheritance.
		* C++ by default follows each inheritance path separately, so a D object would actually contain two separate A objects, and uses of A's members have to be properly qualified. If the inheritance from A to B and the inheritance from A to C are both marked "virtual" (for example, "class B : virtual public A"), C++ takes special care to only create one A object, and uses of A's members work correctly. If virtual inheritance and nonvirtual inheritance are mixed, there is a single virtual A, and a nonvirtual A for each nonvirtual inheritance path to A. C++ requires stating explicitly which parent class the feature to be used is invoked from i.e. Worker::Human.Age. C++ does not support explicit repeated inheritance since there would be no way to qualify which superclass to use (i.e. having a class appear more than once in a single derivation list [class Dog : public Animal, Animal]). C++ also allows a single instance of the multiple class to be created via the virtual inheritance mechanism (i.e. Worker::Human and Musician::Human will reference the same object).
		* Java 8 introduces default methods on interfaces. If A,B,C are interfaces, B,C can each provide a different implementation to an abstract method of A, causing the diamond problem. Either class D must reimplement the method (the body of which can simply forward the call to one of the super implementations), or the ambiguity will be rejected as a compile error. Prior to Java 8, Java was not subject to the Diamond problem risk, because it did not support multiple inheritance and interface default methods were not available.
		* Python has the same structure as Perl, but, unlike Perl, includes it in the syntax of the language. The order of inheritance affects the class semantics. Python had to deal with this upon the introduction of new-style classes, all of which have a common ancestor, object. Python creates a list of classes using the C3 linearization (or Method Resolution Order (MRO)) algorithm. That algorithm enforces two constraints: children precede their parents and if a class inherits from multiple classes, they are kept in the order specified in the tuple of base classes (however in this case, some classes high in the inheritance graph may precede classes lower in the graph). Thus, the method resolution order is: D, B, C, A.
	* Nevertheless, even when several interfaces declare the same method signature, as soon as that method is implemented (defined) anywhere in the inheritance chain, it overrides any implementation of that method in the chain above it (in its superclasses). Hence, at any given level in the inheritance chain, there can be at most one implementation of any method. Thus, single-inheritance method implementation does not exhibit the Diamond Problem even with multiple-inheritance of interfaces. With the introduction of default implementation for interfaces in Java 8 and C# 8, it is still possible to generate a Diamond Problem, although this will only appear as a compile-time error.

### 虚继承

* [虚继承 - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E8%99%9A%E7%BB%A7%E6%89%BF)
	* `虚继承` 是面向对象编程中的一种技术，是指一个指定的基类，在继承体系结构中，将其成员数据实例共享给也从这个基类型直接或间接派生的其它类。
	* 举例来说：假如类A和类B各自从类X派生（非虚继承且假设类X包含一些数据成员），且类C同时多继承自类A和B，那么C的对象就会拥有两套X的实例数据（可分别独立访问，一般要用适当的消歧义限定符）。但是如果类A与B各自虚继承了类X，那么C的对象就只包含一套类X的实例数据。对于这一概念典型实现的编程语言是C++。
	* 这一特性在多重继承应用中非常有用，可以使得虚基类对于由它直接或间接派生的类来说，拥有一个共同的基类对象实例。避免由于带有歧义的组合而产生的问题（如“菱形继承问题”）。其原理是，间接派生类（C）穿透了其父类（上面例子中的A与B），实质上直接继承了虚基类X。
	* 这一概念一般用于“继承”在表现为一个整体，而非几个部分的组合时。在C++中，基类可以通过使用关键字`virtual`来声明虚继承关系。
	* `虚基类的初始化`
		* 由于虚基类是多个派生类共享的基类，因此由谁来初始化虚基类必须明确。C++标准规定，由最派生类直接初始化虚基类。因此，对间接继承了虚基类的类，也必须能直接访问其虚继承来的祖先类，也即应知道其虚继承来的祖先类的地址偏移值。
		* 例如，常见的“菱形”虚继承例子中，两个派生类、一个最派生类的构造函数的初始化列表中都可以给出虚基类的初始化；但只由最派生类的构造函数实际执行虚基类的初始化。
	* 虚继承的应用：不可派生的finally类
		* 一个类如果不希望被继承，类似于Java中的具有finally性质的类，这在C++中可以用虚继承来实现：
    ```c++
    template<typename T> class MakeFinally{
        private:
            MakeFinally(){};//只有MakeFinally的友类才可以构造MakeFinally
            ~MakeFinally(){};
        friend T;
    };

    class MyClass:public virtual  MakeFinally<MyClass>{};//MyClass是不可派生类

    //由于虚继承，所以D要直接负责构造MakeFinally类，从而导致编译报错，所以D作为派生类是不合法的。
    class D: public MyClass{};
    //另外，如果D类没有实例化对象，即没有被使用，实际上D类是被编译器忽略掉而不报错

    int main()
    {
        MyClass var1;
        // D var2;  //这一行编译将导致错误，因为D类的默认构造函数不合法
    }
    ```
* [Virtual inheritance - Wikipedia](https://en.wikipedia.org/wiki/Virtual_inheritance)
	* This example to illustrates a case where base class A has a constructor variable msg and an additional ancestor E is derived from grandchild class D.
	* Here, A must be constructed in both D and E. Further, inspection of the variable msg illustrates the how class A becomes a direct base class of its deriving class, as opposed to a base class of any intermediate deriving classed between A and the final deriving class.
    ```c++
    #include <string>
    #include <iostream>

    class A {
        private:
            std::string _msg;
        public:
            A(std::string x): _msg(x) {}
            void test(){ std::cout<<"hello from A: "<<_msg <<"\n"; }
    };

    // B,C inherit A virtually
    class B: virtual public A   { public: B(std::string x):A("b"){}  };
    class C: virtual public A   { public: C(std::string x):A("c"){}  };

    // since B,C inherit A virtually, A must be constructed in each child
    class D: public         B,C { public: D(std::string x):A("d_a"),B("d_b"),C("d_c"){}  };
    class E: public         D   { public: E(std::string x):A("e_a"),D("e_d"){}  };

    // breaks without constructing A
    // class D: public         B,C { public: D(std::string x):B(x),C(x){}  };

    // breaks without constructing A
    //class E: public         D   { public: E(std::string x):D(x){}  };

    int main(int argc, char ** argv)
    {
        D d("d");
        d.test(); // hello from A: d_a

        E e("e");
        e.test(); // hello from A: e_a
    }    
    ```
* `虚继承`用于解决`多继承`条件下的`菱形继承`问题（浪费存储空间、存在二义性）。
* 底层实现原理与编译器相关，一般通过`虚基类指针`和`虚基类表`实现，每个虚继承的子类都有一个虚基类指针（占用一个指针的存储空间，4字节）和虚基类表（不占用类对象的存储空间）（需要强调的是，虚基类依旧会在子类里面存在拷贝，只是仅仅最多存在一份而已，并不是不在子类里面了）；当虚继承的子类被当做父类继承时，虚基类指针也会被继承。
* 实际上，vbptr 指的是`虚基类表指针（virtual base table pointer）`，该指针指向了一个`虚基类表（virtual table）`，虚表中记录了虚基类与本类的偏移地址；通过偏移地址，这样就找到了虚基类成员，而虚继承也不用像普通多继承那样维持着公共基类（虚基类）的两份同样的拷贝，节省了存储空间。

### 菱形继承

* The `diamond problem` (sometimes referred to as the "Deadly Diamond of Death") is an ambiguity that arises when two classes B and C inherit from A, and class D inherits from both B and C. If there is a method in A that B and C have overridden, and D does not override it, then which version of the method does D inherit: that of B, or that of C?
* [关于C++中菱形继承的解释和处理](https://mp.weixin.qq.com/s/OBSTK3kvjvqEpbmj8vXzpQ)
	* 派生类继承父类，同时也会继承父类中的所有成员副本，但如果在继承时一个基类同时被两个子类继承，然后一个新类又分别由上面的两个子类派生出来。这样从某种程度来说就形成了C++中的菱形继承，也可以叫做钻石继承
```c++
#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun() { cout << "A::fun()" << endl; }
};

class B : public A
{
public:
    virtual void fun() { cout << "B::fun()" << endl; }
};

class C : public A
{
public:
    virtual void fun() { cout << "C::fun()" << endl; }
};

// Two classes virtually inheriting A
class BB : virtual public A
{
public:
    virtual void fun() { cout << "BB::fun()" << endl; }
};

class CC : virtual public A
{
public:
    virtual void fun() { cout << "CC::fun()" << endl; }
};

class D : public B, public C
{
public:
    void fun() { cout << "D::fun()" << endl; }
};

// class DD : public BB, public CC // Compile error : virtual function 'A::fun' has more than one final overrider in 'DD'
// {
// };

class DDD : public BB, public CC
{
public:
    void fun() { cout << "DDD::fun()" << endl; }
};

int main()
{
    // A *p1 = new D(); // Compile error : ambiguous conversion from derived class 'D' to base class 'A'

    // A *pDD = new DD(); // Compile error : cannot initialize a variable of type 'A *' with an rvalue of type 'DD *'

    A *pDDD = new DDD();
    pDDD->fun();  // DDD::fun() 调用派生类中的虚函数

    DDD ddd;
    A &a = ddd;
    a.fun();    // DDD::fun() 调用派生类中的虚函数

    return 0;
}
```

### 多态

* [多态 (计算机科学) - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E5%A4%9A%E6%80%81_(%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%A7%91%E5%AD%A6))
* [Polymorphism (computer science) - Wikipedia](https://en.wikipedia.org/wiki/Polymorphism_(computer_science))
	* 在编程语言和类型论中，多态（英语：polymorphism）指为不同数据类型的实体提供统一的接口，或使用一个单一的符号来表示多个不同的类型。
	* 多态的最常见主要类别有：
		* 特设多态(Ad hoc polymorphism)：为个体的特定类型的任意集合定义一个共同接口。
		* 参数多态(Parametric polymorphism)：指定一个或多个类型不靠名字而是靠可以标识任何类型的抽象符号。
		* 子类型(Subtyping)（也叫做子类型多态或包含多态）：一个名字指称很多不同的类的实例，这些类有某个共同的超类。
	* “特设多态”来指称一个多态函数可以应用于有不同类型的实际参数上，但是以来它们所应用到的实际参数类型而有不同的表现（也叫做为函数重载或运算符重载）
	* 参数多态允许函数或数据类型被一般性的书写，从而它可以“统一”的处理值而不用依赖于它们的类型。参数多态是使语言更加有表现力而仍维持完全的静态类型安全的一种方式。这种函数和数据类型被分别称为“泛化函数”和“泛化数据类型”从而形成了泛型编程的基础。
	* 子类型
		* 在面向对象程序设计中，计算机程序运行时，相同的消息可能会送给多个不同的类别之对象，而系统可依据对象所属类别，引发对应类别的方法，而有不同的行为。简单来说，所谓多态意指相同的消息给予不同的对象会引发不同的动作。比如有动物之类别，而且由动物继承出类别猫和类别狗，并对同一源自类别动物（父类）之一消息有不同的响应，如类别动物有“叫”之动作，而类别猫会“喵喵”，类别狗则会“汪汪”，则称之为多态。
		* 多态可分为变量多态与函数多态。变量多态是指：基类型的变量（对于C++是引用或指针）可以被赋值基类型对象，也可以被赋值派生类型的对象。函数多态是指，相同的函数调用界面（函数名与实参表），传送给一个对象变量，可以有不同的行为，这视该对象变量所指向的对象类型而定。多态也可定义为“一种将不同的特殊行为和单个泛化记号相关联的能力”，变量多态是函数多态的基础。
	* 依据实现时做出的选择，多态可分为：
		* `动态多态（dynamic polymorphism）`:生效于运行期。
		* `静态多态（static polymorphism）`：将不同的特殊行为和单个泛化记号相关联，由于这种关联处理于编译期而非运行期，因此被称为“静态”。可以用来实现类型安全、运行高效的同质对象集合操作。C++ STL不采用动态多态来实现就是个例子。
	* 对于C++语言，带变量的宏和函数重载机制也允许将不同的特殊行为和单个泛化记号相关联。然而，习惯上并不将这种函数多态、宏多态展现出来的行为称为多态（或静态多态），否则就连C语言也具有宏多态了。谈及多态时，默认就是指动态多态，而静态多态则是指基于模板的多态。
* 什么是多态？多态如何实现？
	* `多态`：多态就是不同继承类的对象，对同一消息做出不同的响应，基类的指针指向或绑定到派生类的对象，使得基类指针呈现不同的表现方式。在基类的函数前加上`virtual`关键字，在派生类中重写该函数，运行时将会根据对象的实际类型来调用相应的函数。如果对象类型是派生类，就调用派生类的函数；如果对象类型是基类，就调用基类的函数。
	* 实现方法：多态是通过`虚函数`实现的，虚函数的地址保存在`虚函数表`中，虚函数表的地址保存在含有虚函数的类的实例对象的内存空间中。
	* 实现过程：
		* 在类中用 virtual 关键字声明的函数叫做虚函数；
		* 存在虚函数的类都有一个虚函数表，当创建一个该类的对象时，该对象有一个指向虚函数表的虚表指针（虚函数表和类对应的，虚表指针是和对象对应）；
		* 当基类指针指向派生类对象，基类指针调用虚函数时，基类指针指向派生类的虚表指针，由于该虚表指针指向派生类虚函数表，通过遍历虚表，寻找相应的虚函数。
* [C++编译期多态与运行期多态](https://mp.weixin.qq.com/s/Xyo97HNDaelUy6F8aiMwIA)
	* https://www.cnblogs.com/QG-whz/p/5132745.html
	* 在面向对象C++编程中，`多态`是OO三大特性之一，这种多态称为`运行期多态`，也称为`动态多态`；在泛型编程中，多态基于template(模板)的具现化与函数的重载解析，这种多态在编译期进行，因此称为`编译期多态`或`静态多态`。
	* 运行期多态
	    * 运行期多态的设计思想要归结到类继承体系的设计上去。对于有相关功能的对象集合，我们总希望能够抽象出它们共有的功能集合，在基类中将这些功能声明为虚接口（虚函数），然后由子类继承基类去重写这些虚接口，以实现子类特有的具体功能。典型的我们会举下面这个例子：
	    * 运行期多态通过虚函数发生于运行期
        ```c++
        class Animal
        {
        public :
            virtual void shout() = 0;
        };
        class Dog :public Animal
        {
        public:
            virtual void shout(){ cout << "汪汪！"<<endl; }
        };
        class Cat :public Animal
        {
        public:
            virtual void shout(){ cout << "喵喵~"<<endl; }
        };
        class Bird : public Animal
        {
        public:
            virtual void shout(){ cout << "叽喳!"<<endl; }
        };

        int main()
        {
            Animal * anim1 = new Dog;
            Animal * anim2 = new Cat;
            Animal * anim3 = new Bird;

           //藉由指针（或引用）调用的接口，在运行期确定指针（或引用）所指对象的真正类型，调用该类型对应的接口
            anim1->shout();
            anim2->shout();
            anim3->shout();

            //delete 对象
            ...
           return 0;
        }
        ```
    * 编译期多态
        * 对模板参数而言，多态是通过模板具现化和函数重载解析实现的。以不同的模板参数具现化导致调用不同的函数，这就是所谓的编译期多态。
        * 相比较于运行期多态，实现编译期多态的类之间并不需要成为一个继承体系，它们之间可以没有什么关系，但约束是它们都有相同的隐式接口。我们将上面的例子改写为:
        * 在编译之前，函数模板中t.shout()调用的是哪个接口并不确定。在编译期间，编译器推断出模板参数，因此确定调用的shout是哪个具体类型的接口。不同的推断结果调用不同的函数，这就是编译器多态。这类似于重载函数在编译器进行推导，以确定哪一个函数被调用。
        ```c++
        class Animal
        {
        public :
            void shout() { cout << "发出动物的叫声" << endl; };
        };
        class Dog
        {
        public:
            void shout(){ cout << "汪汪！"<<endl; }
        };
        class Cat
        {
        public:
            void shout(){ cout << "喵喵~"<<endl; }
        };
        class Bird
        {
        public:
            void shout(){ cout << "叽喳!"<<endl; }
        };
        template <typename T>
        void  animalShout(T & t)
        {
            t.shout();
        }
        int main()
        {
            Animal anim;
            Dog dog;
            Cat cat;
            Bird bird;

            animalShout(anim);
            animalShout(dog);
            animalShout(cat);
            animalShout(bird);

            getchar();
        }
        ```
    * 运行期多态与编译期多态优缺点分析
        * 运行期多态优点
            * OO设计中重要的特性，对客观世界直觉认识。
            * 能够处理同一个继承体系下的异质类集合。
        * 运行期多态缺点
            * 运行期间进行虚函数绑定，提高了程序运行开销。
            * 庞大的类继承层次，对接口的修改易影响类继承层次。
            * 由于虚函数在运行期在确定，所以编译器无法对虚函数进行优化。
            * 虚表指针增大了对象体积，类也多了一张虚函数表，当然，这是理所应当值得付出的资源消耗，列为缺点有点勉强。
        * 编译期多态优点
            * 它带来了泛型编程的概念，使得C++拥有泛型编程与STL这样的强大武器。
            * 在编译器完成多态，提高运行期效率。
            * 具有很强的适配性与松耦合性，对于特殊类型可由模板偏特化、全特化来处理。
        * 编译期多态缺点
            * 程序可读性降低，代码调试带来困难。
            * 无法实现模板的分离编译，当工程很大时，编译时间不可小觑。
            * 无法处理异质对象集合。
    * 关于显式接口与隐式接口
        * 所谓的显式接口是指类继承层次中定义的接口或是某个具体类提供的接口，总而言之，我们能够在源代码中找到这个接口.显式接口以函数签名为中心，例如
            ```c++
            void AnimalShot(Animal & anim)
            {
                anim.shout();
            }
            ```
        * 我们称shout为一个显式接口。在运行期多态中的接口皆为显式接口。
        * 而对模板参数而言，接口是隐式的，奠基于有效表达式。例如：
            ```c++
            template <typename T>
            void AnimalShot(T & anim)
            {
                anim.shout();
            }
            ```
        * 对于anim来说，必须支持哪一种接口，要由模板参数执行于anim身上的操作来决定，在上面这个例子中，T必须支持shout()操作，那么shout就是T的一个隐式接口。

## 类相关

* 虚函数
  * [虚函数 - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E8%99%9A%E5%87%BD%E6%95%B0)
  * 在面向对象程序设计领域，C++、Object Pascal 等语言中有虚函数（英语：virtual function）或虚方法（英语：virtual method）的概念。这种函数或方法可以被子类继承和覆盖，通常使用动态分派实现。这一概念是面向对象程序设计中（运行时）多态的重要组成部分。简言之，虚函数可以给出目标函数的定义，但该目标的具体指向在编译期可能无法确定。
  * 虚函数在设计模式方面扮演重要角色。例如，《设计模式》一书中提到的23种设计模式中，仅5个对象创建模式就有4个用到了虚函数（抽象工厂、工厂方法、生成器、原型），只有单例没有用到。
  * 虚函数概念的引入可以解决这样的问题：
    * 在面向对象程序设计中，派生类继承自基类。使用指针或引用访问派生类对象时，指针或引用本身所指向的类型是基类而不是派生类。如果派生类覆盖了基类中的方法，通过上述指针或引用调用该方法时，可以有两种结果：
      * 调用到基类的方法：编译器根据指针或引用的类型决定，称作“早绑定”；
      * 调用到派生类的方法：语言的运行时系统根据对象的实际类型决定，称作“迟绑定”。
    * 虚函数的效果属于后者。如果问题中基类的函数是“虚”的，则调用到的都是最终派生类（英语：most-derived class）中的函数实现，与指针或引用的类型无关。反之，如果函数非“虚”，调用到的函数就在编译期根据指针或者引用所指向的类型决定。
    * 有了虚函数，程序甚至能够调用编译期还不存在的函数。
    * 在 C++ 中，在基类的成员函数声明前加上关键字 virtual 即可让该函数成为 虚函数，派生类中对此函数的不同实现都会继承这一修饰符，允许后续派生类覆盖，达到迟绑定的效果。即便是基类中的成员函数调用虚函数，也会调用到派生类中的版本。
  ```c++
  # include <iostream>
  # include <vector>

  using namespace std;
  class Animal
  {
  public:
      // void eat() const { cout << "I eat like a generic Animal." << endl; }
      // ~Animal() {}
      virtual void eat() const { cout << "I eat like a generic Animal." << endl; }
      virtual ~Animal() {}
  };

  class Wolf : public Animal
  {
  public:
      void eat() const { cout << "I eat like a wolf!" << endl; }
  };

  class Fish : public Animal
  {
  public:
      void eat() const { cout << "I eat like a fish!" << endl; }
  };

  class GoldFish : public Fish
  {
  public:
      void eat() const { cout << "I eat like a goldfish!" << endl; }
  };


  class OtherAnimal : public Animal
  {
  };

  int main()
  {
      std::vector<Animal*> animals;
      animals.push_back( new Animal() );
      animals.push_back( new Wolf() );
      animals.push_back( new Fish() );
      animals.push_back( new GoldFish() );
      animals.push_back( new OtherAnimal() );

      /*
      以下是虚函数 Animal::eat() 的输出：
      I eat like a generic Animal.
      I eat like a wolf!
      I eat like a fish!
      I eat like a goldfish!
      I eat like a generic Animal.

      当 Animal::eat() 不是被宣告为虚函数时，输出如下所示：
      I eat like a generic Animal.
      I eat like a generic Animal.
      I eat like a generic Animal.
      I eat like a generic Animal.
      I eat like a generic Animal.
      */
      for( std::vector<Animal*>::const_iterator it = animals.begin();
         it != animals.end(); ++it)
      {
          (*it)->eat();
          delete *it;
      }

     return 0;
  }   
  ```
  * 在Java语言中, 所有的方法默认都是"虚函数". 只有以关键字 final 标记的方法才是非虚函数.
  * 在 C# 语言中, 对基类中的任何虚方法必须用 virtual 修饰, 而派生类中由基类继承而来的重载方法必须用 override 修饰.
  * 抽象类和纯虚函数
    * 纯虚函数或纯虚方法是一个需要被非抽象的派生类覆盖（override）的虚函数. 包含纯虚方法的类被称作抽象类; 抽象类不能被直接实例化。 一个抽象基类的一个子类只有在所有的纯虚函数在该类(或其父类)内给出实现时, 才能直接实例化. 纯虚方法通常只有声明(签名)而没有定义(实现)，但有特例情形要求纯虚函数必须给出函数体定义.
    * 虽然纯虚方法通常在定义它的类中没有实现, 在 C++ 语言中, 允许纯虚函数在定义它的类中包含其实现, 这为派生类提供了备用或默认的行为. C++的虚基类的虚析构函数必须提供函数体定义，否则链接时（linking）在析构该抽象类的派生实例对象的语句处会报错。
    * 在C++语言中, 纯虚函数用一种特别的语法[=0]定义（但 VS 也支持 abstract 关键字：virtual ReturnType Function()abstract;）
    * 纯虚函数的定义仅提供方法的原型. 虽然在抽象类中通常不提供纯虚函数的实现, 但是抽象类中可以包含其实现, 而且可以不在声明的同时给出定义[2]. 每个非抽象子类仍然需要重载该方法, 抽象类中实现的调用可以采用以下这种形式:
  ```c++
  class Abstract {
  public:
      virtual void pure_virtual() = 0;
  };

  void Abstract::pure_virtual() {
      // do something
   }

   class Child : public Abstract {
       virtual void pure_virtual(); // no longer abstract, this class may be instantiated.
   };

   void Child::pure_virtual() {
       Abstract::pure_virtual(); // the implementation in the abstract class is executed
   }   
  ```
  * [Virtual function - Wikipedia](https://en.wikipedia.org/wiki/Virtual_function)
    * Behavior during construction and destruction
      * Languages differ in their behavior while the constructor or destructor of an object is running. For this reason, calling virtual functions in constructors is generally discouraged.
      * In C++, the "base" function is called. Specifically, the most derived function that is not more derived than the current constructor's class is called. If that function is a pure virtual function, then undefined behavior occurs. This is true even if the class contains an implementation for that pure virtual function. A conforming C++ implementation is not required (and generally not able) to detect indirect calls to pure virtual functions at compile time or link time. Some runtime systems will issue a pure virtual function call error when encountering a call to a pure virtual function at run time.
      * In Java and C#, the derived implementation is called, but some fields are not yet initialized by the derived constructor (although they are initialized to their default zero values). Some design patterns, such as the Abstract Factory Pattern, actively promote this usage in languages supporting this ability.
    * Virtual destructors
      * Object-oriented languages typically manage memory allocation and de-allocation automatically when objects are created and destroyed. However, some object-oriented languages allow a custom destructor method to be implemented, if desired. If the language in question uses automatic memory management, the custom destructor (generally called a finalizer in this context) that is called is certain to be the appropriate one for the object in question. For example, if an object of type Wolf that inherits Animal is created, and both have custom destructors, the one called will be the one declared in Wolf.
      * In manual memory management contexts, the situation can be more complex, particularly in relation to static dispatch. If an object of type Wolf is created but pointed to by an Animal pointer, and it is this Animal pointer type that is deleted, the destructor called may actually be the one defined for Animal and not the one for Wolf, unless the destructor is virtual. This is particularly the case with C++, where the behavior is a common source of programming errors if destructors are not virtual.
  * 如果使用虚函数，父类指针指向子类对象并调用对象方法时，使用的是子类的方法;
  * 如果未使用虚函数，则是普通的重写，则父类指针指向子类对象时，使用的是父类的方法（与指针类型看齐）
  * 可以将派生类的对象赋值给基类的指针或引用，反之不可
  * 普通函数（非类成员函数）不能是虚函数
  * 静态函数（static）不能是虚函数
  * 构造函数不能是虚函数（因为在调用构造函数时，虚表指针并没有在对象的内存空间中，必须要构造函数调用完成后才会形成虚表指针）
  * 内联函数不能是表现多态性时的虚函数，解释见：[虚函数（virtual）可以是内联函数（inline）吗？](https://github.com/huihut/interview#%E8%99%9A%E5%87%BD%E6%95%B0virtual%E5%8F%AF%E4%BB%A5%E6%98%AF%E5%86%85%E8%81%94%E5%87%BD%E6%95%B0inline%E5%90%97)
* Virtual：
  * 虚函数：派生类可以覆盖掉的函数，
  * 纯虚函数：只是个空函数，没有函数实现体。
* 抽象类：含有纯虚函数的类
* 抽象类能被实例化吗
  * 不能，只能继承抽象类，实现抽象类的函数
* 接口类：仅含有纯虚函数的抽象类
* 虚析构函数
  * [虚析构函数_百度百科](https://baike.baidu.com/item/虚析构函数)
    * 虚析构函数是为了解决基类的指针指向派生类对象，并用基类的指针删除派生类对象。
    * 如果某个类不包含虚函数，那一般是表示它将不作为一个基类来使用。当一个类不准备作为基类使用时，使析构函数为虚一般是个坏主意。因为它会为类增加一个虚函数表，使得对象的体积翻倍，还有可能降低其可移植性
    * 所以基本的一条是：无故的声明虚析构函数和永远不去声明一样是错误的。实际上，很多人这样总结：当且仅当类里包含至少一个虚函数的时候才去声明虚析构函数。抽象类是准备被用做基类的，基类必须要有一个虚析构函数，纯虚函数会产生抽象类，所以方法很简单：在想要成为抽象类的类里声明一个纯虚析构函数。
  * 析构函数定义成虚函数是为了防止内存泄漏，因为当基类的指针或者引用指向或绑定到派生类的对象时，如果未将基类的析构函数定义成虚函数，会调用基类的析构函数，那么只能将基类的成员所占的空间释放掉，派生类中特有的就会无法释放内存空间导致内存泄漏。
* 什么是拷贝构造函数?
  * 它是单个参数的构造函数，其参数是与它同属一类的对象的(常)引用；类定义中，如果未提供自己的拷贝构造函数，C++提供一个默认拷贝构造函数，该默认拷贝构造函数完成一个成员到一个成员的拷贝
* 要在C++防止对象被复制，有什么方法
  * [Explicitly Defaulted and Deleted Functions | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/explicitly-defaulted-and-deleted-functions?view=msvc-160)
  * Pre-C++11 定义一个基类，将其中的拷贝构造函数和赋值构造函数声明为私有private
  * C++11则可以对拷贝构造函数和赋值构造函数声明为delete
  * 派生类以私有private的方式继承基类
* 什么是深浅拷贝?
  * 浅拷贝是创建了一个对象用一个现成的对象初始化它的时候只是复制了成员(简单赋值)而没有拷贝分配给成员的资源(如给其指针变量成员分配了动态内存); 深拷贝是当一个对象创建时，如果分配了资源，就需要定义自己的拷贝构造函数，使之不但拷贝成员也拷贝分配给它的资源

## 语言特性相关
* [namespace in C++ | Set 2 (Extending namespace and Unnamed namespace) - GeeksforGeeks](https://www.geeksforgeeks.org/namespace-in-c-set-2-extending-namespace-and-unnamed-namespace/)
  * Unnamed Namespaces
    * They are directly usable in the same program and are used for declaring unique identifiers.
    * In unnamed namespaces, name of the namespace in not mentioned in the declaration of namespace.
    * The name of the namespace is uniquely generated by the compiler.
    * The unnamed namespaces you have created will only be accessible within the file you created it in.
    * Unnamed namespaces are the replacement for the static declaration of variables.
  * [Namespaces - cppreference.com](https://en.cppreference.com/w/cpp/language/namespace)
* 左值和右值的区别？左值引用和右值引用的区别，如何将左值转换成右值？
  * 左值：指表达式结束后依然存在的持久对象。
  * 右值：表达式结束就不再存在的临时对象。
  * 左值和右值的区别：左值持久，右值短暂
  * 右值引用和左值引用的区别：
  * 左值引用不能绑定到要转换的表达式、字面常量或返回右值的表达式。右值引用恰好相反，可以绑定到这类表达式，但不能绑定到一个左值上。
  * 右值引用必须绑定到右值的引用，通过 && 获得。右值引用只能绑定到一个将要销毁的对象上，因此可以自由地移动其资源。
  * std::move 可以将一个左值强制转化为右值，继而可以通过右值引用使用该值，以用于移动语义。
* std::move()
  * [move - C++ Reference](https://www.cplusplus.com/reference/algorithm/move/)
  * [std::move - cppreference.com](https://en.cppreference.com/w/cpp/utility/move)
    * std::move is used to indicate that an object t may be "moved from", i.e. allowing the efficient transfer of resources from t to another object.
    * In particular, std::move produces an xvalue expression that identifies its argument t. It is exactly equivalent to a static_cast to an rvalue reference type.
  * [c++ - What is std::move(), and when should it be used? - Stack Overflow](https://stackoverflow.com/questions/3413470/what-is-stdmove-and-when-should-it-be-used)
    * In C++11, in addition to copy constructors, objects can have move constructors.(And in addition to copy assignment operators, they have move assignment operators.)
    * The move constructor is used instead of the copy constructor, if the object has type "rvalue-reference" (Type &&).
    * std::move() is a cast that produces an rvalue-reference to an object, to enable moving from it.
    * It's a new C++ way to avoid copies. For example, using a move constructor, a std::vector could just copy its internal pointer to data to the new object, leaving the moved object in an moved from state, therefore not copying all the data.  
    * [Rvalue Reference Quick Look](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2027.html#Move_Semantics)
      * Rvalue references is a small technical extension to the C++ language. Rvalue references allow programmers to avoid logically unnecessary copying and to provide perfect forwarding functions. They are primarily meant to aid in the design of higer performance and more robust libraries.
      * The rvalue reference      
        * An rvalue reference is a compound type very similar to C++'s traditional reference. To better distinguish these two types, we refer to a traditional C++ reference as an lvalue reference. When the term reference is used, it refers to both kinds of reference: lvalue reference and rvalue reference.
        * It turns out that the combination of rvalue references and lvalue references is just what is needed to easily code move semantics. The rvalue reference can also be used to achieve perfect forwarding, a heretofore unsolved problem in C++. From a casual programmer's perspective, what we get from rvalue references is more general and better performing libraries.
      * Move Semantics
        * Eliminating spurious copies
          * Copying can be expensive. 
          * The first task of rvalue references is to allow us to implement move() without verbosity, or rutime overhead.
          * move
            * The move function really does very little work. All move does is accept either an lvalue or rvalue argument, and return it as an rvalue without triggering a copy construction:
  * std::move() 实现原理：
    * 利用引用折叠原理将右值经过 T&& 传递类型保持不变还是右值，而左值经过 T&& 变为普通的左值引用，以保证模板可以传递任意实参，且保持类型不变；
    * 然后通过 remove_refrence 移除引用，得到具体的类型 T；
    * 最后通过 static_cast<> 进行强制类型转换，返回 T&& 右值引用。
* [Pointers vs References in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/pointers-vs-references-cpp/)
	* [Pointers](https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/)
		* A pointer is a variable that holds memory address of another variable. A pointer needs to be dereferenced with * operator to access the memory location it points to. 
	* [References](https://www.geeksforgeeks.org/references-in-c/)
		* A reference variable is an alias, that is, another name for an already existing variable. A reference, like a pointer, is also implemented by storing the address of an object. 
		* A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) with automatic indirection, i.e the compiler will apply the * operator for you. 
	* Differences

		Features|Pointers|References
		-|-|-
		Initialization|we can declare and initialize pointer at same step or in multiple line.|we should declare and initialize references at single step.
		Reassignment|Pointer can be re-assigned. This property is useful for implementation of data structures like linked list, tree, etc.|Reference cannot be re-assigned, and must be assigned at initialization.
		Memory Address|Pointer has its own memory address and size on the stack|Reference shares the same memory address (with the original variable) but also takes up some space on the stack
		NULL value|Pointer can be assigned NULL directly|Reference cannot. The constraints associated with references (no NULL, no reassignment) ensure that the underlying operations do not run into exception situation.
		Indirection|You can have pointers to pointers offering extra levels of indirection|References only offer one level of indirection
		Arithmetic operations|Various arithmetic operations can be performed on pointers|There is no such thing called Reference Arithmetic.(but you can take the address of an object pointed by a reference and do pointer arithmetics on it as in &obj + 5).) 

	* When to use What
		* The performances are exactly the same, as references are implemented internally as pointers. But still you can keep some points in your mind to decide when to use what :
			* Use references 
				* In function parameters and return types.
			* Use pointers: 
				* Use pointers if pointer arithmetic or passing NULL-pointer is needed. For example for arrays (Note that array access is implemented using pointer arithmetic).
				* To implement data structures like linked list, tree, etc and their algorithms because to point different cell, we have to use the concept of pointers.
* 指针和引用的初始化区别
  * 引用被创建的同时必须被初始化（指针则可以在任何时候被初始化）。
  * 不能有NULL 引用，引用必须与合法的存储单元关联（指针则可以是NULL）。
  * 一旦引用被初始化，就不能改变引用的关系（指针则可以随时改变所指的对象）。
* [Passing By Pointer Vs Passing By Reference in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/)
	* 1) Passing by Pointer: Here, the memory location of the variables is passed to the parameters in the function, and then the operations are performed.
	* 2) Passing by Reference: It allows a function to modify a variable without having to create a copy of it. We have to declare reference variables. The memory location of the passed variable and parameter is the same and therefore, any change to the parameter reflects in the variable as well.
	* Difference Between Reference Variable and Pointer Variable:
		* A reference is the same object, just with a different name and a reference must refer to an object. Since references can’t be NULL, they are safer to use. 
		* A pointer can be re-assigned while a reference cannot, and must be assigned at initialization only.
		* The pointer can be assigned NULL directly, whereas the reference cannot.
		* Pointers can iterate over an array, we can use increment/decrement operators to go to the next/previous item that a pointer is pointing to.
		* A pointer is a variable that holds a memory address. A reference has the same memory address as the item it references.
		* A pointer to a class/struct uses ‘->’ (arrow operator) to access its members whereas a reference uses a ‘.’ (dot operator)
		* A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly.
	* Which is preferred in Passing by Pointer Vs Passing by Reference in C++? 
		* References are usually preferred over pointers whenever we don’t need “reseating”.
		* Overall, Use references when you can, and pointers when you have to. But if we want to write C code that compiles with both C and a C++ compiler, you’ll have to restrict yourself to using pointers.	
* 函数指针,什么是函数指针，有什么用处
  * 函数指针是指向函数的指针，最大的用处是做回调函数，可以做接口函数，就像系统中断中的中断处理函数
* 设计一个函数，函数中有一段功能是对相关数据的结理，但具体的处理方式是不定的。
  * 将不定的处理方式设定成一个外部传来函数指针。(可以设计成这样 func(int a,int b，某种函数指针) )
* 如何对消息实现同步响应
  * 使用CALLBACK，回调函数
  * [CALLBACK_百度百科](https://baike.baidu.com/item/CALLBACK/813549?fr=aladdin)
* 函数对象功能
  * 可以用作类似C里的回调函数，也可以用作函数功能的组合
* C++模板
  * 简化对类似函数的设计，比如要设计两个函数 abs(int a), abs(float a),就可以用模板去设计一个函数就可以了

### [STL](https://github.com/huihut/interview#-stl)

* [STL 容器](https://github.com/huihut/interview#stl-%E5%AE%B9%E5%99%A8)

容器 | 底层数据结构 | 时间复杂度 | 有无序 | 可不可重复 | 其他
---|---|---|---|---|---
[array](https://github.com/huihut/interview/tree/master/STL#array)|数组|随机读改 O(1)|无序|可重复|支持随机访问
[vector](https://github.com/huihut/interview/tree/master/STL#vector)|数组|随机读改、尾部插入、尾部删除 O(1)<br/>头部插入、头部删除 O(n)|无序|可重复|支持随机访问; [Iterators/References may become invalid after insertion or erasure](https://en.cppreference.com/w/cpp/container); May have a default size
[deque](https://github.com/huihut/interview/tree/master/STL#deque)|双端队列|头尾插入、头尾删除 O(1)|无序|可重复|一个中央控制器 + 多个缓冲区，支持首尾快速增删，支持随机访问
[forward_list](https://github.com/huihut/interview/tree/master/STL#forward_list)|单向链表|插入、删除 O(1)|无序|可重复|不支持随机访问
[list](https://github.com/huihut/interview/tree/master/STL#list)|双向链表|插入、删除 O(1)|无序|可重复|不支持随机访问; Iterators/References remain valid after insertion or erasure except the corresponding element is deleted.
[stack](https://github.com/huihut/interview/tree/master/STL#stack)|deque / list|顶部插入、顶部删除 O(1)|无序|可重复|deque 或 list 封闭头端开口，不用 vector 的原因应该是容量大小有限制，扩容耗时
[queue](https://github.com/huihut/interview/tree/master/STL#queue)|deque / list|尾部插入、头部删除 O(1)|无序|可重复|deque 或 list 封闭头端开口，不用 vector 的原因应该是容量大小有限制，扩容耗时
[priority_queue](https://github.com/huihut/interview/tree/master/STL#priority_queue)|vector + max-heap|插入、删除 O(log<sub>2</sub>n)|有序|可重复|vector容器+heap处理规则
[set](https://github.com/huihut/interview/tree/master/STL#set)|[红黑树](https://github.com/huihut/interview#%E7%BA%A2%E9%BB%91%E6%A0%91)|插入、删除、查找 O(log<sub>2</sub>n)|有序|不可重复|
[multiset](https://github.com/huihut/interview/tree/master/STL#multiset)|红黑树|插入、删除、查找 O(log<sub>2</sub>n)|有序|可重复|
[map](https://github.com/huihut/interview/tree/master/STL#map)|红黑树|插入、删除、查找 O(log<sub>2</sub>n)|有序|不可重复|
[multimap](https://github.com/huihut/interview/tree/master/STL#multimap)|红黑树|插入、删除、查找 O(log<sub>2</sub>n)|有序|可重复|
[unordered_set](https://github.com/huihut/interview/tree/master/STL#unordered_set)|哈希表|插入、删除、查找 O(1) 最差 O(n)|无序|不可重复|
[unordered_multiset](https://github.com/huihut/interview/tree/master/STL#unordered_multiset)|哈希表|插入、删除、查找 O(1) 最差 O(n)|无序|可重复|
[unordered_map](https://github.com/huihut/interview/tree/master/STL#unordered_map)|哈希表|插入、删除、查找 O(1) 最差 O(n)|无序|不可重复|
[unordered_multimap](https://github.com/huihut/interview/tree/master/STL#unordered_multimap)|哈希表|插入、删除、查找 O(1) 最差 O(n)|无序|可重复|

* [STL 算法](https://github.com/huihut/interview#stl-%E7%AE%97%E6%B3%95)

算法 | 底层算法 | 时间复杂度 | 可不可重复
---|---|---|---
[find](http://www.cplusplus.com/reference/algorithm/find/)|顺序查找|O(n)|可重复
[sort](https://github.com/gcc-mirror/gcc/blob/master/libstdc++-v3/include/bits/stl_algo.h#L4808)|[内省排序](https://en.wikipedia.org/wiki/Introsort)|O(n*log<sub>2</sub>n)|可重复

* [算法（algorithms）](https://github.com/huihut/interview/tree/master/STL#%E7%AE%97%E6%B3%95algorithms)
```cpp
// 简单查找算法，要求输入迭代器（input iterator）
find(beg, end, val); // 返回一个迭代器，指向输入序列中第一个等于 val 的元素，未找到返回 end
find_if(beg, end, unaryPred); // 返回一个迭代器，指向第一个满足 unaryPred 的元素，未找到返回 end
find_if_not(beg, end, unaryPred); // 返回一个迭代器，指向第一个令 unaryPred 为 false 的元素，未找到返回 end
count(beg, end, val); // 返回一个计数器，指出 val 出现了多少次
count_if(beg, end, unaryPred); // 统计有多少个元素满足 unaryPred
all_of(beg, end, unaryPred); // 返回一个 bool 值，判断是否所有元素都满足 unaryPred
any_of(beg, end, unaryPred); // 返回一个 bool 值，判断是否任意（存在）一个元素满足 unaryPred
none_of(beg, end, unaryPred); // 返回一个 bool 值，判断是否所有元素都不满足 unaryPred

// 查找重复值的算法，传入向前迭代器（forward iterator）
adjacent_find(beg, end); // 返回指向第一对相邻重复元素的迭代器，无相邻元素则返回 end
adjacent_find(beg, end, binaryPred); // 返回指向第一对相邻重复元素的迭代器，无相邻元素则返回 end
search_n(beg, end, count, val); // 返回一个迭代器，从此位置开始有 count 个相等元素，不存在则返回 end
search_n(beg, end, count, val, binaryPred); // 返回一个迭代器，从此位置开始有 count 个相等元素，不存在则返回 end

// 查找子序列算法，除 find_first_of（前两个输入迭代器，后两个前向迭代器） 外，都要求两个前向迭代器
search(beg1, end1, beg2, end2); // 返回第二个输入范围（子序列）在爹一个输入范围中第一次出现的位置，未找到则返回 end1
search(beg1, end1, beg2, end2, binaryPred); // 返回第二个输入范围（子序列）在爹一个输入范围中第一次出现的位置，未找到则返回 end1
find_first_of(beg1, end1, beg2, end2); // 返回一个迭代器，指向第二个输入范围中任意元素在第一个范围中首次出现的位置，未找到则返回end1
find_first_of(beg1, end1, beg2, end2, binaryPred); // 返回一个迭代器，指向第二个输入范围中任意元素在第一个范围中首次出现的位置，未找到则返回end1
find_end(beg1, end1, beg2, end2); // 类似 search，但返回的最后一次出现的位置。如果第二个输入范围为空，或者在第一个输入范围为空，或者在第一个输入范围中未找到它，则返回 end1
find_end(beg1, end1, beg2, end2, binaryPred); // 类似 search，但返回的最后一次出现的位置。如果第二个输入范围为空，或者在第一个输入范围为空，或者在第一个输入范围中未找到它，则返回 end1

// 其他只读算法，传入输入迭代器
for_each(beg, end, unaryOp); // 对输入序列中的每个元素应用可调用对象 unaryOp，unaryOp 的返回值被忽略
mismatch(beg1, end1, beg2); // 比较两个序列中的元素。返回一个迭代器的 pair，表示两个序列中第一个不匹配的元素
mismatch(beg1, end1, beg2, binaryPred); // 比较两个序列中的元素。返回一个迭代器的 pair，表示两个序列中第一个不匹配的元素
equal(beg1, end1, beg2); // 比较每个元素，确定两个序列是否相等。
equal(beg1, end1, beg2, binaryPred); // 比较每个元素，确定两个序列是否相等。

// 二分搜索算法，传入前向迭代器或随机访问迭代器（random-access iterator），要求序列中的元素已经是有序的。通过小于运算符（<）或 comp 比较操作实现比较。
lower_bound(beg, end, val); // 返回一个非递减序列 [beg, end) 中的第一个大于等于值 val 的位置的迭代器，不存在则返回 end
lower_bound(beg, end, val, comp); // 返回一个非递减序列 [beg, end) 中的第一个大于等于值 val 的位置的迭代器，不存在则返回 end
upper_bound(beg, end, val); // 返回一个非递减序列 [beg, end) 中第一个大于 val 的位置的迭代器，不存在则返回 end
upper_bound(beg, end, val, comp); // 返回一个非递减序列 [beg, end) 中第一个大于 val 的位置的迭代器，不存在则返回 end
equal_range(beg, end, val); // 返回一个 pair，其 first 成员是 lower_bound 返回的迭代器，其 second 成员是 upper_bound 返回的迭代器
binary_search(beg, end, val); // 返回一个 bool 值，指出序列中是否包含等于 val 的元素。对于两个值 x 和 y，当 x 不小于 y 且 y 也不小于 x 时，认为它们相等。

// 只写不读算法，要求输出迭代器（output iterator）
fill(beg, end, val); // 将 val 赋予每个元素，返回 void
fill_n(beg, cnt, val); // 将 val 赋予 cnt 个元素，返回指向写入到输出序列最有一个元素之后位置的迭代器
genetate(beg, end, Gen); // 每次调用 Gen() 生成不同的值赋予每个序列，返回 void
genetate_n(beg, cnt, Gen); // 每次调用 Gen() 生成不同的值赋予 cnt 个序列，返回指向写入到输出序列最有一个元素之后位置的迭代器

// 使用输入迭代器的写算法，读取一个输入序列，将值写入到一个输出序列（dest）中
copy(beg, end, dest); // 从输入范围将元素拷贝所有元素到 dest 指定定的目的序列
copy_if(beg, end, dest, unaryPred); // 从输入范围将元素拷贝满足 unaryPred 的元素到 dest 指定定的目的序列
copy_n(beg, n, dest); // 从输入范围将元素拷贝前 n 个元素到 dest 指定定的目的序列
move(beg, end, dest); // 对输入序列中的每个元素调用 std::move，将其移动到迭代器 dest 开始始的序列中
transform(beg, end, dest, unaryOp); // 调用给定操作（一元操作），并将结果写到dest中
transform(beg, end, beg2, dest, binaryOp); // 调用给定操作（二元操作），并将结果写到dest中
replace_copy(beg, end, dest, old_val, new_val); // 将每个元素拷贝到 dest，将等于 old_val 的的元素替换为 new_val
replace_copy_if(beg, end, dest, unaryPred, new_val); // 将每个元素拷贝到 dest，将满足 unaryPred 的的元素替换为 new_val
merge(beg1, end1, beg2, end2, dest); // 两个输入序列必须都是有序的，用 < 运算符将合并后的序列写入到 dest 中
merge(beg1, end1, beg2, end2, dest, comp); // 两个输入序列必须都是有序的，使用给定的比较操作（comp）将合并后的序列写入到 dest 中

// 使用前向迭代器的写算法，要求前向迭代器
iter_swap(iter1, iter2); // 交换 iter1 和 iter2 所表示的元素，返回 void
swap_ranges(beg1, end1, beg2); // 将输入范围中所有元素与 beg2 开始的第二个序列中所有元素进行交换。返回递增后的的 beg2，指向最后一个交换元素之后的位置。
replace(beg, end, old_val, new_val); // 用 new_val 替换等于 old_val 的每个匹配元素
replace_if(beg, end, unaryPred, new_val); // 用 new_val 替换满足 unaryPred 的每个匹配元素

// 使用双向迭代器的写算法，要求双向选代器（bidirectional iterator）
copy_backward(beg, end, dest); // 从输入范围中拷贝元素到指定目的位置。如果范围为空,则返回值为 dest；否则，返回值表示从 *beg 中拷贝或移动的元素。
move_backward(beg, end, dest);  // 从输入范围中移动元素到指定目的位置。如果范围为空,则返回值为 dest；否则,返回值表示从 *beg 中拷贝或移动的元素。
inplace_merge(beg, mid, end); // 将同一个序列中的两个有序子序列合并为单一的有序序列。beg 到 mid 间的子序列和 mid 到 end 间的子序列被合并，并被写入到原序列中。使用 < 比较元素。
inplace_merge(beg, mid, end, comp); // 将同一个序列中的两个有序子序列合并为单一的有序序列。beg 到 mid 间的子序列和 mid 到 end 间的子序列被合并，并被写入到原序列中。使用给定的 comp 操作。

// 划分算法，要求双向选代器（bidirectional iterator）
is_partitioned(beg, end, unaryPred); // 如果所有满足谓词 unaryPred 的元素都在不满足 unarypred 的元素之前，则返回 true。若序列为空，也返回 true
partition_copy(beg, end, dest1, dest2, unaryPred); // 将满足 unaryPred 的元素拷贝到到 dest1，并将不满足 unaryPred 的元素拷贝到到 dest2。返回一个迭代器 pair，其 first 成员表示拷贝到 dest1 的的元素的末尾，second 表示拷贝到 dest2 的元素的末尾。
partitioned_point(beg, end, unaryPred); // 输入序列必须是已经用 unaryPred 划分过的。返回满足  unaryPred 的范围的尾后迭代器。如果返回的迭代器不是 end，则它指向的元素及其后的元素必须都不满足 unaryPred
stable_partition(beg, end, unaryPred); // 使用 unaryPred 划分输入序列。满足 unaryPred 的元素放置在序列开始，不满足的元素放在序列尾部。返回一个迭代器，指向最后一个满足 unaryPred 的元素之后的位置如果所有元素都不满足 unaryPred，则返回 beg
partition(beg, end, unaryPred); // 使用 unaryPred 划分输入序列。满足 unaryPred 的元素放置在序列开始，不满足的元素放在序列尾部。返回一个迭代器，指向最后一个满足 unaryPred 的元素之后的位置如果所有元素都不满足 unaryPred，则返回 beg

// 排序算法，要求随机访问迭代器（random-access iterator）
sort(beg, end); // 排序整个范围
stable_sort(beg, end); // 排序整个范围（稳定排序）
sort(beg, end, comp); // 排序整个范围
stable_sort(beg, end, comp); // 排序整个范围（稳定排序）
is_sorted(beg, end); // 返回一个 bool 值，指出整个输入序列是否有序
is_sorted(beg, end, comp); // 返回一个 bool 值，指出整个输入序列是否有序
is_sorted_until(beg, end); // 在输入序列中査找最长初始有序子序列，并返回子序列的尾后迭代器
is_sorted_until(beg, end, comp); // 在输入序列中査找最长初始有序子序列，并返回子序列的尾后迭代器
partial_sort(beg, mid, end); // 排序 mid-beg 个元素。即，如果 mid-beg 等于 42，则此函数将值最小的 42 个元素有序放在序列前 42 个位置
partial_sort(beg, mid, end, comp); // 排序 mid-beg 个元素。即，如果 mid-beg 等于 42，则此函数将值最小的 42 个元素有序放在序列前 42 个位置
partial_sort_copy(beg, end, destBeg, destEnd); // 排序输入范围中的元素，并将足够多的已排序元素放到 destBeg 和 destEnd 所指示的序列中
partial_sort_copy(beg, end, destBeg, destEnd, comp); // 排序输入范围中的元素，并将足够多的已排序元素放到 destBeg 和 destEnd 所指示的序列中
nth_element(beg, nth, end); // nth 是一个迭代器，指向输入序列中第 n 大的元素。nth 之前的元素都小于等于它，而之后的元素都大于等于它
nth_element(beg, nth, end, comp); // nth 是一个迭代器，指向输入序列中第 n 大的元素。nth 之前的元素都小于等于它，而之后的元素都大于等于它

// 使用前向迭代器的重排算法。普通版本在输入序列自身内部重拍元素，_copy 版本完成重拍后写入到指定目的序列中，而不改变输入序列
remove(beg, end, val); // 通过用保留的元素覆盖要删除的元素实现删除 ==val 的元素，返回一个指向最后一个删除元素的尾后位置的迭代器
remove_if(beg, end, unaryPred); // 通过用保留的元素覆盖要删除的元素实现删除满足 unaryPred 的元素，返回一个指向最后一个删除元素的尾后位置的迭代器
remove_copy(beg, end, dest, val); // 通过用保留的元素覆盖要删除的元素实现删除 ==val 的元素，返回一个指向最后一个删除元素的尾后位置的迭代器
remove_copy_if(beg, end, dest, unaryPred); // 通过用保留的元素覆盖要删除的元素实现删除满足 unaryPred 的元素，返回一个指向最后一个删除元素的尾后位置的迭代器
unique(beg, end); // 通过对覆盖相邻的重复元素（用 == 确定是否相同）实现重排序列。返回一个迭代器，指向不重复元素的尾后位置
unique (beg, end, binaryPred); // 通过对覆盖相邻的重复元素（用 binaryPred 确定是否相同）实现重排序列。返回一个迭代器，指向不重复元素的尾后位置
unique_copy(beg, end, dest); // 通过对覆盖相邻的重复元素（用 == 确定是否相同）实现重排序列。返回一个迭代器，指向不重复元素的尾后位置
unique_copy_if(beg, end, dest, binaryPred); // 通过对覆盖相邻的重复元素（用 binaryPred 确定是否相同）实现重排序列。返回一个迭代器，指向不重复元素的尾后位置
rotate(beg, mid, end); // 围绕 mid 指向的元素进行元素转动。元素 mid 成为为首元素，随后是 mid+1 到到 end 之前的元素，再接着是 beg 到 mid 之前的元素。返回一个迭代器，指向原来在 beg 位置的元素
rotate_copy(beg, mid, end, dest); // 围绕 mid 指向的元素进行元素转动。元素 mid 成为为首元素，随后是 mid+1 到到 end 之前的元素，再接着是 beg 到 mid 之前的元素。返回一个迭代器，指向原来在 beg 位置的元素

// 使用双向迭代器的重排算法
reverse(beg, end); // 翻转序列中的元素，返回 void
reverse_copy(beg, end, dest);; // 翻转序列中的元素，返回一个迭代器，指向拷贝到目的序列的元素的尾后位置

// 使用随机访问迭代器的重排算法
random_shuffle(beg, end); // 混洗输入序列中的元素，返回 void
random_shuffle(beg, end, rand); // 混洗输入序列中的元素，rand 接受一个正整数的随机对象，返回 void
shuffle(beg, end, Uniform_rand); // 混洗输入序列中的元素，Uniform_rand 必须满足均匀分布随机数生成器的要求，返回 void

// 最小值和最大值，使用 < 运算符或给定的比较操作 comp 进行比较
min(val1, va12); // 返回 val1 和 val2 中的最小值，两个实参的类型必须完全一致。参数和返回类型都是 const的引引用，意味着对象不会被拷贝。下略
min(val1, val2, comp);
min(init_list);
min(init_list, comp);
max(val1, val2);
max(val1, val2, comp);
max(init_list);
max(init_list, comp);
minmax(val1, val2); // 返回一个 pair，其 first 成员为提供的值中的较小者，second 成员为较大者。下略
minmax(vall, val2, comp);
minmax(init_list);
minmax(init_list, comp);
min_element(beg, end); // 返回指向输入序列中最小元素的迭代器
min_element(beg, end, comp); // 返回指向输入序列中最小元素的迭代器
max_element(beg, end); // 返回指向输入序列中最大元素的迭代器
max_element(beg, end, comp); // 返回指向输入序列中最大元素的迭代器
minmax_element(beg, end); // 返回一个 pair，其中 first 成员为最小元素，second 成员为最大元素
minmax_element(beg, end, comp); // 返回一个 pair，其中 first 成员为最小元素，second 成员为最大元素

// 字典序比较，根据第一对不相等的元素的相对大小来返回结果。如果第一个序列在字典序中小于第二个序列，则返回 true。否则，返回 fa1se。如果个序列比另一个短，且所有元素都与较长序列的对应元素相等，则较短序列在字典序中更小。如果序列长度相等，且对应元素都相等，则在字典序中任何一个都不大于另外一个。
lexicographical_compare(beg1, end1, beg2, end2);
lexicographical_compare(beg1, end1, beg2, end2, comp);
```

* [C++之旅-vector](https://mp.weixin.qq.com/s/Pizq2-UcJi7rJLTwwxtRlw)
* Is Vector allocated on stack or heap ?
	* Heap
	* [c++ - When vectors are allocated, do they use memory on the heap or the stack? - Stack Overflow](https://stackoverflow.com/questions/8036474/when-vectors-are-allocated-do-they-use-memory-on-the-heap-or-the-stack#:~:text=So%20no%20matter%20how%20you,always%20allocated%20on%20the%20heap%20.)
		* vector\<Type> vect;
			* will allocate the vector, i.e. the header info, on the stack, but the elements on the free store ("heap").
		* vector\<Type> *vect = new vector\<Type>;
			* allocates everything on the free store.
		* vector\<Type*> vect;
			* will allocate the vector on the stack and a bunch of pointers on the free store, but where these point is determined by how you use them (you could point element 0 to the free store and element 1 to the stack, say).
* [Difference Between Vector and List - GeeksforGeeks](https://www.geeksforgeeks.org/difference-between-vector-and-list/)
	* Vector: Vector is a type of dynamic array which has the ability to resize automatically after insertion or deletion of elements. The elements in vector are placed in contiguous storage so that they can be accessed and traversed using iterators. Element is inserted at the end of the vector.
	* List: List is a double linked sequence that supports both forward and backward traversal. The time taken in the insertion and deletion in the beginning, end and middle is constant. It has the non-contiguous memory and there is no pre-allocated memory.

| Vector | List | 
| - | - | 
| It has contiguous memory.	| While it has non-contiguous memory. | 
| It is synchronized. | While it is not synchronized. | 
| Vector may have a default size. | List does not have default size. | 
| In vector, each element only requires the space for itself only. | In list, each element requires extra space for the node which holds the element, including pointers to the next and previous elements in the list. | 
| Insertion at the end requires constant time but insertion elsewhere is costly. | Insertion is cheap no matter where in the list it occurs. | 
| Vector is thread safe. | List is not thread safe. | 
| Deletion at the end of the vector needs constant time but for the rest it is O(n). | Deletion is cheap no matter where in the list it occurs. | 
| Random access of elements is possible. | Random access of elements is not possible. | 
| Iterators become invalid if elements are added to or removed from the vector. | Iterators are valid if elements are added to or removed from the list. | 

* class std::string
  * [string - C++ Reference](https://www.cplusplus.com/reference/string/string/)
  * [C++之旅-string](https://mp.weixin.qq.com/s/P2nd-9fmhpn20bB45hBioQ)
* Object Slicing
  * [Object slicing - Wikipedia](https://en.wikipedia.org/wiki/Object_slicing)
  * In C++ programming, object slicing occurs when an object of a subclass type is copied to an object of superclass type: the superclass copy will not have any of the member variables defined in the subclass. These variables have, in effect, been "sliced off".) More subtly, object slicing can also occur when an object of a subclass type is copied to an object of the same type by the superclass's assignment operator, in which case some of the target object's member variables will retain their original values instead of being copied from the source object.
  * This issue is not inherently unique to C++, but it does not occur naturally in most other object-oriented languages — even C++'s relatives such as D, Java, and C# — because copying of objects is not a basic operation in those languages. (Instead, those languages prefer to manipulate objects via implicit references, such that only copying the reference is a basic operation.) In C++, by contrast, objects are copied automatically whenever a function takes an object argument by value or returns an object by value. Additionally, due to the lack of garbage collection in C++, programs will frequently copy an object whenever the ownership and lifetime of a single shared object would be unclear; for example, inserting an object into a standard-library collection, such as a std::vector, actually involves inserting a copy into the collection.
  * [c++对象切割 - CSDN博客](https://blog.csdn.net/weiwangchao_/article/details/4702241)
* 异常,异常的功能
  * 保证异常的健壮性，结构化处理出错信息
* Exception safety
	* [Exception safety - Wikipedia](https://en.wikipedia.org/wiki/Exception_safety)
		* The C++ standard library provides several levels of exception safety (in decreasing order of safety):[6]
			* No-throw guarantee, also known as failure transparency: Operations are guaranteed to succeed and satisfy all requirements even in exceptional situations. If an exception occurs, it will be handled internally and not observed by clients.
			* Strong exception safety, also known as commit or rollback semantics: Operations can fail, but failed operations are guaranteed to have no side effects, leaving the original values intact.[7]
			* Basic exception safety: Partial execution of failed operations can result in side effects, but all invariants are preserved. Any stored data will contain valid values which may differ from the original values. Resource leaks (including memory leaks) are commonly ruled out by an invariant stating that all resources are accounted for and managed.
			* No exception safety: No guarantees are made.
	* [How to: Design for exception safety | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/how-to-design-for-exception-safety?view=msvc-170#:~:text=A%20basic%20axiom%20of%20C%2B%2B,on%20all%20destructors%20it%20defines.)
		* Typically, exception safety is discussed in terms of the three exception guarantees that a function can provide: the no-fail guarantee, the strong guarantee, and the basic guarantee.
		* No-fail guarantee
			* The no-fail (or, "no-throw") guarantee is the strongest guarantee that a function can provide. It states that the function will not throw an exception or allow one to propagate. However, you cannot reliably provide such a guarantee unless (a) you know that all the functions that this function calls are also no-fail, or (b) you know that any exceptions that are thrown are caught before they reach this function, or (c) you know how to catch and correctly handle all exceptions that might reach this function.
			* Both the strong guarantee and the basic guarantee rely on the assumption that the destructors are no-fail. All containers and types in the Standard Library guarantee that their destructors do not throw. There is also a converse requirement: The Standard Library requires that user-defined types that are given to it—for example, as template arguments—must have non-throwing destructors.
		* Strong guarantee
			* The strong guarantee states that if a function goes out of scope because of an exception, it will not leak memory and program state will not be modified. A function that provides a strong guarantee is essentially a transaction that has commit or rollback semantics: either it completely succeeds or it has no effect.
		* Basic guarantee
			* The basic guarantee is the weakest of the three. However, it might be the best choice when a strong guarantee is too expensive in memory consumption or in performance. The basic guarantee states that if an exception occurs, no memory is leaked and the object is still in a usable state even though the data might have been modified.

### Modern C++

* [B.1 — Introduction to C++11 – Learn C++](https://www.learncpp.com/cpp-tutorial/b-1-introduction-to-c11/)
* [B.2 — Introduction to C++14 – Learn C++](https://www.learncpp.com/cpp-tutorial/b-2-introduction-to-c14/)
* [B.3 — Introduction to C++17 – Learn C++](https://www.learncpp.com/cpp-tutorial/b-3-introduction-to-c17/)
* [B.4 — Introduction to C++20 – Learn C++](https://www.learncpp.com/cpp-tutorial/introduction-to-c20/)
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
* [C++ 中的各种特性](https://mp.weixin.qq.com/s?__biz=MzA4MjI3NzQ1Nw==&mid=2247502245&idx=1&sn=9e472ebac369ffc5219ebd9e5cf67b9f&chksm=9f8aac9ba8fd258db6d136449963bbe2669fb65183a58822824314995faad442f5e5211444cc&scene=178&cur_album_id=1511180677537464321#rd)
	* https://blog.csdn.net/a15920804211/article/details/90691525
* [C++ 11 新特性梳理](https://mp.weixin.qq.com/s/c6BCvqbmwU6jCOhjL7qQPQ)
  * https://www.jianshu.com/p/78c700c8d72d
  * 在面试中，经常被问的一个问题就是：你了解C++11哪些新特性？一般而言，回答以下四个方面就够了：
    * “语法糖”：nullptr, auto自动类型推导，范围for循环，初始化列表, lambda表达式等
    * 右值引用和移动语义
    * 智能指针
    * C++11多线程编程：thread库及其相配套的同步原语mutex, lock_guard, condition_variable, 以及异步std::furture
* [【C++面试知识】C++11新特性](https://mp.weixin.qq.com/s/jZRnb8WxNoJvdbiHrSuFlQ)
	* https://blog.csdn.net/a15920804211/article/details/90691525
* [C++17 在业务代码中最好用的十个特性](https://mp.weixin.qq.com/s/jlM1NWRNpoOvW2qrBtxflQ)
	* 自从步入现代 C++时代开始，C++语言标准形成了三年一个版本的惯例：C++11 标志着现代 C++的开端，C++14 在 11 的基础上查缺补漏，并未加入许多新特性，而 C++17 作为 C++11 后的第一个大版本，标志着现代 C++逐渐走向成熟。WXG 编译器升级到 gcc7.5 已有一段时间，笔者所在项目组也已经将全部代码升级到 C++17。在使用了 C++17 一年多之后，笔者总结了 C++17 在业务代码中最好用的十个特性。
	* 笔者将这些特性大体上分为三类：语法糖、性能提升和类型系统。
	* 语法糖
		* 结构化绑定
		* std::tuple 的隐式推导
		* if constexpr
		* if 初始化语句
	* 性能提升
		* std::shared_mutex
		* std::string_view
		* std::map/unordered_map try_emplace
	* 类型系统
		* std::any
		* std::optional
		* std::variant
		* 总结一下，c++17 新增的三种类型给 c++带来了更现代更安全的类型系统，它们对应的使用场景是：
			* std::any适用于之前使用void*作为通用类型的场景。
			* std::optional适用于之前使用nullptr代表失败状态的场景。
			* std::variant适用于之前使用union的场景。
	* 总结
		* 以上是笔者在生产环境中最常用的 c++17 特性，除了本文描述的十个特性外，c++17 还添加了如lambda 值捕获*this, 钳夹函数 std::clamp(), 强制检查返回值[[nodiscard]]等非常易用的特性，本文篇幅有限不做赘述，欢迎有兴趣的读者自行探索。
* [解读C++即将迎来的重大更新（一）：C++20的四大新特性](https://mp.weixin.qq.com/s/QpqvZ3a7nFdHGjIBiKX67g)
  * https://www.modernescpp.com/index.php/thebigfour
* [Google “战败”后，C++20 用微软的提案进入协程时代！](https://mp.weixin.qq.com/s/SlTObQQeDXvLLXuoxbO1yg)

## Idioms

* [Curiously Recurring Template Pattern](https://github.com/haoran119/c-cpp/blob/main/%E5%AD%A6%E4%B9%A0%E7%AC%94%E8%AE%B0%E4%B9%8BC-C++/README.md#curiously-recurring-template-pattern---cppreferencecom)
	* The Curiously Recurring Template Pattern is an idiom in which a class X derives from a class template Y, taking a template parameter Z, where Y is instantiated with Z=X.
	* CRTP may be used to implement "compile-time polymorphism", when a base class exposes an interface, and derived classes implement such interface.
* [DRY - Don't repeat yourself - Wikipedia](https://en.wikipedia.org/wiki/Don't_repeat_yourself)
  * "Don't repeat yourself" (DRY, or sometimes "do not repeat yourself") is a principle of software development aimed at reducing repetition of software patterns,[1] replacing it with abstractions or using data normalization to avoid redundancy.
  * The DRY principle is stated as "Every piece of knowledge must have a single, unambiguous, authoritative representation within a system". The principle has been formulated by Andy Hunt and Dave Thomas in their book The Pragmatic Programmer.[2] They apply it quite broadly to include "database schemas, test plans, the build system, even documentation".[3] When the DRY principle is applied successfully, a modification of any single element of a system does not require a change in other logically unrelated elements. Additionally, elements that are logically related all change predictably and uniformly, and are thus kept in sync. Besides using methods and subroutines in their code, Thomas and Hunt rely on code generators, automatic build systems, and scripting languages to observe the DRY principle across layers.
* [PImpl - cppreference.com](https://en.cppreference.com/w/cpp/language/pimpl)
	* "Pointer to implementation" or "pImpl" is a C++ programming technique[1] that removes implementation details of a class from its object representation by placing them in a separate class, accessed through an opaque pointer
	* This technique is used to construct C++ library interfaces with stable ABI and to reduce compile-time dependencies.
* [Race condition](https://en.wikipedia.org/wiki/Race_condition)
	* A race condition or race hazard is the condition of an electronics, software, or other system where the system's substantive behavior is dependent on the sequence or timing of other uncontrollable events. It becomes a bug when one or more of the possible behaviors is undesirable.
	* [multithreading - What is a race condition? - Stack Overflow](https://stackoverflow.com/questions/34510/what-is-a-race-condition)
		* A race condition occurs when two or more threads can access shared data and they try to change it at the same time. Because the thread scheduling algorithm can swap between threads at any time, you don't know the order in which the threads will attempt to access the shared data. Therefore, the result of the change in data is dependent on the thread scheduling algorithm, i.e. both threads are "racing" to access/change the data.
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
  * [RAII - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/RAII)
    * RAII全称为Resource Acquisition Is Initialization，它是在一些面向对象语言中的一种惯用法。RAII源于C++，在Java，C#，D，Ada，Vala和Rust中也有应用。1984-1989年期间，比雅尼·斯特劳斯特鲁普和安德鲁·柯尼希在设计C++异常时，为解决资源管理时的异常安全性而使用了该用法，后来比雅尼·斯特劳斯特鲁普将其称为RAII。
    * RAII要求，资源的有效期与持有资源的对象的生命期严格绑定，即由对象的构造函数完成资源的分配(获取)，同时由析构函数完成资源的释放。在这种要求下，只要对象能正确地析构，就不会出现资源泄露问题。
  * [RAII_百度百科](http://baike.baidu.com/link?url=cZ_EqWVrbxk9AIOFJ-9IrYDMRVaeEtubQlI-JKvquwrTkm9clZshXDLN9WM1Kth0W98ADgTckgMMEAwmQ3gZDq)
    * RAII，也称为“资源获取就是初始化”，是c++等编程语言常用的管理资源、避免内存泄露的方法。它保证在任何情况下，使用对象时先构造对象，最后析构对象。
    * [对象所有资源 (RAII)](https://msdn.microsoft.com/zh-cn/library/hh438480.aspx)
* RTTI
  * RTTI事指运行时类型识别（Run-time type identification）在只有一个指向基类的指针或引用时确定一个对象的准确类型。
* [SOLID - Wikipedia](https://en.wikipedia.org/wiki/SOLID)
  * In software engineering, SOLID is a mnemonic acronym for five design principles intended to make software designs more understandable, flexible, and maintainable. The principles are a subset of many principles promoted by American software engineer and instructor Robert C. Martin,[1][2][3] first introduced in his 2000 paper Design Principles and Design Patterns.[2][4]
  * The SOLID concepts are
    * The Single-responsibility principle: "There should never be more than one reason for a class to change."[5] In other words, every class should have only one responsibility.[6]
    * The Open–closed principle: "Software entities ... should be open for extension, but closed for modification."[7]
    * The Liskov substitution principle: "Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it."[8] See also design by contract.[8]
    * The Interface segregation principle: "Many client-specific interfaces are better than one general-purpose interface."[9][4]
    * The Dependency inversion principle: "Depend upon abstractions, [not] concretions."[10][4]
* [The rule of three/five/zero - cppreference.com](https://en.cppreference.com/w/cpp/language/rule_of_three)
	* Rule of three
		* If a class requires a user-defined destructor, a user-defined copy constructor, or a user-defined copy assignment operator, it almost certainly requires all three.
		* Because C++ copies and copy-assigns objects of user-defined types in various situations (passing/returning by value, manipulating a container, etc), these special member functions will be called, if accessible, and if they are not user-defined, they are implicitly-defined by the compiler.
		* The implicitly-defined special member functions are typically incorrect if the class manages a resource whose handle is an object of non-class type (raw pointer, POSIX file descriptor, etc), whose destructor does nothing and copy constructor/assignment operator performs a "shallow copy" (copy the value of the handle, without duplicating the underlying resource).
		* Classes that manage non-copyable resources through copyable handles may have to declare copy assignment and copy constructor private and not provide their definitions or define them as deleted. This is another application of the rule of three: deleting one and leaving the other to be implicitly-defined will most likely result in errors.
	* Rule of five
		* Because the presence of a user-defined (or = default or = delete declared) destructor, copy-constructor, or copy-assignment operator prevents implicit definition of the move constructor and the move assignment operator, any class for which move semantics are desirable, has to declare all five special member functions
		* Unlike Rule of Three, failing to provide move constructor and move assignment is usually not an error, but a missed optimization opportunity.
	* Rule of zero
		* Classes that have custom destructors, copy/move constructors or copy/move assignment operators should deal exclusively with ownership (which follows from the Single Responsibility Principle). Other classes should not have custom destructors, copy/move constructors or copy/move assignment operators[1].
		* This rule also appears in the C++ Core Guidelines as [C.20: If you can avoid defining default operations, do](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c20-if-you-can-avoid-defining-default-operations-do).
		* When a base class is intended for polymorphic use, its destructor may have to be declared public and virtual. This blocks implicit moves (and deprecates implicit copies), and so the special member functions have to be declared as defaulted[2].
		* however, this makes the class prone to slicing, which is why polymorphic classes often define copy as deleted (see [C.67: A polymorphic class should suppress copying](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c67-a-polymorphic-class-should-suppress-public-copymove) in C++ Core Guidelines), which leads to the following generic wording for the Rule of Five:
		* [C.21: If you define or =delete any default operation, define or =delete them all](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c21-if-you-define-or-delete-any-copy-move-or-destructor-function-define-or-delete-them-all)
	* [Rule of three (C++ programming) - Wikipedia](https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming))
* [Zero-overhead principle - cppreference.com](https://en.cppreference.com/w/cpp/language/Zero-overhead_principle)
	* The zero-overhead principle is a C++ design principle that states:
		* You don't pay for what you don't use.
		* What you do use is just as efficient as what you could reasonably write by hand.
	* In general, this means that no feature should be added to C++ that would impose any overhead, whether in time or space, greater than a programmer would introduce without using the feature.
	* The only two features in the language that do not follow the zero-overhead principle are [runtime type identification](https://en.cppreference.com/w/cpp/language/typeid) and [exceptions](https://en.cppreference.com/w/cpp/language/exceptions), and are why most compilers include a switch to turn them off.

## CODE

* [c-cpp/面试总结之C-C++ at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E9%9D%A2%E8%AF%95%E6%80%BB%E7%BB%93%E4%B9%8BC-C%2B%2B)
* [C/C++ 10 大常见基础算法](https://mp.weixin.qq.com/s/tGGNGpaRcWwKiNoQyo-TXw)
* 用C语言，将一个数字乘以7倍的效率最快的方法是什么？ 
  * 先左移三位（*8）然后再减去原值：X << 3 – X

### 判断输出结果

#### Const

```c++
/*
What's wrong, and how to fix?

Const variable aaa should be initialized when being defined.
To fix it, we could take any one action as below.
1) Initialize aaa in construct function
2) Assign a value in this statement const int aaa;
3) Remove keyword const
*/

class TryConst
{
public:
    TryConst () {}
private:
    const int aaa;
};
```

#### Static

```c++
/*
What's wrong, and how to fix?

Static variable could not be initialized inside the class.
To fix it, we could initialize it outside the class, e.g. int aa = 0.
*/

class TryStatic
{
public:
    TryStatic () : aa (0) {}
private:
    static int aa;
};

// int TryStatic::aa = 1;
```

#### String

```c++
#include <iostream>
using namespace std;

void compare_str()
{
    string s1 = "Abc";
    string s2 = "A";

    s1 = s1 + s2;
    s2 = s2 + s1;

    cout << s1 << endl;  // AbcA
    cout << s2 << endl;  // AAbcA
    cout << s1.length() << endl; // 4
    cout << s2.length() << endl; // 5
    cout << (s1.compare(s2) > 0) << endl; // 1
}

int main()
{
    compare_str();

    return 0;
}
```
```c++
#include <iostream>
using namespace std;

void f(string x, string& y)
{
    x += "x";
    y += "y";

    cout << x << " " << y << " ";
}

int main()
{
    string x = "x";
    string y = "y";

    f(x, y);
    cout << x << " " << y << "\n";

    return 0;
}

// xx yy x yy
```

#### Pointer

* [一道C语言指针的题目](https://mp.weixin.qq.com/s/KqbMSR_rYD7ziWt-YsrYRQ)
```c++
#include <iostream>
using namespace std;

int foo(int &p)
{
    ++ p;

    return p ++;
}

int main()
{
    int a = 1, b, d;
    int * const c = &d;
    b = foo(a);
    *c = 10;

    cout << a << endl;  // 3
    cout << b << endl;  // 2
    cout << *c << endl; // 10
    cout << d << endl;  // 10

    return 0;
}
```

#### Class

```c++
/*
What's wrong, and how to fix?

~P2 would not be executed, which would cause memory leak.
To fix it, define ~P1() as virtual ~P1().
*/

class P1
{
public:
    P1 () { p = new char [10]; }
    ~P1 () { delete [] p; }
private:
    char * p;
};
class P2 : public P1
{
public:
    P2 () { q = new char [20]; }
    ~P2 () { delete [] q; }
private:
    char * q;
};

int main(int argc, char* argv[])
{
    P1 * pp = new P2;
    ...
    delete pp;
    return 0;
}
```
```c++
/*
What's wrong, and how to fix?

When multiple access, the Next function will make the current pointer behave unexpected. 
E.g. A is calling doSomething(), and B issues Next(). When A issues Next(), 
actually the current node is not current->next but current->next->next.
To fix it, add a parameter for Next() => Next(Thing *currentNode) 
so that it could make sure that the next node would not be changed by others.
*/

#include <iostream>
using namespace std;

class Thing {
public:
    void    doSomething() { cout << __func__ << endl; }
    Thing*    next;
};

class Things {
public:
    Things(Thing *myThing) : head(myThing), current(myThing) {}

    Thing*  First() {
        return head;
    }

    Thing*  Next() {
        current = current->next;
        return current;
    }

    bool OK() {
        if (current != nullptr)
            return true;
        else
            return false;
    }

private:
    Thing *head, *current;
};

int main()
{
    Thing*   myThing = new Thing;
    Things myThings(myThing);

    // This is how we do with class Things
    /*
        doSomething
        */
    for (Thing *ptr = myThings.First(); myThings.OK(); myThings.Next()) {
        ptr->doSomething();
    }

    return 0;
}
```
```c++
/*
What will be printed, and why?

In 32-bit environment, size of TestSize2 = 12.
12 = TestSize2 virtual table pointer(4) + TestSize2::b(4) + TestSize1::a(4)
*/

class TestSize1
{
public:
    TestSize1 () : a (0) {}
    virtual void F () = 0;
private:
    int a;
};
class TestSize2 : public TestSize1
{
public:
    TestSize2 () : b (1) {}
    virtual void F () { b = 3; }
private:
    int b;
};
int main(int argc, char* argv[])
{
    printf ("size of TestSize2 = %d", sizeof (TestSize2));
    return 0;
}
```
```c++
/*
What will be printed, and why?

data=1.
Because class B inherits class A, it would call constructor of A and B when constructing b. 
When calling the constructor of A, A::SetData() was called, so data was set to 1.
*/

class A
{
public:
    A () : data (0) { SetData (); printf ("data=%d", data); }
    virtual void SetData () { data = 1; }
protected:
    int data;
};

class B : public A
{
public:
    B () {}
    virtual void SetData () { data = 2; }
};

int main(int argc, char* argv[])
{
    B b;
    return 0;
}
```
```c++
#include <iostream>

class A
{
public:
    A() { std::cout << "A()\n"; }
    ~A() { std::cout << "~A()\n"; }
};

class B : public A
{
public:
    B() { std::cout << "B()\n"; }
    ~B() { std::cout << "~B()\n"; }
};

int main()
{
    B b;    // A() B()
    A* p = new B;   // A() B()
    delete p;   // ~A()

    return 0;
}   // ~B() ~A()
```

#### STL

```c++
#include <iostream>
using namespace std;

int main()
{
    int a[] = {4, 5, 6};

    cout << *a << endl; // 4

    return 0;
}
```
```c++
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};
    auto it = v.begin();
    cout << *it << endl;    // 1
    v.push_back(4);
    cout << *it << endl;    // undefined behavior

    return 0;
}
```
```c++
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(2);

    // 2 3
    for (auto it = s.begin(); it != s.end(); ++ it) {
        cout << *it << endl;
    }

    return 0;
}
```
