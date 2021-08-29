/*
Increment and Decrement Operator Overloading (C++) | Microsoft Docs
(https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-160)
* When specifying an overloaded operator for the postfix form of the increment or decrement operator, the additional argument must be of type int; 
specifying any other type generates an error.
*/

//
//  main.cpp
//  LEETCODE
//
//  Created by Hao on 2020/8/29.
//  Copyright © 2020年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

class Point
{
public:
   // Declare prefix and postfix increment operators.
   Point& operator++();       // Prefix increment operator. Return reference.
   Point operator++(int);     // Postfix increment operator. Return value.

   // Declare prefix and postfix decrement operators.
   Point& operator--();       // Prefix decrement operator.
   Point operator--(int);     // Postfix decrement operator.

   // Define default constructor.
   Point() { _x = _y = 0; }

   // Define accessor functions.
   int x() { return _x; }
   int y() { return _y; }
private:
   int _x, _y;
};

// Define prefix increment operator.
Point& Point::operator++()
{
   _x++;
   _y++;
   return *this;
}

// Define postfix increment operator.
Point Point::operator++(int)
{
   Point temp = *this;
   ++*this;
   return temp;
}

// Define prefix decrement operator.
Point& Point::operator--()
{
   _x--;
   _y--;
   return *this;
}

// Define postfix decrement operator.
Point Point::operator--(int)
{
   Point temp = *this;
   --*this;
   return temp;
}

int main()
{
    Point point;

    cout << "(" << point.x() << ", " << point.y() << ")" << endl;   // (0, 0)

    point.operator++();

    cout << "(" << point.x() << ", " << point.y() << ")" << endl;   // (1, 1)

    point.operator++(0);

    cout << "(" << point.x() << ", " << point.y() << ")" << endl;   // (2, 2)

    point.operator--();

    cout << "(" << point.x() << ", " << point.y() << ")" << endl;   // (1, 1)

    point.operator--(0);

    cout << "(" << point.x() << ", " << point.y() << ")" << endl;   // (0, 0)

    return 0;
}
