//
//  Furniture.cpp
//  LeetCode
//
//  Created by Hao on 2017/12/31.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Furniture.hpp"

// Should not set weight = 0, or else ERROR Redefinition of default argument
Sofa::Sofa(int weight)
    : Furniture(weight)
{
    cout << "Sofa constructing --->\n" << endl;
}

Bed::Bed(int weight)
    : Furniture(weight)
{
    cout << "Bed constructing --->\n" << endl;
}

SofaBed::SofaBed()
{
    cout << "SofaBed constructing --->\n" << endl;
}
