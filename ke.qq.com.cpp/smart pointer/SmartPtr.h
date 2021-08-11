//
//  SmartPtr.h
//  LeetCode
//
//  Created by Hao on 2018/1/14.
//  Copyright © 2018年 Hao. All rights reserved.
//

#ifndef SmartPtr_h
#define SmartPtr_h

#include <stdio.h>

#define TRACE printf

/*
//Compiler switch
#ifdef TRACE_SMPTR
#define TRACE printf
#else
#define TRACE
#endif
*/

template <typename T>
class SmartPtr
{
public:
    SmartPtr(T* p_) : m_p(p_)
    {
        TRACE("SmartPtr constructing\n\n");
        m_p->upcount();
    }
    
    ~SmartPtr(void)
    {
        TRACE("SmartPtr destructing\n\n");
        m_p->downcount();
    }
    
    operator T* (void)
    {
        TRACE("%s, %d\n\n", __func__, __LINE__);
        return m_p;
    }
    
    T& operator* (void)
    {
        TRACE("%s, %d\n\n", __func__, __LINE__);
        return *m_p;
    }
    
    T* operator-> (void)
    {
        TRACE("%s, %d\n\n", __func__, __LINE__);
        return m_p;
    }
    
    SmartPtr& operator= (SmartPtr<T> &p_)
    {
        TRACE("%s, %d\n\n", __func__, __LINE__);
        return operator= ((T*)p_);
    }
    
    SmartPtr& operator= (T* p_)
    {
        TRACE("%s, %d\n\n", __func__, __LINE__);
        p_->upcount();
        m_p->downcount();
        m_p = p_;
        
        return *this;
    }
    
    SmartPtr(const SmartPtr<T> &p_)
    {
        TRACE("%s, %d\n\n", __func__, __LINE__);
        m_p = p_.m_p;
        m_p->upcount();
    }
    
private:
    T*  m_p;
};

#endif /* SmartPtr_h */
