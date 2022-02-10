// https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

#include <iostream>
#include <vector>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, k, temp, qi, qj;
    std::vector<std::vector<int> > a;
    std::vector<int>    results;
    
    std::cin >> n >> q;
    
    for (auto i = 0; i < n; ++ i) {
        std::cin >> k;
        std::vector<int>    vTemp;
        for (auto j = 0; j < k; ++ j) {
            std::cin >> temp;
            vTemp.emplace_back(temp);
        }
        a.emplace_back(vTemp);        
    }
    
    for (auto i = 0; i < q; ++ i) {
        std::cin >> qi >> qj;
        results.emplace_back(a.at(qi).at(qj));
    }
    
    for (auto i = 0; i < q; ++ i) {
        std::cout << results.at(i) << "\n";
    }
    
    return 0;
}
