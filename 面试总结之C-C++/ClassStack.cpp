/*
Implement a stack
*/

#include <iostream>

typedef struct List
{
    int data;
    struct List* next;
} Node;

class Stack
{
    Node* node;

public:
    Stack();
    ~Stack();

    void Push(int data);
    int Pop();
};

inline Stack::Stack()
{
    node = nullptr;
}

inline Stack::~Stack()
{
    Node* pTemp{ node };

    while (pTemp != nullptr) {
        Node* pNext{pTemp->next};
        std::cout << "Destruct " << pTemp->data << std::endl;
        delete pTemp;
        pTemp = pNext;
    }

    node = nullptr;
}

inline void Stack::Push(int data)
{
    Node* pTemp = new Node();
    pTemp->data = data;
    pTemp->next = node;

    node = pTemp;
}

inline int Stack::Pop()
{
    if (node == nullptr) {
        throw std::runtime_error("Pop on Empty Stack");
    }

    int data = node->data;

    Node* pTemp = node;
    node = node->next;
    std::cout << "Delete " << pTemp->data << std::endl;
    delete pTemp;
    pTemp = nullptr;

    return data;
}

int main()
{
    auto stack{ Stack() };
    int i{ 0 };

    // std::cout << stack.Pop() << std::endl;  // terminating with uncaught exception of type std::runtime_error: Pop on Empty Stack
    stack.Push(1);
    stack.Push(2);
    std::cout << stack.Pop() << std::endl;  // 2
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    std::cout << stack.Pop() << std::endl;  // 5
    std::cout << stack.Pop() << std::endl;  // 4
    std::cout << stack.Pop() << std::endl;  // 3
    std::cout << stack.Pop() << std::endl;  // 1
    // std::cout << stack.Pop() << std::endl;  // terminating with uncaught exception of type std::runtime_error: Pop on Empty Stack

    stack.Push(6);
    stack.Push(7);

    return 0;
}
// Destruct 7
// Destruct 6
