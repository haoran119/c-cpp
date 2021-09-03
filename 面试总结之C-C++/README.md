# 面试总结之C/C++

* [学习笔记之IKM C++ 11 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8465745.html)
* [学习笔记之100 TOP Ikm C++ Online Test Questions - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8533582.html)
* [面试总结之指针 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/5581823.html)
* [[ZZ]软件工程师 C/C++笔试题 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2010/10/05/1842918.html)

## RESOURCES
* [C++ 面试突击 - LeetBook - 力扣（LeetCode）全球极客挚爱的技术成长平台](https://leetcode-cn.com/leetbook/detail/cpp-interview-highlights/)
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
  * 什么是多态？多态如何实现？
    * 多态：多态就是不同继承类的对象，对同一消息做出不同的响应，基类的指针指向或绑定到派生类的对象，使得基类指针呈现不同的表现方式。在基类的函数前加上 virtual 关键字，在派生类中重写该函数，运行时将会根据对象的实际类型来调用相应的函数。如果对象类型是派生类，就调用派生类的函数；如果对象类型是基类，就调用基类的函数。
    * 实现方法：多态是通过虚函数实现的，虚函数的地址保存在虚函数表中，虚函数表的地址保存在含有虚函数的类的实例对象的内存空间中。
    * 实现过程：
      * 在类中用 virtual 关键字声明的函数叫做虚函数；
      * 存在虚函数的类都有一个虚函数表，当创建一个该类的对象时，该对象有一个指向虚函数表的虚表指针（虚函数表和类对应的，虚表指针是和对象对应）；
      * 当基类指针指向派生类对象，基类指针调用虚函数时，基类指针指向派生类的虚表指针，由于该虚表指针指向派生类虚函数表，通过遍历虚表，寻找相应的虚函数。
    * 如果使用虚函数，父类指针指向子类对象并调用对象方法时，使用的是子类的方法;
    * 如果未使用虚函数，则是普通的重写，则父类指针指向子类对象时，使用的是父类的方法（与指针类型看齐）
    * 父类指针能指向子类对象，但是子类指针不能指向父类对象
* [C 语言与 C++ 面试知识总结 (qq.com)](https://mp.weixin.qq.com/s/x6DMkh54NQBOlDMqNxvf7w)
  * [huihut/interview: 📚 C/C++ 技术面试基础知识总结](https://github.com/huihut/interview#effective)
* [这些C++工程师面试题你都会了吗？](https://mp.weixin.qq.com/s/JA3ZrRwS_KllNdJxVMQRdA)
  * [你们要的C++面试题答案来了--基础篇](https://mp.weixin.qq.com/s/YRo5Lm9pbbZnjY1DQfW6yw)
* [2021 年 C++ 岗就业如何？附学习路线图 (qq.com)](https://mp.weixin.qq.com/s/g6dHxYN7jhw_bLXqnFdEyA)

## 编译内存相关

* #include “filename.h”和#include <filename.h>的区别
  * #include “filename.h”是指编译器将从当前工作目录上开始查找此文件
  * #include <filename.h>是指编译器将从标准库目录中开始查找此文件
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

* C++虚拟机制
  * 用来实现多态
* 菱形继承
```
#include <iostream>
using namespace std;

class Base
{
public:
	virtual void fun() { cout << "Base::fun()" << endl; }
};

// class Base1 : virtual public Base
class Base1 : public Base
{
public:
	virtual void fun() { cout << "Base1::fun()" << endl; }
};

// class Base2 : virtual public Base
class Base2 : public Base
{
public:
	virtual void fun() { cout << "Base2::fun()" << endl; }
};

class Derive : public Base1, public Base2
{
public:
	void fun() { cout << "Derive::fun()" << endl; }
};

int main()
{
	Base *p = new Derive(); // Compile error : ambiguous conversion from derived class 'Derive' to base class 'Base'
	p->fun(); // Derive::fun() 调用派生类中的虚函数
	return 0;
}
```

## 类相关

* Virtual：
  * 虚函数：派生类可以覆盖掉的函数，
  * 纯虚函数：只是个空函数，没有函数实现体。
* 抽象类能被实例化吗
  * 不能，只能继承抽象类，实现抽象类的函数
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
* STL containers内部实现的数据结构
  * vector ：数组
  * list ：链表
  * set / map / multimap / multiset ：红黑树
  * unordered_set / unordered_multiset / unordered_map / unordered_multimap ：Hash表
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
