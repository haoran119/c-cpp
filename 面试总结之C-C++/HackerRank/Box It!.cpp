// https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true

#include<bits/stdc++.h>

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    public:
        Box() : m_l(0), m_b(0), m_h(0) {}
        
        Box(int length, int breadth, int height) : m_l(length), m_b(breadth), m_h(height) {}
        
        Box(const Box& B)
        {
            m_b = B.m_b;
            m_h = B.m_h;
            m_l = B.m_l;            
        }
        
        ~Box() {}
        
        int getLength() const
        {
            return m_l;
        }
        
        int getBreadth() const
        {
            return m_b;
        }
        
        int getHeight() const
        {
            return m_h;            
        }
        
        long long CalculateVolume() const
        {
            // need type casting
            return (long long)m_l * m_b * m_h;
        }
        
        friend bool operator<(const Box& A, const Box& B)
        {
            if (A.m_l < B.m_l)
                return true;
            if (A.m_l == B.m_l and A.m_b < B.m_b)
                return true;
            if (A.m_l == B.m_l and A.m_b == B.m_b and A.m_h < B.m_h)
                return true;
            return false;
        }
        
        friend std::ostream& operator<<(std::ostream& out, const Box& B)
        {
            out << B.m_l << " " << B.m_b << " " << B.m_h;
            
            return out;            
        }
    
    private:
        int m_l, m_b, m_h;    
};

void check2()
{
    int n;
    std::cin >> n;
    
    Box temp;
    
    for (auto i = 0u;i < n; ++ i) {
        int type;
        std::cin >> type;
        
        if (type == 1) {
            std::cout << temp << std::endl;
        }
        
        if (type == 2) {
            int l,b,h;
            std::cin >> l >> b >> h;
            Box NewBox(l,b,h);
            temp = NewBox;
            std::cout << temp << std::endl;
        }
        
        if (type == 3) {
            int l,b,h;
            std::cin >> l >> b >> h;
            Box NewBox(l,b,h);
            if (NewBox < temp) {
                std::cout << "Lesser\n";
            }
            else {
                std::cout << "Greater\n";
            }
        }
        
        if (type == 4) {
            std::cout << temp.CalculateVolume() << std::endl;
        }
        
        if (type == 5) {
            Box NewBox(temp);
            std::cout << NewBox << std::endl;
        }
    }
}

int main()
{
    check2();
}
