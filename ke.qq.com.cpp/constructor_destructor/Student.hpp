//
//  Student.hpp
//  LeetCode
//
//  Created by Hao on 2017/12/11.
//  Copyright © 2017年 Hao. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <iostream>
using namespace std;

class Student
{
public:
    Student(int id = 0);
    ~Student();

    const int getID() const;
    void setID(int id);
    const int getScore() const;
    void setScore(int score);
    
private:
    int m_id;
    int m_score;
};

inline const int Student::getID() const
{
    return m_id;
}

inline void Student::setID(int id)
{
    m_id = id;
}

inline const int Student::getScore() const
{
    return m_score;
}

inline void Student::setScore(int score)
{
    m_score = score;
}

#endif /* Student_hpp */

Student.hpp
