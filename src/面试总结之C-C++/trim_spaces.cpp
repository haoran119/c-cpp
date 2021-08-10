//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstddef>        // std::size_t
using namespace std;

class Solution
{
public:
    void TrimSpaces(string& ioStr)
    {
        size_t  startPos = ioStr.find_first_not_of(" ");
        size_t  endPos = ioStr.find_last_not_of(" ");

        cout << startPos << "\n" << endPos << endl;

        // npos is a static member constant value with the greatest possible value for an element of type size_t.
        // This constant is defined with a value of -1, which because size_t is an unsigned integral type, it is the largest possible representable value for this type.
        if (startPos == string::npos)
            startPos = 0;
        if (endPos == string::npos)
            endPos = 0;

        cout << startPos << "\n" << endPos << endl;

        ioStr = ioStr.substr(startPos, endPos - startPos + 1);
    }
};

int main ()
{
    Solution testSolution;

    string  str[5] = {"  abc     ", "abc     ", "    abc", " ", ""};

    for (auto i = 0; i < 5; i ++)
    {
        testSolution.TrimSpaces(str[i]);
        cout << "\"" << str[i] << "\"" << "\n" << endl;
    }

    return 0;
}

/*
删除字符串的首尾多余空格

利用STL方法，记得处理string::npos。
注意对空格字符串输入“ ”，输出仍是“ ”，只删除首尾多余空格。
string::find_first_not_of - C++ Reference
http://www.cplusplus.com/reference/string/string/find_first_not_of/
string::npos - C++ Reference
http://www.cplusplus.com/reference/string/string/npos/

执行结果注意string::npos的值。
4
4
"abc"
2
2
"abc"
6
6
"abc"
18446744073709551615
0
" "
18446744073709551615
0
""

Program ended with exit code: 0
*/
