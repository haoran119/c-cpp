/*
删除字符串的首尾多余空格
利用STL方法，记得处理string::npos。执行结果注意string::npos的值。
注意对空格字符串输入“ ”，输出仍是“ ”，只删除首尾多余空格。
string::find_first_not_of - C++ Reference
    http://www.cplusplus.com/reference/string/string/find_first_not_of/
string::npos - C++ Reference
    http://www.cplusplus.com/reference/string/string/npos/
*/

//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2021/09/01.
//  Copyright © 2021年 Hao. All rights reserved.
//

#include <iostream>
// #include <string>
// #include <cstddef>        // std::size_t
using namespace std;

class Solution
{
public:
    void TrimSpaces(string& ioStr)
    {
        auto startPos = ioStr.find_first_not_of(" ");
        auto endPos = ioStr.find_last_not_of(" ");

        // npos is a static member constant value with the greatest possible value for an element of type size_t.
        // This constant is defined with a value of -1, which because size_t is an unsigned integral type, 
        // it is the largest possible representable value for this type.
        if (startPos == string::npos)
            startPos = 0;
        if (endPos == string::npos)
            endPos = 0;

        ioStr = ioStr.substr(startPos, endPos - startPos + 1);
    }
};

int main ()
{
    Solution testSolution;

    string  str[5] = {"  abc     ", "abc     ", "    abc", " ", ""};

    /*
    "abc"
    "abc"
    "abc"
    " "
    ""
    */
    for (auto i = 0; i < 5; i ++)
    {
        testSolution.TrimSpaces(str[i]);
        cout << "\"" << str[i] << "\"" << endl;
    }

    return 0;
}
