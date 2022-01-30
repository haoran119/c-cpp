// https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

#include <iostream>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    auto maxnum = a;
    
    if (maxnum < b)
        maxnum = b;
    if (maxnum < c)
        maxnum = c;
    if (maxnum < d)
        maxnum = d;
    
    return maxnum;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int aa, bb, cc, dd;
    
    cin >> aa >> bb >> cc >> dd;
    cout << max_of_four(aa, bb, cc, dd) << endl;
    
    return 0;
}
