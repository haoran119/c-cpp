//
//  Car.hpp
//  LeetCode
//
//  Created by Hao on 2018/1/3.
//  Copyright © 2018年 Hao. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <iostream>
using namespace std;

namespace T {
    
    class Engine {
    public:
        Engine(int id)
            : m_id(id)
        {
            cout << "Engine constructing\n" << endl;
        }
        
        ~Engine()
        {
            cout << "Engine destructing\n" << endl;
        }
        
        void start()
        {
            cout << "Engine start\n" << endl;
        }
        
        void stop()
        {
            cout << "Engine stop\n" << endl;
        }
        
    private:
        int m_id;
    };
    
    class Wheel {
    public:
        Wheel(int id)
            : m_id(id)
        {
            cout << "Wheel constructing\n" << endl;
        }
        
        ~Wheel()
        {
            cout << "Wheel destructing\n" << endl;
        }
        
        void roll()
        {
            cout << "Wheel rolling\n" << endl;
        }
        
    private:
        int m_id;
    };
    
    // class Car : public Engine, public Wheel  // 避免使用多继承
    class Car {
    public:
        Car(Engine *, Wheel *, string, int);
        
        ~Car()
        {
            cout << "Car destructing\n" << endl;
        };
        
        void run();
        void stop();
        
    private:
        Car(const Car&);
        Car& operator= (const Car&);
        
        Engine  *m_engine;
        Wheel   *m_wheel;
        string  m_name;
        int     m_price;
    };
    
    class Stero {
    public:
        Stero()
        {
            cout << "Stero constructing\n" << endl;
        }
        
        ~Stero()
        {
            cout << "Stero destructing\n" << endl;
        }
        
        void play()
        {
            cout << "Stero playing\n" << endl;
        }
    };
    
    class Benchi : public Car {
    public:
        Benchi(Engine *, Wheel *, string, int, Stero *);
        
        ~Benchi()
        {
            cout << "Benchi destructing\n" << endl;
        }
        
        void musicOn();
        
    private:
        Stero *m_stero;
    };
    
    class Transformer : public Car {
    public:
        Transformer(Engine *, Wheel *, string, int, bool);
        
        ~Transformer()
        {
            cout << "Transformer destructing\n" << endl;
        }
        
        void fight();
        void transform();
        
    private:
        bool    m_val;
    };
    
}

#endif /* Car_hpp */
