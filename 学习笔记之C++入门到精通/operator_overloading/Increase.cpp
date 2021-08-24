//
//  Increase.cpp
//  LeetCode
//
//  Created by Hao on 2017/12/28.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Increase.hpp"

Increase::Increase(int val)
    : m_val(val)
{
}

Increase::~Increase()
{
}

Increase& Increase::operator++ ()
{
    ++ m_val;
    return *this;
}

Increase Increase::operator++ (int)
{
    Increase ret(m_val);
    ++ m_val;
    
    return ret;
}
