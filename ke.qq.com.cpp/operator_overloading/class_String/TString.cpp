//
//  TString.cpp
//  LeetCode
//
//  Created by Hao on 2017/12/28.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "TString.hpp"

#include <iostream>
#include <cstring>
using namespace std;

namespace T
{

    String::String(const char *str)
    {
        if (nullptr == str) {
            m_data = new char[1];
            *m_data = '\0';
        } else {
            int length = strlen(str);
            m_data = new char[length + 1];
            strcpy(m_data, str);
        }
    }

    String::~String()
    {
        delete [] m_data;
    }

    String::String(const String & other)
    {
        int length = strlen(other.m_data);
        
        m_data = new char[length + 1];
        strcpy(m_data, other.m_data);
    }

    String& String::operator= (const String &other)
    {
        // 检查自赋值
        if (this == &other) {
            return *this;
        }
        
        // 释放原有内存资源
        delete[] m_data;
        
        int length = strlen(other.m_data);
        m_data = new char[length + 1];
        strcpy(m_data, other.m_data);
        
        return *this;
    }

    String& String::operator= (const char *other)
    {
        delete[] m_data;
        
        if (nullptr == other) {
            m_data = new char[1];
            *m_data = '\0';
        } else {
            int length = strlen(other);
            m_data = new char[length + 1];
            strcpy(m_data, other);
        }
        
        return *this;
    }
    
    String& String::operator+= (const T::String &other)
    {
        char *tmp = m_data;
        int length = strlen(m_data) + strlen(other.m_data);
        
        m_data = new char[length + 1];
        strcpy(m_data, tmp);
        strcat(m_data, other.m_data);
        
        delete [] tmp;
        
        return *this;
    }
    
    String String::operator+ (const T::String &other) const
    {
        String result;
        
        result += *this;
        result += other;

        return result;
    }
    
    String& String::operator+= (const char *other)
    {
        String tmp(other);
        
        *this += tmp;
        
        return *this;
    }
    
    String String::operator+ (const char *other) const
    {
        String result = *this;
        
        result += other;
        
        return result;
    }

} // end of namespace T
