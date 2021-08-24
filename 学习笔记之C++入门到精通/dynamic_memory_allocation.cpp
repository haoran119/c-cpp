//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
#include <cstdlib> // malloc/free
using namespace std;

class Test
{
public:
    Test(int val = 0)
    : m_val(val)
    {
        cout << "Test" << endl;
    }
    
    ~Test()
    {
        cout << "~Test" << endl;
    }
    
private:
    int m_val;
};

int main ()
{
    {
        Test a;                 // "Test"
    }                           // End of scope : "~Test"
    cout << "end of }" << endl;
    
    Test *pVal = new Test();    // "Test"
    delete pVal;                // "~Test"
    pVal = nullptr;
    
    int *p = (int *)malloc(sizeof(int));
    free(p);
    p = nullptr;
    
    Test *pArray = new Test[2]; // twice "Test"
    
    delete[] pArray;            // twice call of destructor "~Test"
    //delete pArray;            // memory leak
    
    pVal = new Test(10);        // "Test"
    delete pVal;                // "~Test"
    
    return 0;
}
