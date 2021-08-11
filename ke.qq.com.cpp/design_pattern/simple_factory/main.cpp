//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Fruit.hpp"

int main ()
{
    Gardener Tom;

    Fruit * fruit = Tom.getFruit(APPLE);
    
    fruit->plant();
    fruit->grow();
    fruit->harvest();

    cout << "------New request for ORANGE------\n" << endl;
    
    fruit = Tom.getFruit(ORANGE);
    
    fruit->plant();
    fruit->grow();
    fruit->harvest();
    
    return 0;
}
