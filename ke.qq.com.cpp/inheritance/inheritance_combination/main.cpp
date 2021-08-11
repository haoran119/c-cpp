//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Car.hpp"
using namespace T;

int main ()
{
    Engine  e1(1);
    Wheel   w1(1);
    Stero   stero;
    Benchi  benchi(&e1, &w1, "benchi", 100, &stero);

    benchi.musicOn();
    
    Transformer t(&e1, &w1, "optimusprime", 200, true);
    
    t.transform();
    t.fight();
    
    return 0;
}
