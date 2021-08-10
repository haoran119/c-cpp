# 面试总结之C/C++

* [interview/interview summary of C and CPP at master · haoran119/interview (github.com)](https://github.com/haoran119/interview/tree/master/interview%20summary%20of%20C%20and%20CPP)

* [学习笔记之IKM C++ 11 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8465745.html)

* [学习笔记之100 TOP Ikm C++ Online Test Questions - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/8533582.html)

* [面试总结之指针 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/p/5581823.html)

* [[ZZ]软件工程师 C/C++笔试题 - 浩然119 - 博客园 (cnblogs.com)](https://www.cnblogs.com/pegasus923/archive/2010/10/05/1842918.html)

* [2021 年 C++ 岗就业如何？附学习路线图 (qq.com)](https://mp.weixin.qq.com/s/g6dHxYN7jhw_bLXqnFdEyA)

## C

* C structure，数据结构里有inter,char,float时，数据的内存布局会是怎样
  * 数据会以4位或是8位，16位等等方式对齐
* 为什么会有这种对齐
  * 这是因为机器寻址就是按照这种方式进行的，这样可以一次而不是多次读取一定数据
* [面试常考，项目易错！C/C++中的字节对齐 (qq.com)](https://mp.weixin.qq.com/s/F0QIjH-fMe7KP-CtlQVbHA)
* C pointer,指向数据结构与指向char的指针有区别吗
  * 它们正做+1运算时产生的位移不同
* 函数指针,什么是函数指针，有什么用处
  * 函数指针是指向函数的指针，最大的用处是做回调函数，可以做接口函数，就像系统中断中的中断处理函数
* 设计一个函数，函数中有一段功能是对相关数据的结理，但具体的处理方式是不定的。
  * 将不定的处理方式设定成一个外部传来函数指针。(可以设计成这样 func(int a,int b，某种函数指针) )
* 如何对消息实现同步响应
  * 使用CALLBACK，回调函数
  * [CALLBACK_百度百科](https://baike.baidu.com/item/CALLBACK/813549?fr=aladdin)
* struct和union的区别：
  * 在存储多个成员信息时，编译器会自动给struct第个成员分配存储空间，struct可以存储多个成员信息，而union每个成员会用同一个存储空间，只能存储最后一个成员的信息。
  * 都是由多个不同的数据类型成员组成，但在任何同一时刻，Union只存放了一个被先选中的成员，而结构体的所有成员都存在。
  * 对于Union的不同成员赋值，将会对其他成员重写，原来成员的值就不存在了，而对于struct的不同成员赋值是互不影响的。
  * http://blog.csdn.net/firefly_2002/article/details/7954458
* struct和class的区别：
  * [Access Control and Constraints of Structures, Classes and Unions](https://msdn.microsoft.com/en-us/library/4a1hcx0y.aspx)

|Structures|Classes|Unions|
| - | - | - |
|class key is struct|class key is class|class key is union|
|Default access is public|	Default access is private|	Default access is public
|No usage constraints|	No usage constraints|	Use only one member at a time
|Default inheritance is public	|Default inheritance is private	|-
|Could not use Template	|Could use Template	|-

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
* #include “filename.h”和#include <filename.h>的区别
  * #include “filename.h”是指编译器将从当前工作目录上开始查找此文件
  * #include <filename.h>是指编译器将从标准库目录中开始查找此文件
* 用C语言，将一个数字乘以7倍的效率最快的方法是什么？ 
