/*
https://www.geeksforgeeks.org/ways-to-sum-to-n-using-natural-numbers-up-to-k-with-repetitions-allowed/

Given two integers N and K, the task is to find the total number of ways of representing N as the
sum of positive integers in the range [1, K], where each integer can be chosen multiple times.

Input: N = 8, K = 2
Output: 5
Explanation: All possible ways of representing N as sum of positive integers less than or equal to K are:

{1, 1, 1, 1, 1, 1, 1, 1}, the sum is 8.
{2, 1, 1, 1, 1, 1, 1}, the sum is 8.
{2, 2, 1, 1, 1, 1}, the sum is 8.
{2, 2, 2, 1, 1}, the sum is 8.
{2, 2, 2, 2}}, the sum is 8.
Therefore, the total number of ways is 5.

Input: N = 2, K = 2
Output: 2
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

/*
DP
Considering f[i] stores the total number of ways for representing i as the
sum of integers lying in the range [1, K], then the transition of states
can be defined as:
    For i in the range [1, K] and for every j in the range [1, N]
    The value of f[j] is equal to (f[j]+ f[j – i]), for all j ≥ i.
    f[0] = 1.
E.g. N = 8, K = 2. f[8] = f[7] + f[6].
    If we add 1 to each way of representing 7, then it could represent 8.
    If we add 2 to each way of representing 6, then it could represent 8.
Time Complexity: O(N * K)
*/
int ways(int total, int k) {
    std::vector<int>    f(total + 1, 0);

    constexpr auto mod = 1'000'000'000;
    f.at(0) = 1;

    // Need to iterate k in the outer loop and N in the inner loop
    // the order could not be changed.
    for (auto i = 1; i <= k; ++ i) {
        for (auto j = 1; j <= total; ++ j) {
            if (j >= i) {
                f.at(j) = (f.at(j) + f.at(j - i)) % mod;
            }
        }
    }

    // 1 1 2 2 3 3 4 4 5
    for (const auto i : f) {
        std::cout << i << " ";
    }
    std::cout << '\n';

    return f.at(total);
}

int main()
{
    int total = 8;
    int k = 2;

    int result = ways(total, k);
    std::cout << result << std::endl; // 5

    return 0;
}
