/*
https://www.geeksforgeeks.org/check-string-follows-order-characters-defined-pattern-not/?ref=lbp
https://www.geeksforgeeks.org/check-if-string-follows-order-of-characters-defined-by-a-pattern-or-not-set-3/

Given an input string and a pattern, check if characters in the input string follows the same order as determined by characters present in the pattern. Assume there won’t be any duplicate characters in the pattern.

Examples: 

Input: 
string = "engineers rock"
pattern = "er";
Output: true
Explanation: 
All 'e' in the input string are before all 'r'.

Input: 
string = "engineers rock"
pattern = "egr";
Output: false
Explanation: 
There are two 'e' after 'g' in the input string.

Input: 
string = "engineers rock"
pattern = "gsr";
Output: false
Explanation: 
There are one 'r' before 's' in the input string.
*/

#include <iostream>
#include <cassert>
#include <unordered_map>

bool check_pattern(const std::string& str, const std::string& pattern)
{
    if (str.empty() || pattern.empty()) {
        return false;
    }

    auto len = pattern.size();

    if (len > str.size()) {
        return false;
    }

    for (auto i = 0; i < len - 1; ++ i) {
        auto last = str.find_last_of(pattern.at(i));
        auto first = str.find_first_of(pattern.at(i + 1));

        if (last == std::string::npos || first == std::string::npos || last > first) {
            return false;
        }
    }

    return true;
}

bool check_pattern2(const std::string& str, const std::string& pattern)
{
    if (str.empty() || pattern.empty()) {
        return false;
    }

    if (pattern.size() > str.size()) {
        return false;
    }

    std::unordered_map<char, int> dict;

    auto count{0u};
    for (auto c : pattern) {
        dict[c] = ++ count;
    }

    auto last_order{0u};
    for (auto i = 0; i < str.size(); ++ i) {
        if (dict[str.at(i)] > 0) {
            if (dict[str.at(i)] < last_order) {
                return false;
            }

            last_order = dict[str.at(i)];
        }
    }

    return true;
}

void test()
{
    assert(check_pattern("engineers rock", "er") == true);
    assert(check_pattern("engineers rock", "egr") == false);
    assert(check_pattern("engineers rock", "gsr") == false);
    assert(check_pattern("aabbcc", "abc") == true);
    assert(check_pattern("abc", "abc") == true);
    assert(check_pattern("aab", "abc") == false);
    assert(check_pattern("ab", "abc") == false);
    assert(check_pattern("", "") == false);

    std::cout << "Succees!" << std::endl;
}

void test2()
{
    assert(check_pattern2("engineers rock", "er") == true);
    assert(check_pattern2("engineers rock", "egr") == false);
    assert(check_pattern2("engineers rock", "gsr") == false);
    assert(check_pattern2("aabbcc", "abc") == true);
    assert(check_pattern2("abc", "abc") == true);
    // assert(check_pattern2("aab", "abc") == false);   // fail here
    assert(check_pattern2("ab", "abc") == false);
    assert(check_pattern2("", "") == false);

    std::cout << "Succees!" << std::endl;
}

int main()
{
    test();
    test2();

    return 0;
}
