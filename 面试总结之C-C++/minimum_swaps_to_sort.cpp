/*
https://practice.geeksforgeeks.org/problems/minimum-swaps/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/

Given an array of n distinct elements, find the minimum number of swaps required to sort the array DESC.

or 

Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

// put one element at the correct position one round
// Time Complexity O(n * n)
int minimumSwaps1(std::vector<int> popularity) {
    if (popularity.size() == 1) {
        return 0;
    }

    auto n = popularity.size();
    auto result = 0;
    auto vTemp = popularity;

    for (auto i = 0; i < n; ++ i) {
        if (popularity.at(i) != (n - i)) {
            ++ result;

            for (auto j = i + 1; j < n; ++ j) {
                if (popularity.at(j) == (n - i)) {
                    std::swap(popularity.at(i), popularity.at(j));
                    break;
                }
            }
        }
    }

    return result;
}

// Use hashmap to store the position
// Time Complexity O(n Log n)
int minimumSwaps2(std::vector<int> popularity) {
    if (popularity.size() == 1) {
        return 0;
    }

    auto n = popularity.size();
    auto result = 0;
    auto vTemp = popularity;
    std::unordered_map<int, int> dict{};

    // Sort DESC
    std::sort(vTemp.begin(), vTemp.end(), std::greater<int>());

    // store index of the input vector
    for (auto i = 0; i < n; ++ i) {
        dict[popularity.at(i)] = i;
    }

    for (auto i = 0; i < n; ++ i) {
        if (popularity.at(i) != vTemp.at(i)) {
            ++ result;
            auto origin = popularity.at(i);

            std::swap(popularity.at(i), popularity.at(dict[vTemp[i]]));

            // update index in the hashmap
            dict[origin] = dict[vTemp.at(i)];
            dict[vTemp.at(i)] = i;
        }
    }

    return result;
}

//Function to find the minimum number of swaps required to sort the array. 
int minSwaps(std::vector<int>& nums)
{
    // Code here
    if (nums.size() == 1) {
        return 0;
    }
    
    auto result{0};

    auto v_nums{nums};
    std::sort(v_nums.begin(), v_nums.end());
    
    // store index of the input vector
    std::unordered_map<int, int> m_dict;
    for (auto i = 0; i < nums.size(); ++ i) {
        m_dict[nums.at(i)] = i;
    }
    
    for (auto i = 0; i < nums.size(); ++ i) {
        if (nums.at(i) != v_nums.at(i)) {
            ++ result;
            auto origin{nums.at(i)};
            std::swap(nums.at(i), nums.at(m_dict.at(v_nums.at(i))));
            
            // update index in the hashmap
            m_dict.at(origin) = m_dict.at(v_nums.at(i));
            m_dict.at(v_nums.at(i)) = i;
        }
    }
    
    return result;
}

int main()
{
    std::vector<int> popularity{3, 4, 1, 2};

    int result = minimumSwaps1(popularity);
    std::cout << result << "\n"; // 2

    result = minimumSwaps2(popularity);
    std::cout << result << "\n"; // 2

    result = minSwaps(popularity);
    std::cout << result << "\n"; // 2

    return 0;
}
