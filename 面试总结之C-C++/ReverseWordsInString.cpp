/*
https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
https://www.geeksforgeeks.org/reverse-words-in-a-given-string/
https://www.geeksforgeeks.org/reverse-string-without-using-any-temporary-variable/
https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/   

Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
    S = i.like.this.program.very.much
Output: 
    much.very.program.this.like.i
Explanation: 
    After reversing the whole string(not individual words), the input string becomes
    much.very.program.this.like.i

Example 2:

Input:
    S = pqr.mno
Output: 
    mno.pqr
Explanation: 
    After reversing the whole string , the input string becomes
    mno.pqr
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to reverse words in a given string.
    string reverseWords(string S)   // with STL
    { 
        // code here 
        if (S.size() <= 1) {
            return S;
        }

        auto temp{S};
        std::reverse(temp.begin(), temp.end());

        for (auto start = 0u, end = 0u; end <= S.size(); ++ end) {
            if (start < end && (end == S.size() || temp.at(end) == '.')) {
                std::reverse(std::next(temp.begin(), start), std::next(temp.begin(), end));
                start = end + 1;
            }
        }
        
        return temp;
    }

    string reverseWords1(string S)  // w/o STL 
    { 
        // code here 
        if (S.size() <= 1) {
            return S;
        }

        auto temp{S};
        reverse_string(temp, 0, S.size() - 1);

        for (auto start = 0u, end = 0u; end <= S.size(); ++ end) {
            if (start < end && (end == S.size() || temp.at(end) == '.')) {
                reverse_string(temp, start, end - 1);
                start = end + 1;
            }
        }
        
        return temp;
    }
    
    void reverseWords2(char *myString)
    {
        if (myString == nullptr) {
            return;
        }
    
        auto existsSpace{false};
        size_t start{0}, end{strlen(myString) - 1};
        // reverse the whole string
        while (start < end) {
            if (myString[start] == ' ') {
                existsSpace = true;
            }
    
            myString[start] ^= myString[end];
            myString[end] ^= myString[start];
            myString[start] ^= myString[end];
    
            ++ start;
            -- end;
        }
    
        if (!existsSpace) {
            return;
        }
    
        size_t i{0}, j{0};
        start = 0;
        end = 0;
        // reverse each word
        while (start < strlen(myString)) {
            while (end < strlen(myString) && myString[end] != ' ') {
                ++ end;
            }
    
            i = start;
            j = end - 1;
            while (i < j) {
                myString[i] ^= myString[j];
                myString[j] ^= myString[i];
                myString[i] ^= myString[j];
    
                ++ i;
                -- j;
            }
    
            ++ end;
            start = end;
        }
    }
    
private:
    void reverse_string(std::string& s_reverse, auto start, auto end)
    {
        // for (; start < end; ++ start, -- end) {
        //     s_reverse.at(start) ^= s_reverse.at(end);
        //     s_reverse.at(end) ^= s_reverse.at(start);
        //     s_reverse.at(start) ^= s_reverse.at(end);
        // }
        while (start < end) {
            std::swap(s_reverse.at(start ++), s_reverse.at(end --));
        }
    };
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
