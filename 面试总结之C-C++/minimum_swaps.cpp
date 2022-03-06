/*
https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/

Given an array of n distinct elements, find the minimum number of swaps required to sort the array DESC.
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*
 * Complete the 'minimumSwaps' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY popularity as parameter.
 */

// put one element at the correct position one round
// Time Complexity O(n * n)
int minimumSwaps1(vector<int> popularity) {
    if (popularity.size() == 1) {
        return 0;
    }

    auto n = popularity.size();
    auto result = 0;
    auto vTemp = popularity;
    unordered_map<int, int> dict{};

    sort(vTemp.begin(), vTemp.end(), greater<int>());

    for (auto i = 0; i < n; ++ i) {
        dict[popularity.at(i)] = i;
    }

    for (auto i = 0; i < n; ++ i) {
        if (popularity.at(i) != (n - i)) {
            ++ result;

            for (auto j = i + 1; j < n; ++ j) {
                if (popularity.at(j) == (n - i)) {
                    swap(popularity.at(i), popularity.at(j));
                    break;
                }
            }
        }
    }

    return result;
}

// Use hashmap to store the position
// Time Complexity O(n Log n)
int minimumSwaps2(vector<int> popularity) {
    if (popularity.size() == 1) {
        return 0;
    }

    auto n = popularity.size();
    auto result = 0;
    auto vTemp = popularity;
    unordered_map<int, int> dict{};

    // Sort DESC
    sort(vTemp.begin(), vTemp.end(), greater<int>());

    // store index of the input vector
    for (auto i = 0; i < n; ++ i) {
        dict[popularity.at(i)] = i;
    }

    for (auto i = 0; i < n; ++ i) {
        if (popularity.at(i) != vTemp.at(i)) {
            ++ result;
            auto origin = popularity.at(i);

            swap(popularity.at(i), popularity.at(dict[vTemp[i]]));

            // update index in the hashmap
            dict[origin] = dict[vTemp.at(i)];
            dict[vTemp.at(i)] = i;
        }
    }

    return result;
}

int main()
{
    vector<int> popularity{3, 4, 1, 2};

    int result = minimumSwaps1(popularity);
    cout << result << "\n"; // 2

    result = minimumSwaps2(popularity);
    cout << result << "\n"; // 2

    return 0;
}
