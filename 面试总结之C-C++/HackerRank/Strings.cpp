// https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    std::string a, b;
    
    std::cin >> a >> b;
    
    std::cout << a.size() << " " << b.size() << std::endl;
    std::cout << a + b << std::endl;
    
    std::swap(a[0], b[0]);
    
    std::cout << a << " " << b << std::endl;
    
    return 0;
}
