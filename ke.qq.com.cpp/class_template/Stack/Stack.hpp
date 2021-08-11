//
//  Stack.hpp
//  LeetCode
//
//  Created by Hao on 2018/1/8.
//  Copyright © 2018年 Hao. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <iostream>
using namespace std;

namespace nsT {
    template<typename T>    class StackIterator;    // 前置声明
    
    template<typename T>
    class Stack
    {
    public:
        Stack()
            : m_top(0)
        {
            cout << "Stack constructing\n" << endl;
            
            m_array[0] = T();
        }
        
        ~Stack()
        {
            cout << "Stack destructing\n" << endl;
        }
        
        int size() const
        {
            return m_top;
        }
        
        void push(const T&);
        T pop();
        friend class StackIterator<T>;  // 友元类
        
    private:
        enum { SIZE = 100 };
        T   m_array[SIZE];
        int m_top;
    };
    
    template<typename T>
    void Stack<T>::push(const T& val)
    {
        if (m_top < SIZE) {
            m_array[m_top ++] = val;
        }
    }
    
    template<typename T>
    T Stack<T>::pop()
    {
        if (m_top > 0)
            return m_array[-- m_top];
        else
            return m_array[0];
    }
    
    template<typename T>
    class StackIterator {
    public:
        StackIterator(Stack<T>& val)
            : m_stack(val), m_index(0)
        {
            cout << "StackIterator constructing\n" << endl;
        }
        
        ~StackIterator()
        {
            cout << "StackIterator destructing\n" << endl;
        }
        
        T& operator++ (int) // post
        {
            int ret = m_index;
            
            if (m_index < m_stack.m_top - 1)
                m_index ++;
            
            return m_stack.m_array[ret];
        }
        
    private:
        Stack<T>&   m_stack;
        int         m_index;
    };
}
#endif /* Stack_hpp */
