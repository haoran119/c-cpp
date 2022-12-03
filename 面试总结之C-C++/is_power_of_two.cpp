/*
Program to find whether a given number is power of 2 - GeeksforGeeks
    https://www.geeksforgeeks.org/program-to-find-whether-a-given-number-is-power-of-2/
    https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
    
Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
    
Expected Time Complexity:O(log N).
Expected Auxiliary Space:O(1).
*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        // Your code here    
        // n & (n - 1) == 0 if n is power of two or n == 0
        return (n && (!(n & (n - 1))));
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    // cin>>t;//testcases
    t = 10;

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
        // 0 1 1 0 1 0 0 0 1 0
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code Ends
