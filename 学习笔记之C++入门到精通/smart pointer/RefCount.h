//
//  RefCount.h
//  LeetCode
//
//  Created by Hao on 2018/1/14.
//  Copyright © 2018年 Hao. All rights reserved.
//

#ifndef RefCount_h
#define RefCount_h

//#pragma once

#include <stdio.h>

#define TRACE printf

class RefCount
{
public:
    RefCount(void)
    {
        TRACE("RefCount constructing\n\n");
        crefs = 0;
    }
    
    virtual ~RefCount(void)
    {
        TRACE("RefCount destructing\n\n");
    }
    
    void upcount(void)
    {
        ++ crefs;
        TRACE("up to %d\n\n", crefs);
    }
    
    void downcount(void)
    {
        if (-- crefs == 0) {
            TRACE("down to %d\n\n", crefs);
            delete this;
        } else {
            TRACE("down to %d\n\n", crefs);
        }
    }
    
private:
    int crefs;
};

class Sample : public RefCount
{
public:
    Sample()
    {
        TRACE("Sample constructing\n\n");
    }
    
    ~Sample()
    {
        TRACE("Sample destructing\n\n");
    }
    
    void doSomething(void)
    {
        printf("Did something\n\n");
    }
};

#endif /* RefCount_h */
