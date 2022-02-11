// https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true

#include <iostream>
#include <memory>
#include <vector>

// Write your Student class here
class Student {
    public:
        Student() : m_scores(5, 0), m_sum(0) {}
        
        ~Student() {}
        
        void input()
        {
            int score;
            
            for (auto i = 0u; i < 5; i ++) {
                std::cin >> score;
                m_scores.emplace_back(score);
                m_sum += score;
            }
        }
        
        const int& calculateTotalScore() const
        {
            return m_sum;            
        }
        
    private:
        std::vector<int> m_scores;
        int m_sum;
};

int main() {
    auto n = 0u; // number of students
    std::cin >> n;
    // Student *s = new Student[n]; // an array of n students
    std::unique_ptr<Student[]> s = std::make_unique<Student[]>(n);
    
    for(auto i = 0u; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    auto kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    auto count = 0u; 
    for(auto i = 1u; i < n; i++) {
        auto total = s[i].calculateTotalScore();
        if(total > kristen_score) {
            ++ count;
        }
    }

    // print result
    std::cout << count;
    
    return 0;
}
