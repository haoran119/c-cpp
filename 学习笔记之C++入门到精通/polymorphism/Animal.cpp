//
//  Animal.cpp
//  LeetCode
//
//  Created by Hao on 2018/1/4.
//  Copyright © 2018年 Hao. All rights reserved.
//

#include "Animal.hpp"

// "virtual" 只需要在声明时加上，不需要在定义时加上
void T::Animal::smile() const
{
    cout << "Animal smile\n" << endl;
}
