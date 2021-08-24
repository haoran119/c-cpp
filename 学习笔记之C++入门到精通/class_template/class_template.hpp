//
//  class_template.hpp
//  LeetCode
//
//  Created by Hao on 2018/1/7.
//  Copyright © 2018年 Hao. All rights reserved.
//

#ifndef class_template_hpp
#define class_template_hpp

#include <iostream>
using namespace std;

namespace nsT {
    class Test {
    public:
        Test() {}
        
    private:
        // Error : Calling a private constructor of class 'nsT::Test'
/*
        Test(const Test &);
        Test& operator= (const Test &);
*/
    };
    
    template <typename T>
    class Example {
    public:
        Example(T val)
            : m_val(val)
        {
            cout << "Example constructing\n" << endl;
        }
        
        ~Example()
        {
            cout << "Example destructing\n" << endl;
        }
        
        T get() const
        {
            return m_val;
        }
        
        void set(T val)
        {
            m_val = val;
        }
        
    private:
        T   m_val;
    };
} // end of namespace nsT

#endif /* class_template_hpp */
