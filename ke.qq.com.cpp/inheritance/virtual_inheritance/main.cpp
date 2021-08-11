//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Furniture.hpp"

int main ()
{
    Furniture   furniture;
    Sofa    sofa;
    Bed     bed;
    SofaBed sofabed;
    
    cout << "sizeof(Furniture) : " << sizeof(Furniture) << "\n" << endl;
    cout << "sizeof(Sofa) : " << sizeof(Sofa) << "\n" << endl;
    cout << "sizeof(Bed) : " << sizeof(Bed) << "\n" << endl;
    cout << "sizeof(SofaBed) : " << sizeof(SofaBed) << "\n" << endl;
    
    sofabed.watchTV();
    
    sofabed.sleep();
    
    sofabed.foldout();

    return 0;
}
