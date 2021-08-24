//
//  person.hpp
//  LeetCode
//
//  Created by Hao on 2017/12/26.
//  Copyright © 2017年 Hao. All rights reserved.
//

#ifndef person_hpp
#define person_hpp

class Person
{
public:
    Person(char * pName);
    ~Person();
    /*
     Person(const Person &s);
     Person& operator=(const Person &other);
    */
    
    void Print();
    
private:
    char *name;
};


#endif /* person_hpp */
