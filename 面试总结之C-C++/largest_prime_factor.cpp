/*
https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
https://www.geeksforgeeks.org/prime-numbers/

Largest prime factor

Given a number N, the task is to find the largest prime factor of that number.
 
Example 1:

Input:
N = 5
Output:
5
Explanation:
5 has 1 prime factor 
i.e 5 only.
Example 2:

Input:
N = 24
Output:
3
Explanation:
24 has 2 prime factors 
3 and 2 in which 3 is 
greater

Your Task:
You don't need to read input or print anything. Your task is to complete the function largestPrimeFactor() which takes an integer N as 
input parameters and returns an integer, largest prime factor of N.

Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(1)
 
Constraints:
2 <= N <= 10^5
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        if (N < 2) {
            return 0;
        }
        
        auto result{0};
        
        while (N % 2 == 0) {
            result = 2;
            N /= 2;
        }
        
        for (auto i = 3; i <= sqrt(N); i += 2) {
            while (N % i == 0) {
                result = i;
                N /= i;
            }
        }

        if (N > 2) {
            result = N;
        }

        return result;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
