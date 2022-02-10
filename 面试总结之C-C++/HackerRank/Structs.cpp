// https://www.hackerrank.com/challenges/c-tutorial-struct/problem?isFullScreen=true

#include <iostream>

/*
    add code for struct here.
*/
struct Student {
    unsigned int age;
    std::string first_name;
    std::string last_name;
    unsigned int standard;    
};

int main() {
    Student st;
    
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
