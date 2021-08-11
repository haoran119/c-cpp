//
//  Increase.hpp
//  LeetCode
//
//  Created by Hao on 2017/12/28.
//  Copyright © 2017年 Hao. All rights reserved.
//

#ifndef Increase_hpp
#define Increase_hpp

class Increase
{
public:
    Increase(int val);
    ~Increase();
    
    Increase& operator++ ();        // prefix, return reference
    Increase operator++ (int val);  // postfix, return value
    
    int getVal() const
    {
        return m_val;
    }
    
private:
    int m_val;
};

#endif /* Increase_hpp */
