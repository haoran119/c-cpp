/*
https://www.geeksforgeeks.org/tracking-current-maximum-element-in-a-stack/

Given a Stack, keep track of the maximum value in it. The maximum value may be the top element of the stack, but once a new element is pushed or an 
element is popped from the stack, the maximum element will be now from the rest of the elements.

Examples: 

Input : 4 19 7 14 20
Output : Max Values in stack are 

         4 19 19 19 20

Input : 40 19 7 14 20 5
Output :  Max Values in stack are 

         40 40 40 40 40 40
*/

#include <iostream>
#include <limits>
#include <stack>

class Solution
{
public:
    Solution() : m_stack{}, m_max_stack{} {}
    ~Solution() = default;

    // use another stack to store the current maximum element
    void push(int x)
    {
        m_stack.push(x);

        if (m_max_stack.empty()) {
            m_max_stack.push(x);
            return;
        }

        if (x > m_max_stack.top()) {
            m_max_stack.push(x);
        }
        else {
            m_max_stack.push(m_max_stack.top());
        }
    }

    void pop()
    {
        m_stack.pop();
        m_max_stack.pop();
    }

    int get_max() const
    {
        if (m_max_stack.empty()) {
            return std::numeric_limits<int>::min();
        }
        else {
            return m_max_stack.top();
        }
    }

    int top() const
    {
        if (m_stack.empty()) {
            return std::numeric_limits<int>::min();
        }
        else {
            return m_stack.top();
        }
    }

private:
    std::stack<int>     m_stack;
    std::stack<int>     m_max_stack;
};

int main()
{
    auto mySolution = Solution();

    std::cout << mySolution.top() << "\n";
    std::cout << mySolution.get_max() << "\n";
    mySolution.push(20);
    std::cout << mySolution.top() << "\n";
    std::cout << mySolution.get_max() << "\n";
    mySolution.push(10);
    std::cout << mySolution.top() << "\n";
    std::cout << mySolution.get_max() << "\n";
    mySolution.push(50);
    std::cout << mySolution.top() << "\n";
    std::cout << mySolution.get_max() << "\n";

    return 0;
}
/*
-2147483648
-2147483648
20
20
10
20
50
50
*/
