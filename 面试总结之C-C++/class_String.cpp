/*
编写类String的构造函数、析构函数、拷贝构造函数和赋值函数。

* 类String的构造函数、析构函数和赋值函数 - dazhong159的专栏 - CSDN博客（http://blog.csdn.net/dazhong159/article/details/7894384）
* 输入输出运算符必须是普通非成员函数，而不能是类的成员函数。否则，它们的左侧运算对象将是我们的类的一个对象。假设输入输出运算符是某个类的成员，则它们也必须是istream或ostream的成员。然而，
这两个类属于标准库，并且我们无法给标准库中的类添加任何成员。当然，IO运算符通常需要读写类的非公有数据成员，所以IO运算符一般被声明为友元。
* 注意delete释放资源之前，最好先判断是否nullptf，否则释放为nullptr的指针会报错。此处拷贝构造与赋值函数中，因为m_data不会为nullptr，所以可以不判断。
* Overloading the << Operator for Your Own Classes | Microsoft Docs (https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-160)
*/

//
//  main.cpp
//  LEETCODE
//
//  Created by Hao on 2020/8/29.
//  Copyright © 2020年 Hao. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class String {
public:
    String ();                                                  // Default constructor
    String (const char *str);                                   // Parameterized constructor
    String (const String &other);                               // Copy constructor
    ~ String ();                                                // Destructor
    String& operator=(const String &other);                     // Overloaded assignment operator
    String& operator=(const char *other);                       // Overloaded assignment operator
    String& operator+=(const String &other);                    // Overloaded addition/assignment operator
    String& operator+=(const char *other);                      // Overloaded addition/assignment operator
    String operator+(const String &other) const;                // Overloaded addition operator
    String operator+(const char *other) const;                  // Overloaded addition operator
    friend ostream& operator<<(ostream &out, const String &s);  // Overloaded left shift operator
    friend istream& operator>>(istream &in, String &s);         // Overloaded right shift operator
    friend bool operator<(const String &s1, const String &s2);  // Overloaded less than operator

    char& operator[](int pos)                                   // Overloaded subscript operator
    {
        cout << __func__ << endl;

        int length = strlen(m_data);
        if (pos >= length)
            return m_data[length - 1];
        else
            return m_data[pos];
    }

    const char * data() const
    {
        // cout << __func__ << endl;

        return m_data;
    }

private:
    char *m_data;
};

String::String()
{
    cout << "Entry of String()" << endl;

    m_data = new char[1];
    *m_data = '\0';
}

String::String(const char *str)
{
    cout << "Entry of String(const char *str)" << endl;

    if (nullptr == str) {
        m_data = new char[1];
        *m_data = '\0';
    } else {
        int length = strlen(str);
        m_data = new char[length + 1];
        strcpy(m_data, str);
    }
}

String::String(const String &other)
{
    cout << "Entry of String(const String &other)" << endl;

    int length = strlen(other.m_data);
    m_data = new char[length + 1];
    strcpy(m_data, other.m_data);
}

String::~String()
{
    cout << __func__ << endl;

    delete[] m_data;
}

String& String::operator=(const String &other)
{
    cout << "Entry of operator=(const String &other)" << endl;

    // check self-assignment
    if (this == &other)
        return *this;

    // release original memory resources
    delete[] m_data;

    int length = strlen(other.m_data);
    m_data = new char[length + 1];
    strcpy(m_data, other.m_data);

    return *this;
}

String& String::operator=(const char *other)
{
    cout << "Entry of operator=(const char *other)" << endl;

    delete[] m_data;

    if (nullptr == other) {
        m_data = new char[1];
        *m_data = '\0';
    } else {
        int length = strlen(other);
        m_data = new char[length + 1];
        strcpy(m_data, other);
    }

    return *this;
}

String& String::operator+=(const String &other)
{
    cout << "Entry of operator+=(const String &other)" << endl;

    char *sTemp = m_data;
    int length = strlen(m_data) + strlen(other.m_data);

    m_data = new char[length + 1];
    strcpy(m_data, sTemp);
    strcat(m_data, other.m_data);

    delete[] sTemp;

    return *this;
}

String& String::operator+=(const char *other)
{
    cout << "Entry of operator+=(const char *other)" << endl;

    String sTemp(other);

    *this += sTemp;

    return *this;
}

