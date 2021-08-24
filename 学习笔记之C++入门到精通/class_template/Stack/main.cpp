//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Stack.hpp"

using namespace nsT;

int main ()
{
    Stack<int>  stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    auto size = stack.size();
    
    cout << "size of stack : " << size << "\n" << endl;
    
    StackIterator<int>  iter(stack);
    
    for (auto i = 0; i < size; i ++)
        cout << iter ++ << "\n" << endl;
        
    cout << "pop : " << stack.pop() << "\n" << endl;
    
    return 0;
}
