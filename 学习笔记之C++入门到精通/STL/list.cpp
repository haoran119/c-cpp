//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

bool compare(const int & a, const int & b)
{
    return a > b;
}

void show_list(const list<int> & coll)
{
    list<int>::const_iterator   citer;
    
    for (citer = coll.begin(); citer != coll.end(); ++ citer)
        cout << *citer << endl;
}

int main()
{
    list<int>   coll;
    
    coll.push_back(10); // 10
    coll.push_back(11); // 10, 11
    coll.push_front(12);    // 12, 10, 11
    coll.push_front(9);     // 9, 12, 10, 11
    
    list<int>::iterator iter = coll.begin();    // 9
    
    coll.erase(iter);   // 12, 10, 11
    
    iter ++;    // 12
    
    coll.erase(iter);   // 10, 11
    
    coll.push_back(2);  // 10, 11, 2
    coll.push_back(1);  // 10, 11, 2, 1

    // Sort in ascending order
    coll.sort();

    cout << "After coll.sort() : \n" << endl;
    
    show_list(coll);
    
    cout << endl;
    
    // Sort in descending order
    coll.sort(compare);
    
    cout << "After coll.sort(compare) : \n" << endl;

    show_list(coll);

    return 0;
}
