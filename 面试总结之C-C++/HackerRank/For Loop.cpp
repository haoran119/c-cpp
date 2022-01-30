// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    string num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cin >> a >> b;
    
    for (int i = a; i <= b; i ++)
        if (i >= 1 and i <= 9)
            cout << num[i - 1] << endl;
        else if (i % 2 == 0)
            cout << "even" << endl;
        else 
            cout << "odd" << endl;           
    
    return 0;
}
