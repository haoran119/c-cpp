// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

// #include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
#include <functional>
#include <iostream>
#include <string>

std::string ltrim(const std::string&);
std::string rtrim(const std::string&);


int main()
{
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = std::stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    std::string num[] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n > 9)
        std::cout << num[0] << std::endl;
    else
        std::cout << num[n] << std::endl;

    return 0;
}

std::string ltrim(const std::string& str) {
    std::string s(str);

    s.erase(
        s.begin(),
        std::find_if(s.begin(),
                    s.end(),
                    [](unsigned char c) -> bool {
                        // return std::not_fn(std::isspace(c));
                        return std::isspace(c) == 0;
                    })
    );

    return s;
}

std::string rtrim(const std::string& str) {
    std::string s(str);

    s.erase(
        std::find_if(s.rbegin(),
                    s.rend(),
                    [](unsigned char c) -> bool {
                        // return std::not_fn(std::isspace(c));
                        return std::isspace(c) == 0;
                    }).base(),
        s.end()
    );

    return s;
}
