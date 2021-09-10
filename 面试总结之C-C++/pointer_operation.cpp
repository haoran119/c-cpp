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