String String::operator+(const String &other) const
{
    cout << "Entry of operator+(const String &other) const" << endl;

    String result;

    result += *this;
    result += other;

    return result;
}

String String::operator+(const char *other) const
{
    cout << "Entry of operator+(const char *other) const" << endl;

    String result = *this;

    result += other;

    return result;
}

ostream& operator<<(ostream &out, const String &str)
{
    cout << "Entry of operator<<(ostream &out, const String &str)" << endl;

    out << str.m_data << endl;

    return out;
}

istream& operator>>(istream &in, String &str)
{
    cout << "Entry of operator>>(istream &in, String &str)" << endl;

    char *sTemp = new char[1000];
    in >> sTemp;

    // Must check if input succeeds
    if (in) {
        delete[] str.m_data;

        int length = strlen(sTemp);
        str.m_data = new char[length + 1];
        strcpy(str.m_data, sTemp);
    } else {
        // if fails, set to the default value
        str = String();
    }

    delete[] sTemp;

    return in;
}

bool operator<(const String &s1, const String &s2)
{
    cout << "Entry of operator<(const String &s1, const String &s2)" << endl;

    if (strcmp(s1.m_data, s2.m_data) < 0)
        return true;

    return false;
}

int main()
{
    String s1;                  // Default constructor : String()
    String s2("Hello ");        // Parameterized constructor : String(const char *str)
    String s3 = s2;             // Copy constructor : String(const String &other)
    String s4 = "World ";       // Parameterized constructor : String(const char *str)

    cout << "s1 = \"" << s1.data() << "\"" << endl; // s1 = ""
    cout << "s2 = \"" << s2.data() << "\"" << endl; // s2 = "Hello "
    cout << "s3 = \"" << s3.data() << "\"" << endl; // s3 = "Hello "
    cout << "s4 = \"" << s4.data() << "\"" << endl; // s4 = "World "

    s1 = "hello world ";        // Overloaded assignment operator : operator=(const char *other)
    cout << "s1 = \"" << s1.data() << "\"" << endl; // s1 = "hello world "

    s3 = s1;                    // Overloaded assignment operator : operator=(const String &other)
    cout << "s3 = \"" << s3.data() << "\"" << endl; // s3 = "hello world "

    s1 += s3;                   // Overloaded addition/assignment operator : operator+=(const String &other)
    cout << "s1 = \"" << s1.data() << "\"" << endl; // s1 = "hello world hello world "

    // Entry of operator+=(const char *other)
    // Entry of String(const char *str)
    // Entry of operator+=(const String &other)
    // ~String
    s3 += "!";                  // Overloaded addition/assignment operator : operator+=(const char *other)
    cout << "s3 = \"" << s3.data() << "\"" << endl; // s3 = "hello world !"

    // Entry of operator+(const String &other) const
    // Entry of String()
    // Entry of operator+=(const String &other)
    // Entry of operator+=(const String &other)
    String s5 = s2 + s4;        // Overloaded addition operator : operator+(const String &other) const
    cout << "s5 = \"" << s5.data() << "\"" << endl; // s5 = "Hello World "

    // s5 = "Hello " + s3; // 没有与这些操作数匹配的 "+" 运算符 -- 操作数类型为:  const char [7] + StringC/C++

    // Entry of operator+(const char *other) const
    // Entry of String(const String &other)
    // Entry of operator+=(const char *other)
    // Entry of String(const char *str)
    // Entry of operator+=(const String &other)
    // ~String
    // Entry of operator=(const String &other)
    // ~String
    s5 = s2 + "World !";        // Overloaded addition operator : operator+(const char *other) const
    cout << "s5 = \"" << s5.data() << "\"" << endl; // s5 = "Hello World !"

    cin >> s1;                  // Overloaded left shift operator : operator>>(istream &in, String &str)
    // HelloWorld

    cout << s1 << endl;         // Overloaded right shift operator : operator<<(ostream &out, const String &str)
    // HelloWorld

    cout << (s1 < s2) << endl;  // Overloaded less than operator : operator<(const String &s1, const String &s2)
    // 0

    cout << (s1[5]) << endl;    // Overloaded index operator : operator[]
    // W

    // ~String
    // ~String
    // ~String
    // ~String
    // ~String

    return 0;
}
