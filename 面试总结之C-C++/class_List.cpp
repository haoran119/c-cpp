#include <iostream>

struct Node {
    Node(int data = 0) : m_data(data), m_pNext{nullptr} {}

    ~Node()
    {
        std::cout << "Destroy node with data: " << m_data << "\n";
    }

    int m_data;
    std::unique_ptr<Node>   m_pNext;
};

class List {
public:
    List() : m_pHead{nullptr}
    {
        std::cout << __func__ << std::endl;
    }

    ~List()
    {
        std::cout << __func__ << std::endl;

        clean();
    }

    List(const List& list);
    List(List&& list);

    void push(int data);
    void pop();
    void clean();
    void reverse();

    friend std::ostream& operator<<(std::ostream& os, const List& list);

private:
    std::unique_ptr<Node>   m_pHead;
};

inline List::List(const List& list)
{
    std::cout << __func__ << "(const List& list)" << std::endl;

    Node* root = list.m_pHead.get();

    std::unique_ptr<Node> newHead{nullptr};
    Node* pNewHead{nullptr};

    while (root) {
        auto temp = std::make_unique<Node>(root->m_data);

        if (newHead == nullptr) {
            newHead = std::move(temp);  // keep the new head
            pNewHead = newHead.get();
        }
        else {
            pNewHead->m_pNext = std::move(temp);
            pNewHead = pNewHead->m_pNext.get();
        }

        root = root->m_pNext.get();
    }

    m_pHead = std::move(newHead);
}

inline List::List(List&& list)
{
    std::cout << __func__ << "(List&& list)" << std::endl;

    m_pHead = std::move(list.m_pHead);
}

inline void List::push(int data)
{
    std::cout << __func__ << std::endl;

    auto pTemp{std::make_unique<Node>(data)};

    if (m_pHead) {
        pTemp->m_pNext = std::move(m_pHead);
        m_pHead = std::move(pTemp);
    }
    else {
        m_pHead = std::move(pTemp);
    }
}

inline void List::pop()
{
    std::cout << __func__ << std::endl;

    if (m_pHead == nullptr) {
        return;
    }

    std::unique_ptr<Node> pTemp = std::move(m_pHead);
    m_pHead = std::move(pTemp->m_pNext);
}

inline void List::clean()
{
    std::cout << __func__ << std::endl;

    while (m_pHead) {
        m_pHead = std::move(m_pHead->m_pNext);
    }
}

inline void List::reverse()
{
    std::cout << __func__ << std::endl;

    auto temp = List();
    Node* root = m_pHead.get();

    while (root) {
        temp.push(root->m_data);
        root = root->m_pNext.get();
    }

    clean();
    m_pHead = std::move(temp.m_pHead);
}

std::ostream& operator<<(std::ostream& os, const List& list)
{
    // ??? No new operator here so no memory leak
    Node* pHead = list.m_pHead.get();

    if (pHead == nullptr) {
        os << "N/A";
    }

    while (pHead) {
        os << pHead->m_data << " ";
        pHead = pHead->m_pNext.get();
    }

    return os;
}

int main ()
{
    auto myList = List();

    auto count = 11;
    for (auto i = 0; i < count; ++ i) {
        myList.push(i);
    }

    std::cout << "After push():\n" << myList << "\n" << std::endl;  // 10 9 8 7 6 5 4 3 2 1 0

    myList.pop();

    std::cout << "After pop():\n" << myList << "\n" << std::endl;   // 9 8 7 6 5 4 3 2 1 0

    myList.reverse();

    std::cout << "After reverse():\n" << myList << "\n" << std::endl;   // 0 1 2 3 4 5 6 7 8 9

    myList.clean();

    std::cout << "After clean():\n" << myList << "\n" << std::endl; // N/A

    return 0;
}
