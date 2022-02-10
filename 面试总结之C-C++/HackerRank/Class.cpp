// https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true

#include <iostream>
#include <sstream>  // std::stringstream

class Student {
    public:
        Student() : m_age(0), m_first_name(""), m_last_name(""), m_standard(0) {}

        int get_age() const
        {
            return m_age;
        }

        void set_age(int age)
        {
            m_age = age;
        }

        std::string get_first_name() const
        {
            return m_first_name;
        }

        void set_first_name(const std::string& first_name)
        {
            m_first_name = first_name;
        }

        std::string get_last_name() const
        {
            return m_last_name;
        }

        void set_last_name(const std::string& last_name)
        {
            m_last_name = last_name;
        }

        int get_standard() const
        {
            return m_standard;
        }

        void set_standard(int standard)
        {
            m_standard = standard;
        }

        std::string to_string()
        {
            std::stringstream ss{""};
            char seperator{','};

            ss << get_age() << seperator
                << get_first_name() << seperator
                << get_last_name() << seperator
                << get_standard();

            return ss.str();
        }

    private:
        int m_age, m_standard;
        std::string m_first_name, m_last_name;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    auto my_student = Student();
    int age, standard;
    std::string first_name, last_name;

    std::cin >> age >> first_name >> last_name >> standard;

    my_student.set_age(age);
    my_student.set_first_name(first_name);
    my_student.set_last_name(last_name);
    my_student.set_standard(standard);

    std::cout << my_student.get_age() << "\n"
        << my_student.get_last_name() << ", "
        << my_student.get_first_name() << "\n"
        << my_student.get_standard() << "\n\n"
        << my_student.to_string() << std::endl;

    return 0;
}
