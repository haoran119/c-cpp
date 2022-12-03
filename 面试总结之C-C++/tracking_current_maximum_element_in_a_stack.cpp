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
    Solution() : m_stack{}, m_maxStack{} {}
    ~Solution() = default;

    // use another stack to store the current maximum element
    void push(int x)
    {
        m_stack.push(x);

        if (m_maxStack.empty()) {
            m_maxStack.push(x);
            return;
        }

        if (x > m_maxStack.top()) {
            m_maxStack.push(x);
        }
        else {
            m_maxStack.push(m_maxStack.top());
        }
    }

    void pop()
    {
        m_maxStack.pop();
        m_stack.pop();
    }

    int getMax() const
    {
        if (m_maxStack.empty()) {
            return std::numeric_limits<int>::min();
        }

        return m_maxStack.top();
    }

    int top() const
    {
        if (m_stack.empty()) {
            return std::numeric_limits<int>::min();
        }

        return m_stack.top();
    }

private:
    std::stack<int>     m_stack;
    std::stack<int>     m_maxStack;
};

int main()
{
    auto mySolution = Solution();

    std::cout << mySolution.top() << "\n";
    std::cout << mySolution.getMax() << "\n";
    mySolution.push(20);
    std::cout << mySolution.top() << "\n";
    std::cout << mySolution.getMax() << "\n";
    mySolution.push(10);
    std::cout << mySolution.top() << "\n";
    std::cout << mySolution.getMax() << "\n";
    mySolution.push(50);
    std::cout << mySolution.top() << "\n";
    std::cout << mySolution.getMax() << "\n";

    return 0;
}
