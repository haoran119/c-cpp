// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true

#include <iostream>
#include <sstream>
#include <vector>

std::vector<int> parseInts(const std::string& str) {
    // Complete this function
    std::stringstream ss{str};
    auto temp = 0;
    char ch;
    std::vector<int>    vResults;
    
    while (ss) {
        ss >> temp >> ch;
        vResults.emplace_back(temp);
    }
    
    return vResults;     
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}
