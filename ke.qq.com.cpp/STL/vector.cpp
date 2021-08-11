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

int main()
{
    vector<int> coll;
    
    cout << "capacity : " << coll.capacity() << "\n" << endl;
    cout << "size : " << coll.size() << "\n" << endl;
    
    for (auto i = 0; i < 10; i ++)
        coll.push_back(i);
    
    cout << "capacity : " << coll.capacity() << "\n" << endl;
    cout << "size : " << coll.size() << "\n" << endl;

    cout << coll[9] << endl;
    
    return 0;
}
