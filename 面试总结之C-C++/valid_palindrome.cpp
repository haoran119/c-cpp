/*
判断一个字符串是不是回文串
注意给出两种定义：一种是严格回文串，完美匹配；另一种只考虑数字字母，且大小写不敏感
LeetCode 125. Valid Palindrome
    http://www.cnblogs.com/pegasus923/p/5612541.html
reverse - C++ Reference
    http://www.cplusplus.com/reference/algorithm/reverse/
isalnum - C++ Reference
    http://www.cplusplus.com/reference/cctype/isalnum/?kw=isalnum
toupper - C++ Reference
    http://www.cplusplus.com/reference/cctype/toupper/
*/

//
//  main.cpp
//  LEETCODE
//
//  Created by Hao on 2020/8/29.
//  Copyright © 2020年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution
{
public:
    // Reverse the whole string
    bool isPalindrome(const string &str)
    {
        if (str.empty())
            return false;

        string sTemp = str;

        reverse(sTemp.begin(), sTemp.end());

        return (sTemp == str);
    }

    // Considering only alphanumeric characters and ignoring cases
    bool isPalindrome2(const string &str)
    {
        if (str.empty())
            return false;

        size_t start = 0, end = str.size() - 1;

        while (start < end) {
            if (! isalnum(str.at(start)))
                ++ start;
            else if (! isalnum(str.at(end)))
                -- end;
            else if (toupper(str.at(start)) != toupper(str.at(end)))
                return false;
            else {
                ++ start;
                -- end;
            }
        }

        return true;
    }
};

int main(int argc, char* argv[])
{
    Solution    mySolution;

    auto words = {"A man, a plan, a canal: Panama", "race a car", "", "a b a"};

    // 0
    // 0
    // 0
    // 1
    for (auto word : words)
        cout << mySolution.isPalindrome(word) << endl;

    cout << endl;

    // 1
    // 0
    // 0
    // 1
    for (auto word : words)
        cout << mySolution.isPalindrome2(word) << endl;

    cout << endl;

    return 0;
}
