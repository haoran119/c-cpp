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

void Person::Print()
{
    cout << "pName = " << static_cast<void *>(name) << "\n" << endl;
}
