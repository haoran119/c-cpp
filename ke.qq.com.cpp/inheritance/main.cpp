//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Animal.hpp"

using namespace T;

int main ()
{
    {
        Cat cat(1, 1, "house");
        cat.setAge(2);
        cat.setColor(2);
        
        cat.setCatLocation("apartment");
    }
    
    {
        Dog dog(2, 2, "home");
        dog.setAge(3);
        dog.setWeight(3);
    }

    return 0;
}
