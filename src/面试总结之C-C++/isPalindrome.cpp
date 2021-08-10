//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>    // reverse
#include <cctype>       // toupper, isalnum
using namespace std;

class Solution
{
public:
    // Reverse the whole string
    int isPalindrome(const string& str)
    {
        if (str.empty()) return false;
        
        string sTemp = str;
        
        cout << sTemp << endl;
        
        // STL algorithm
        reverse(sTemp.begin(), sTemp.end());
        
        cout << sTemp << endl;
        
        return (sTemp == str);
    }
    
    // Considering only alphanumeric characters and ignoring cases
    int isPalindrome2(const string& str)
    {
        if (str.empty()) return false;
        
        size_t start = 0, end = str.size() - 1;
        
        while (start < end)
        {
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
    Solution    testSolution;
    
    auto words = {"A man, a plan, a canal: Panama", "race a car", "", "a b a"};
    
    for (auto word : words)
        cout << testSolution.isPalindrome(word) << endl;

    cout << endl;
    
    for (auto word : words)
        cout << testSolution.isPalindrome2(word) << endl;

    return 0;
}

/*
判断一个字符串是不是回文串

注意给出两种定义：一种是严格回文串，完美匹配；另一种只考虑数字字母，且大小写不敏感 
LeetCode 125. Valid Palindrome
http://www.cnblogs.com/pegasus923/p/5612541.html
toupper - C++ Reference
http://www.cplusplus.com/reference/cctype/toupper/
isalnum - C++ Reference
http://www.cplusplus.com/reference/cctype/isalnum/?kw=isalnum
reverse - C++ Reference
http://www.cplusplus.com/reference/algorithm/reverse/

A man, a plan, a canal: Panama
amanaP :lanac a ,nalp a ,nam A
0
race a car
rac a ecar
0
0
a b a
a b a
1

1
0
0
1
Program ended with exit code: 0
*/
