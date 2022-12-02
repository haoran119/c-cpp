/*
Given a text and a wildcard pattern, implement wildcard pattern matching algorithm 
that finds if wildcard pattern is matched with text. 
The matching should cover the entire text (not partial text). 
The wildcard pattern can include the numeric characters '0' - '9' to stand for the
number of matching characters.
*/

#include <iostream>
#include <cassert>
using namespace std;

class Solution
{
public:
    bool pattern_match(string s1, string s2)
    {
        if (s1.empty() && s2.empty()) {
            return true;
        }

        auto is_numeric = [](auto ch){
            return ch >= '0' && ch <= '9';
        };

        auto i{0}, j{0};
        while (i < s1.size() && j < s2.size()) {
            if (s1.at(i) != s2.at(j)) {
                if (!is_numeric(s1.at(i))) {
                    return false;
                }
                else {
                    auto n_ignore{0};
                    while (i < s1.size() && is_numeric(s1.at(i))) {
                        n_ignore = n_ignore * 10 + s1.at(i) - '0';
                        ++ i;
                    }

                    j += n_ignore;

                    continue;
                }
            }

            ++ i;
            ++ j;
        }

        if (i != s1.size() || j != s2.size()) {
            return false;
        }

        return true;
    }
};

void test()
{
    auto my_solution = Solution();

    assert(my_solution.pattern_match("a10b", "aaaaaaaaaaab") == true);
    assert(my_solution.pattern_match("a10b", "aaaaaaaaaab") == false);
    assert(my_solution.pattern_match("aaab", "aaab") == true);
    assert(my_solution.pattern_match("aab", "aaab") == false);
    assert(my_solution.pattern_match("aaab", "aab") == false);
    assert(my_solution.pattern_match("", "") == true);

    std::cout << "Succees!" << std::endl;
}

int main()
{
    test();

    return 0;
}
