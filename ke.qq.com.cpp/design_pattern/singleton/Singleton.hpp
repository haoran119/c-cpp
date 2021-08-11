//
//  Singleton.hpp
//  LeetCode
//
//  Created by Hao on 2017/12/27.
//  Copyright © 2017年 Hao. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

class Singleton
{
public:
    static Singleton* getInstance();
    void doSomething();
    void destroy();
    
private:
    Singleton();
    ~Singleton();
    Singleton(const Singleton &);
    Singleton& operator=(const Singleton &);
    
    static Singleton *instance;
};

#endif /* Singleton_hpp */
