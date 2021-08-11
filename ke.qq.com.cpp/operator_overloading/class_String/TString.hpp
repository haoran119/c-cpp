//
//  TString.hpp
//  LeetCode
//
//  Created by Hao on 2017/12/28.
//  Copyright © 2017年 Hao. All rights reserved.
//

#ifndef TString_hpp
#define TString_hpp

#include <iostream>
using namespace std;

namespace T {

    class String
    {
    public:
        String (const char * = nullptr);
        ~String ();
        
        String (const String &);

        // 重载赋值运算符

        // String a; a = b;
        String& operator= (const String &);
        // String a; a = "hello";
        String& operator= (const char *);
        
        String& operator+= (const String &);
        String operator+ (const String &) const;
        
        String& operator+= (const char *);
        String operator+ (const char *) const;
        
        inline const char * data() const
        {
            return m_data;
        }
        
    private:
        char *m_data;
    };

}


#endif /* TString_hpp */
