/*
https://www.geeksforgeeks.org/tracking-current-maximum-element-in-a-stack/
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
