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
