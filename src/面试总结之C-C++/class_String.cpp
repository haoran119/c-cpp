#include <iostream>
#include <string>
using namespace std;

class String {
public :
    String (const char *str = NULL); // default initial value
    String (const String &other);
    ~ String (void);
    String & operator=(const String &other);
    friend ostream &operator<<(ostream &os, const String &str);
    friend istream &operator>>(istream &is, String &str);
private :
    char *m_data;
};

// 普通构造函数
String::String(const char *str)
{
    if (str == NULL) { // empty string
        m_data = new char[1];
        *m_data = '\0';
    } else {
        int length = strlen(str);
        m_data = new char[length + 1];
        strcpy(m_data, str);
    }
}

// 析构函数
String::~String(void)
{
    delete[] m_data;
}

// 拷贝构造函数
String::String(const String &other)
{
    int length = strlen(other.m_data);
    m_data = new char[length + 1];
    strcpy(m_data, other.m_data);
}

// 赋值函数
String & String::String::operator=(const String &other)
{
    // 检查自赋值
    if (this == &other)
        return *this;

    // 释放原有的内存资源
    delete[] m_data;

    int length = strlen(other.m_data);
    m_data = new char[length + 1];
    strcpy(m_data, other.m_data);

    return *this;
}

ostream &operator<<(ostream &os, const String &str)
{
    os << str.m_data;

    return os;
}

istream &operator>>(istream &is, String &str)
{
    char *sTemp = new char[1000];

    is >> sTemp;

    // Must check if input succeeds
    if (is) {
        delete[] str.m_data;

        int length = strlen(sTemp);
        str.m_data = new char[length + 1];
        strcpy(str.m_data, sTemp);
    } else
        str = String(); // if fail, set to the default value

    delete[] sTemp;

    return is;
}

int main()
{
    String s1;
    String s2("Test");
    String s3 = s2;

    cout << s1 << endl;

    s1 = s2;

    cout << s1 << endl;

    cin >> s1;

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    return 0;
}

/*
编写类String的构造函数、析构函数、拷贝构造函数和赋值函数。

类String的构造函数、析构函数和赋值函数 - dazhong159的专栏 - CSDN博客（http://blog.csdn.net/dazhong159/article/details/7894384）
输入输出运算符必须是普通非成员函数，而不能是类的成员函数。否则，它们的左侧运算对象将是我们的类的一个对象。假设输入输出运算符是某个类的成员，则它们也必须是istream或ostream的成员。然而，这两个类属于标准库，并且我们无法给标准库中的类添加任何成员。当然，IO运算符通常需要读写类的非公有数据成员，所以IO运算符一般被声明为友元。
注意delete释放资源之前，最好先判断是否nullptf，否则释放为nullptr的指针会报错。此处拷贝构造与赋值函数中，因为m_data不会为nullptr，所以可以不判断。
*/
