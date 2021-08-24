//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ID
{
public:
    ID() : m_name(""), m_score(0) {}
    ID(string name, int score) : m_name(name), m_score(score){}
    
    string  m_name;
    int     m_score;
};

bool operator== (const ID & x, const ID & y)
{
    return (x.m_name == y.m_name) && (x.m_score == y.m_score);
}

bool operator< (const ID & x, const ID & y)
{
    return x.m_score < y.m_score;
}

bool compare(const ID & x, const ID & y)
{
    return x.m_score > y.m_score;
}

int main()
{
    vector<ID>              ids;
    vector<ID>::iterator    iter;
    
    ids.push_back(ID("Tom", 5));
    ids.push_back(ID("John", 1));
    ids.push_back(ID("Alex", 2));
    
    // By default
    sort(ids.begin(), ids.end());
    
    cout << "After sort(ids.begin(), ids.end())\n" << endl;
    
    for (iter = ids.begin(); iter != ids.end(); ++ iter)
    {
        cout << (*iter).m_name << " : " << (*iter).m_score << endl;
    }

    cout << endl;
    
    // With compare function
    sort(ids.begin(), ids.end(), compare);

    cout << "After sort(ids.begin(), ids.end(), compare)\n" << endl;
    
    for (iter = ids.begin(); iter != ids.end(); ++ iter)
    {
        cout << (*iter).m_name << " : " << (*iter).m_score << endl;
    }

    return 0;
}
