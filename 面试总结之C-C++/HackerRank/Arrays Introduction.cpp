// https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

#include <iostream>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    auto n = 0;
    std::cin >> n;
    
    int a[n];
    for (auto i = 0; i < n; ++ i) {
        std::cin >> a[i];
    }
    
    for (auto i = n - 1; i >= 0; -- i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
