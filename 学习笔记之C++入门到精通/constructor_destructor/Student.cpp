//
//  Student.cpp
//  LeetCode
//
//  Created by Hao on 2017/12/11.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student(int id)
: m_score(0), m_id(id)
{
    cout << "Student Constructor" << endl;
}

Student::~Student()
{
    cout << "Student destructor" << endl;
}
