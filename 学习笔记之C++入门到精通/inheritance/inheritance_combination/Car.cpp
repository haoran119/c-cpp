//
//  Car.cpp
//  LeetCode
//
//  Created by Hao on 2018/1/3.
//  Copyright © 2018年 Hao. All rights reserved.
//

#include "Car.hpp"

namespace T {
    Car::Car(Engine *e, Wheel *w, string name, int price)
    : m_engine(e), m_wheel(w), m_name(name), m_price(price)
    {
        cout << "Car constructing\n" << endl;
    }
    
    void Car::run()
    {
        m_engine->start();
        m_wheel->roll();
        
        cout << "Car running\n" << endl;
    }
    
    void Car::stop()
    {
        m_engine->stop();
        
        cout << "Car stopping\n" << endl;
    }
    
    Benchi::Benchi(Engine *e, Wheel *w, string name, int price, Stero *st)
    : Car(e, w, name, price), m_stero(st)
    {
        cout << "Benchi constructing\n" << endl;
    }
    
    void Benchi::musicOn()
    {
        Car::run();
        m_stero->play();
        
        cout << "Music on\n" << endl;
    }
    
    Transformer::Transformer(Engine *e, Wheel *w, string name, int price, bool val)
    :Car(e, w, name, price), m_val(val)
    {
        cout << "Transformer constructing\n" << endl;
    }
    
    void Transformer::fight()
    {
        run();
        
        cout << "Transformer fight\n" << endl;
    }
    
    void Transformer::transform()
    {
        run();
        
        cout << "Transformer transform\n" << endl;
    }
}
