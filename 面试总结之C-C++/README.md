# 面试总结之C/C++

* [学习笔记之IKM C++ 11 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8465745.html)
* [学习笔记之100 TOP Ikm C++ Online Test Questions - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8533582.html)
* [面试总结之指针 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/5581823.html)
* [[ZZ]软件工程师 C/C++笔试题 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2010/10/05/1842918.html)

## RESOURCES
* [STL Time Complexity (Detailed)](http://www.cplusplus.com/reference/stl/)
* [STL Time Complexity (Summary)](http://john-ahlgren.blogspot.com/2013/10/stl-container-performance.html)
* [Data Structure and Algorithms Cheat Sheet](https://github.com/gibsjose/cpp-cheat-sheet/blob/master/Data%20Structures%20and%20Algorithms.md)
* [C++ 面试突击 - LeetBook - 力扣（LeetCode）全球极客挚爱的技术成长平台](https://leetcode-cn.com/leetbook/detail/cpp-interview-highlights/)
* [C 语言与 C++ 面试知识总结 (qq.com)](https://mp.weixin.qq.com/s/x6DMkh54NQBOlDMqNxvf7w)
  * [huihut/interview: 📚 C/C++ 技术面试基础知识总结](https://github.com/huihut/interview#effective)
    * [Effective C++](https://github.com/huihut/interview#effective-c)
    * [More Effective c++](https://github.com/huihut/interview#more-effective-c)
* [这些C++工程师面试题你都会了吗？](https://mp.weixin.qq.com/s/JA3ZrRwS_KllNdJxVMQRdA)
  * [你们要的C++面试题答案来了--基础篇](https://mp.weixin.qq.com/s/YRo5Lm9pbbZnjY1DQfW6yw)
* [2021 年 C++ 岗就业如何？附学习路线图 (qq.com)](https://mp.weixin.qq.com/s/g6dHxYN7jhw_bLXqnFdEyA)

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
* C structure，数据结构里有inter,char,float时，数据的内存布局会是怎样
  * 数据会以4位或是8位，16位等等方式对齐
* 为什么会有这种对齐
  * 这是因为机器寻址就是按照这种方式进行的，这样可以一次而不是多次读取一定数据
* [面试常考，项目易错！C/C++中的字节对齐 (qq.com)](https://mp.weixin.qq.com/s/F0QIjH-fMe7KP-CtlQVbHA)
* C pointer,指向数据结构与指向char的指针有区别吗
  * 它们正做+1运算时产生的位移不同
* delete数组指针，只delete第一个后果
  * 内存泄漏 
* 智能指针
  * 智能指针是为了解决动态内存分配时带来的内存泄漏以及多次释放同一块内存空间而提出的。C++11 中封装在了 <memory> 头文件中。
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
    * shared_ptr
      * Reference-counted smart pointer. Use when you want to assign one raw pointer to multiple owners, for example, when you return a copy of a pointer from a container but want to keep the original. The raw pointer is not deleted until all shared_ptr owners have gone out of scope or have otherwise given up ownership. The size is two pointers; one for the object and one for the shared control block that contains the reference count. Header file: \<memory\>. For more information, see [How to: Create and use shared_ptr instances | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-shared-ptr-instances?view=msvc-160) and [shared_ptr Class](https://docs.microsoft.com/en-us/cpp/standard-library/shared-ptr-class?view=msvc-160).
    * weak_ptr
      * Special-case smart pointer for use in conjunction with shared_ptr. A weak_ptr provides access to an object that is owned by one or more shared_ptr instances, but does not participate in reference counting. Use when you want to observe an object, but do not require it to remain alive. Required in some cases to break circular references between shared_ptr instances. Header file: \<memory\>. For more information, see [How to: Create and use weak_ptr instances | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-weak-ptr-instances?view=msvc-160) and [weak_ptr Class](https://docs.microsoft.com/en-us/cpp/standard-library/weak-ptr-class?view=msvc-160).
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
|Could not use Template	|Could use Template	|-

* volatile
  * [volatile_百度百科](http://baike.baidu.com/link?url=gPm-SmXKapujjcPjO3COGYDPSvH4VPOMabuV61XG7kM1kMhwX1AnNxF5_VZDiq7fizEaEfpYKLRBVgRt99BxOK)
  * [volatile (C++)](https://msdn.microsoft.com/zh-cn/library/12a04hfd.aspx)

## 面向对象

* 面向对象的三大特性：
  * 封装(Encapsulation)：将具体的实现过程和数据封装成一个函数，只能通过接口进行访问，降低耦合性。
  * 继承(Inheritance)：子类继承父类的特征和行为，子类有父类的非 private 方法或成员变量，子类可以对父类的方法进行重写，增强了类之间的耦合性，但是当父类中的成员变量、成员函数或者类本身被 final 关键字修饰时，修饰的类不能继承，修饰的成员不能重写或修改。
  * 多态(Polymorphism)：多态就是不同继承类的对象，对同一消息做出不同的响应，基类的指针指向或绑定到派生类的对象，使得基类指针呈现不同的表现方式。
* 重载、重写、隐藏的区别
  * 重载(Overload)：是指同一可访问区内被声明几个具有不同参数列（参数的类型、个数、顺序）的同名函数，根据参数列表确定调用哪个函数，重载不关心函数返回类型。
  * 隐藏(Overwrite / Hide)：是指派生类的函数屏蔽了与其同名的基类函数，主要只要同名函数，不管参数列表是否相同，基类函数都会被隐藏。
  * 重写(覆盖)(Override)：是指派生类中存在重新定义的函数。函数名、参数列表、返回值类型都必须同基类中被重写的函数一致，只有函数体不同。派生类调用时会调用派生类的重写函数，不会调用被重写函数。重写的基类中被重写的函数必须有 virtual 修饰。
  * 重写和重载的区别：
    * 范围区别：对于类中函数的重载或者重写而言，重载发生在同一个类的内部，重写发生在不同的类之间（子类和父类之间）。
    * 参数区别：重载的函数需要与原函数有相同的函数名、不同的参数列表，不关注函数的返回值类型；重写的函数的函数名、参数列表和返回值类型都需要和原函数相同，父类中被重写的函数需要有 virtual 修饰。
    * virtual 关键字：重写的函数基类中必须有 virtual关键字的修饰，重载的函数可以有 virtual 关键字的修饰也可以没有。
  * 隐藏和重写，重载的区别：
    * 范围区别：隐藏与重载范围不同，隐藏发生在不同类中。
    * 参数区别：隐藏函数和被隐藏函数参数列表可以相同，也可以不同，但函数名一定相同；当参数不同时，无论基类中的函数是否被 virtual 修饰，基类函数都是被隐藏，而不是重写。
* C++虚拟机制
  * 用来实现多态
* 多重继承
  * 可以为一个派生类指定多个基类，这样的继承结构称为多重继承或多继承
  * Java/C#中没有多继承，C++中也应避免使用
  * 当两个父类有同样的成员时会带来模糊性，这样导致了名称冲突(name collision)，在编译时将予以拒绝，也称之为菱形继承
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
* 虚继承
  * [虚继承 - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/%E8%99%9A%E7%BB%A7%E6%89%BF)
    * 虚继承 是面向对象编程中的一种技术，是指一个指定的基类，在继承体系结构中，将其成员数据实例共享给也从这个基类型直接或间接派生的其它类。
    * 举例来说：假如类A和类B各自从类X派生（非虚继承且假设类X包含一些数据成员），且类C同时多继承自类A和B，那么C的对象就会拥有两套X的实例数据（可分别独立访问，一般要用适当的消歧义限定符）。但是如果类A与B各自虚继承了类X，那么C的对象就只包含一套类X的实例数据。对于这一概念典型实现的编程语言是C++。
    * 这一特性在多重继承应用中非常有用，可以使得虚基类对于由它直接或间接派生的类来说，拥有一个共同的基类对象实例。避免由于带有歧义的组合而产生的问题（如“菱形继承问题”）。其原理是，间接派生类（C）穿透了其父类（上面例子中的A与B），实质上直接继承了虚基类X。
    * 这一概念一般用于“继承”在表现为一个整体，而非几个部分的组合时。在C++中，基类可以通过使用关键字virtual来声明虚继承关系。
    * 虚基类的初始化
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

    class A                     {
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


    int main(int argc, char ** argv){
        D d("d");
        d.test(); // hello from A: d_a

        E e("e");
        e.test(); // hello from A: e_a
    }    
    ```
  * 虚继承用于解决多继承条件下的菱形继承问题（浪费存储空间、存在二义性）。
  * 底层实现原理与编译器相关，一般通过虚基类指针和虚基类表实现，每个虚继承的子类都有一个虚基类指针（占用一个指针的存储空间，4字节）和虚基类表（不占用类对象的存储空间）（需要强调的是，虚基类依旧会在子类里面存在拷贝，只是仅仅最多存在一份而已，并不是不在子类里面了）；当虚继承的子类被当做父类继承时，虚基类指针也会被继承。
  * 实际上，vbptr 指的是虚基类表指针（virtual base table pointer），该指针指向了一个虚基类表（virtual table），虚表中记录了虚基类与本类的偏移地址；通过偏移地址，这样就找到了虚基类成员，而虚继承也不用像普通多继承那样维持着公共基类（虚基类）的两份同样的拷贝，节省了存储空间。
* 菱形继承
  * The "diamond problem" (sometimes referred to as the "Deadly Diamond of Death") is an ambiguity that arises when two classes B and C inherit from A, and class D inherits from both B and C. If there is a method in A that B and C have overridden, and D does not override it, then which version of the method does D inherit: that of B, or that of C?
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
* 多态
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
      * 动态多态（dynamic polymorphism）:生效于运行期。
      * 静态多态（static polymorphism）：将不同的特殊行为和单个泛化记号相关联，由于这种关联处理于编译期而非运行期，因此被称为“静态”。可以用来实现类型安全、运行高效的同质对象集合操作。C++ STL不采用动态多态来实现就是个例子。
    * 对于C++语言，带变量的宏和函数重载机制也允许将不同的特殊行为和单个泛化记号相关联。然而，习惯上并不将这种函数多态、宏多态展现出来的行为称为多态（或静态多态），否则就连C语言也具有宏多态了。谈及多态时，默认就是指动态多态，而静态多态则是指基于模板的多态。
  * 什么是多态？多态如何实现？
    * 多态：多态就是不同继承类的对象，对同一消息做出不同的响应，基类的指针指向或绑定到派生类的对象，使得基类指针呈现不同的表现方式。在基类的函数前加上 virtual 关键字，在派生类中重写该函数，运行时将会根据对象的实际类型来调用相应的函数。如果对象类型是派生类，就调用派生类的函数；如果对象类型是基类，就调用基类的函数。
    * 实现方法：多态是通过虚函数实现的，虚函数的地址保存在虚函数表中，虚函数表的地址保存在含有虚函数的类的实例对象的内存空间中。
    * 实现过程：
      * 在类中用 virtual 关键字声明的函数叫做虚函数；
      * 存在虚函数的类都有一个虚函数表，当创建一个该类的对象时，该对象有一个指向虚函数表的虚表指针（虚函数表和类对应的，虚表指针是和对象对应）；
      * 当基类指针指向派生类对象，基类指针调用虚函数时，基类指针指向派生类的虚表指针，由于该虚表指针指向派生类虚函数表，通过遍历虚表，寻找相应的虚函数。

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
     virtual void pure_virtual(); // no longer abstract, this class may be
                                  // instantiated.
   };

   void Child::pure_virtual() {
     Abstract::pure_virtual(); // the implementation in the abstract class
                               // is executed
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
* 指针和引用的初始化区别
  * 引用被创建的同时必须被初始化（指针则可以在任何时候被初始化）。
  * 不能有NULL 引用，引用必须与合法的存储单元关联（指针则可以是NULL）。
  * 一旦引用被初始化，就不能改变引用的关系（指针则可以随时改变所指的对象）。
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
* [STL](https://github.com/huihut/interview#-stl)
* STL containers内部实现的数据结构
  * Sequence containers
    * [array](https://github.com/huihut/interview/tree/master/STL#array) / [vector](https://github.com/huihut/interview/tree/master/STL#vector) ：数组
    * [deque](https://github.com/huihut/interview/tree/master/STL#deque) : 双端队列
    * [forward_list](https://github.com/huihut/interview/tree/master/STL#forward_list) : 单向链表
    * [list](https://github.com/huihut/interview/tree/master/STL#list) ：双向链表
  * Container adaptors
    * [stack](https://github.com/huihut/interview/tree/master/STL#stack) / [queue](https://github.com/huihut/interview/tree/master/STL#queue) : deque / list
    * [priority_queue](https://github.com/huihut/interview/tree/master/STL#priority_queue) : vector + max-heap
  * Associative containers
    * [set](https://github.com/huihut/interview/tree/master/STL#set) / [multiset](https://github.com/huihut/interview/tree/master/STL#multiset) / [map](https://github.com/huihut/interview/tree/master/STL#map)  / [multimap](https://github.com/huihut/interview/tree/master/STL#multimap) ：红黑树([Red–black tree - Wikipedia](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree))
  * Unordered associative containers
    * [unordered_set](https://github.com/huihut/interview/tree/master/STL#unordered_set) / [unordered_multiset](https://github.com/huihut/interview/tree/master/STL#unordered_multiset) / [unordered_map](https://github.com/huihut/interview/tree/master/STL#unordered_map) / [unordered_multimap](https://github.com/huihut/interview/tree/master/STL#unordered_multimap) ：Hash表
  * [Containers - C++ Reference](http://www.cplusplus.com/reference/stl/)
  * [STL实现的底层数据结构简介 - CSDN博客](http://blog.csdn.net/huangkq1989/article/details/7277282)
* list v.s. vector
* class std::string
  * [string - C++ Reference](https://www.cplusplus.com/reference/string/string/)
  * [C++之旅-string](https://mp.weixin.qq.com/s/P2nd-9fmhpn20bB45hBioQ)
* [C++之旅-vector](https://mp.weixin.qq.com/s/Pizq2-UcJi7rJLTwwxtRlw)
* Object Slicing
  * [Object slicing - Wikipedia](https://en.wikipedia.org/wiki/Object_slicing)
  * In C++ programming, object slicing occurs when an object of a subclass type is copied to an object of superclass type: the superclass copy will not have any of the member variables defined in the subclass. These variables have, in effect, been "sliced off".) More subtly, object slicing can also occur when an object of a subclass type is copied to an object of the same type by the superclass's assignment operator, in which case some of the target object's member variables will retain their original values instead of being copied from the source object.
  * This issue is not inherently unique to C++, but it does not occur naturally in most other object-oriented languages — even C++'s relatives such as D, Java, and C# — because copying of objects is not a basic operation in those languages. (Instead, those languages prefer to manipulate objects via implicit references, such that only copying the reference is a basic operation.) In C++, by contrast, objects are copied automatically whenever a function takes an object argument by value or returns an object by value. Additionally, due to the lack of garbage collection in C++, programs will frequently copy an object whenever the ownership and lifetime of a single shared object would be unclear; for example, inserting an object into a standard-library collection, such as a std::vector, actually involves inserting a copy into the collection.
  * [c++对象切割 - CSDN博客](https://blog.csdn.net/weiwangchao_/article/details/4702241)
* 异常,异常的功能
  * 保证异常的健壮性，结构化处理出错信息
* RAII
  * [RAII - 维基百科，自由的百科全书](https://zh.wikipedia.org/wiki/RAII)
    * RAII全称为Resource Acquisition Is Initialization，它是在一些面向对象语言中的一种惯用法。RAII源于C++，在Java，C#，D，Ada，Vala和Rust中也有应用。1984-1989年期间，比雅尼·斯特劳斯特鲁普和安德鲁·柯尼希在设计C++异常时，为解决资源管理时的异常安全性而使用了该用法，后来比雅尼·斯特劳斯特鲁普将其称为RAII。
    * RAII要求，资源的有效期与持有资源的对象的生命期严格绑定，即由对象的构造函数完成资源的分配(获取)，同时由析构函数完成资源的释放。在这种要求下，只要对象能正确地析构，就不会出现资源泄露问题。
  * [RAII_百度百科](http://baike.baidu.com/link?url=cZ_EqWVrbxk9AIOFJ-9IrYDMRVaeEtubQlI-JKvquwrTkm9clZshXDLN9WM1Kth0W98ADgTckgMMEAwmQ3gZDq)
    * RAII，也称为“资源获取就是初始化”，是c++等编程语言常用的管理资源、避免内存泄露的方法。它保证在任何情况下，使用对象时先构造对象，最后析构对象。
    * [对象所有资源 (RAII)](https://msdn.microsoft.com/zh-cn/library/hh438480.aspx)
* RTTI
  * RTTI事指运行时类型识别（Run-time type identification）在只有一个指向基类的指针或引用时确定一个对象的准确类型。

## CODE

* [c-cpp/面试总结之C-C++ at main · haoran119/c-cpp](https://github.com/haoran119/c-cpp/tree/main/%E9%9D%A2%E8%AF%95%E6%80%BB%E7%BB%93%E4%B9%8BC-C%2B%2B)
* 用C语言，将一个数字乘以7倍的效率最快的方法是什么？ 
  * 先左移三位（*8）然后再减去原值：X << 3 – X
