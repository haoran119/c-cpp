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

bool compare(const int & a, const int & b)
{
    return a > b;
}

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
    
    print_array(array);

    sort(array.begin(), array.end());
    
    cout << "After sort(array.begin(), array.end())\n" << endl;
    
    print_array(array);
    
    sort(array.begin(), array.end(), compare);

    cout << "After sort(array.begin(), array.end(), compare)\n" << endl;
    
    print_array(array);

    return 0;
}
