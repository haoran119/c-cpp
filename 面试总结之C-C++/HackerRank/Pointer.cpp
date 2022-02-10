// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <iostream>

void update(int *a, int *b)
{
    int temp = *a;
    
    (*a) += (*b);
    (*b) = abs(temp - (*b));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b;
    
    std::cin >> a >> b;
    
    update(&a, &b);
    
    std::cout << a << "\n" << b << std::endl;
    
    return 0;
}
