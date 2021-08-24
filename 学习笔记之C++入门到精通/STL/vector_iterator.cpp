//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void print_array(const vector<int> & array)
{
    vector<int>::const_iterator   iter;
    
    cout << "array[";
    
    for (iter = array.begin(); iter != array.end(); ++ iter)
        cout << *iter << " , ";
        
    cout << "]\n" << endl;
}

int main()
{
    vector<int>                 array;
    vector<int>::iterator       iter;
    vector<int>::const_iterator citer;
    
    array.push_back(42);
    array.push_back(1);
    array.push_back(100);
    
    array.pop_back();
    
    iter = array.begin();
    
    cout << *iter << "\n" << endl;
    
    *iter = 109;
    
    citer = array.begin();
    
    cout << *citer << "\n" << endl;
    
    //    *citer = 20; // Error : Cannot assign to return value because function 'operator*' returns a const value
    
    print_array(array);
    
    return 0;
}
