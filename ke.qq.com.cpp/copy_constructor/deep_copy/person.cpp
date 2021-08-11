//
//  person.cpp
//  LeetCode
//
//  Created by Hao on 2017/12/26.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "person.hpp"

#include <iostream>
#include <cstring>
using namespace std;

Person::Person(char *pN)
{
    if (pN != nullptr) {
        cout << "Constructing " << pN << " --->" << endl;

        int len = strlen(pN) + 1;
        name = new char[len];
        cout << "name = " << static_cast<void *>(name) << "\n" << endl;
        memset(name, 0, len);
        strcpy(name, pN);
    } else {
        name = nullptr;
    }
}

Person::~Person()
{
    cout << "Destrcuting Person --->" << endl;
    
    if (name != nullptr) {
        Print();
        delete [] name;
        name = nullptr;
    }
}

Person::Person(const Person &p)
{
    cout << "Copy Constructor of Person --->" << endl;
    
    if (p.name != nullptr) {
        int len = strlen(p.name) + 1;
        name = new char[len];
        cout << "name = " << static_cast<void *>(name) << "\n" << endl;
        memset(name, 0, len);
        strcpy(name, p.name);
    } else {
        name = nullptr;
    }
}

// 注意“operator= ()”需要留一个空格，否则出错
Person& Person::operator= (const Person &other)
{
    cout << "operator= --->\n" << endl;
    
    // 防止自赋值
    if (&other == this) {
        return *this;
    }
    
    if (name != nullptr) {
        delete [] name;
        name = nullptr;
    }
    
    if (other.name != nullptr) {
        int len = strlen(other.name) + 1;
        name = new char[len];
        memset(name, 0, len);
        strcpy(name, other.name);
    } else {
        name = nullptr;
    }
    
    return *this;
}

void Person::Print()
{
    cout << "pName = " << static_cast<void *>(name) << "\n" << endl;
}
