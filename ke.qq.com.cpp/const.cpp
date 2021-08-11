//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

class Student
{
public:
    Student(int id = 0)
        : m_id(id) // Must use initialization list to initialize the const member
    {
        cout << "Student constructor --->\n" << endl;
        
        // ERROR : Cannot assign to non-static data member 'm_id' with const-qualified type 'const int'
        //m_id = id;
    }
    
    ~Student()
    {
        cout << "Student destructor --->\n" << endl;
    };
    
    Student(Student &other)
        : m_id(other.m_id)
    {
        cout << "Student copy constructor --->\n" << endl;
    }
    
    inline int getID() const
    {
        return m_id;
    }
    
private:
     const int m_id;
};

void foo(Student stu)
{
    cout << __func__ << "\n" << endl;
}

void bar(const Student &stu)
{
    cout << __func__ << "\n" << endl;
}

int main ()
{
    const int a = 1;

    // ERROR : Cannot assign to variable 'a' with const-qualified type 'const int'
    //a = 3;
    
    int b = 0;
    
    // const value
    const int *p = &a;

    p = &b;
    b = 3;
    
    cout << "p = " << *p << endl;
    
    // ERROR : Read-only variable is not assignable
    //*p = 1;
    
    // const pointer
    int * const p2 = &b;
    
    // ERROR : Cannot assign to variable 'p2' with const-qualified type 'int *const'
    //p2 = &a;
    
    *p2 = 2;
    
    cout << "p2 = " << *p2 << "\n" << endl;
    
    {
        Student john(1001);
        
        cout << "Call foo(Student stu)\n" << endl;
        
        foo(john);
        
        cout << "Call bar(const Student &stu)\n" << endl;
        
        bar(john);
    }

    cout << "Return from main" << endl;
    
    return 0;
}
