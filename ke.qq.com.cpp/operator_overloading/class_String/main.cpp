//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "TString.hpp"

#include <iostream>
using namespace std;

using namespace T;

int main ()
{
    String s1("hello ");
    
    String s2 = s1;
    
    String s3 = "world ";
    
    cout << "s1 = " << s1.data() << "\n" << endl;

    cout << "s2 = " << s2.data() << "\n" << endl;

    cout << "s3 = " << s3.data() << "\n" << endl;

    //    String& operator= (const char *);
    s1 = "hello world ";
    
    cout << "s1 = " << s1.data() << "\n" << endl;

    //     String& operator= (const String &);
    s3 = s1;
    
    cout << "s3 = " << s3.data() << "\n" << endl;
    
    //    String& operator+= (const String &);
    s1 += s3;
    
    cout << "s1 = " << s1.data() << "\n" << endl;
    
    //    String& operator+= (const char *);
    s3 += "!";
    
    cout << "s3 = " << s3.data() << "\n" << endl;
    
    //    String operator+ (const String &) const;
    String s4 = s1 + s2;
    
    cout << "s4 = " << s4.data() << "\n" << endl;
    
    //    String operator+ (const char *) const;
    s4 = s1 + "hello ";
    
    cout << "s4 = " << s4.data() << "\n" << endl;

    return 0;
}
