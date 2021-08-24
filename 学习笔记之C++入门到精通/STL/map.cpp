//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

class Compare
{
public:
    // Overload operator(), must be wtih "const"
    bool operator() (const int & a, const int & b) const
    {
        return a > b;
    }
};

int main()
{
    map<int, string>    coll;
    map<int, string>::iterator  iter;
    
    coll.insert(pair<int, string>(9, "Nine"));
    coll.insert(map<int, string>::value_type(1, "One"));
    coll.insert(make_pair(2, "Two"));
    coll[0] = "Zero";
    
    cout << "Sort in default ascending order\n" << endl;
    
    for (iter = coll.begin(); iter != coll.end(); ++ iter)
        cout << iter->first << " : " << iter->second << endl;

    cout << endl;
    
    // Sort with overloaded Compare
    map<int, string, Compare>    coll_cmp;
    map<int, string, Compare>::iterator iter_cmp;
    
    coll_cmp.insert(pair<int, string>(9, "Nine"));
    coll_cmp.insert(map<int, string>::value_type(1, "One"));
    coll_cmp.insert(make_pair(2, "Two"));
    coll_cmp[0] = "Zero";
    
    cout << "Sort in descending order with overloaded Compare operator\n" << endl;
    
    for (iter_cmp = coll_cmp.begin(); iter_cmp != coll_cmp.end(); ++ iter_cmp)
        cout << iter_cmp->first << " : " << iter_cmp->second << endl;

    return 0;
}
