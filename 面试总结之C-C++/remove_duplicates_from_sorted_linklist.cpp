/*
C++ Program to remove duplicates from a sorted linked list
https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/

Write a function that takes a list sorted in non-decreasing order and deletes any duplicate nodes from the list.
The list should only be traversed once.

For example if the linked list is 11->11->11->21->43->43->60
then removeDuplicates() should convert the list to 11->21->43->60.
*/

#include <iostream>

// Linked list node
struct Node
{
    int data;
    Node* next;
};

/* The function removes duplicates from a sorted list */
void removeDuplicates(Node* pHead)
{
    /* do nothing if the list is empty */
    if (pHead == nullptr)
        return;

    // Pointer to traverse the linked list
    Node* pCurrent = pHead;

    // Pointer to store the next pointer of a node to be deleted
    Node* pNextNext;

    // Traverse the list till last node
    while (pCurrent->next != nullptr) {
        // Compare current node with next node
        if (pCurrent->data == pCurrent->next->data) {
            // delete the next node if it is duplicated
            pNextNext = pCurrent->next->next;
            delete pCurrent->next;
            pCurrent->next = pNextNext;
        }
        // This is tricky: only advance if no deletion
        else {
            pCurrent = pCurrent->next;
        }
    }
}

// Recursion
void removeDuplicates2(Node* pHead)
{
    // do nothing if the list is empty
    if (pHead == nullptr)
        return;

    // Pointer to store the pointer of a node to be deleted
    Node* pToDelete{nullptr};

    // Traverse the list till last node
    if (pHead->next != nullptr) {
        // Compare head node with next node
        if (pHead->data == pHead->next->data) {
            // pToDelete pointer stores the next of head pointer which is to be deleted.
            pToDelete = pHead->next;
            pHead->next = pHead->next->next;
            delete pToDelete;

            removeDuplicates(pHead);
        }
        // This is tricky: only advance if no deletion
        else {
            removeDuplicates(pHead->next);
        }
    }
}

// Function to insert a node at the beginning of the linked list
void push(Node** headRef, int data)
{
    // allocate node
    Node* newNode = new Node();

    newNode->data = data;
    // link the old list off the new node
    newNode->next = (*headRef);

    // move the head to point to the new node
    (*headRef) = newNode;
}

/* Function to print nodes in a given linked list */
void printList(Node *node)
{
    while (node != nullptr) {
        std::cout << " " << node->data;
        node = node->next;
    }
    std::cout << "\n";
}

int main()
{
    // Start with the empty list
    Node* pHead = nullptr;

    // Create a sorted linked list to test the functions
    // Created linked list will be 11->11->11->13->13->20
    push(&pHead, 20);
    push(&pHead, 13);
    push(&pHead, 13);
    push(&pHead, 11);
    push(&pHead, 11);
    push(&pHead, 11);

    std::cout << "Linked list before duplicate removal :\n";
    printList(pHead);

    // Remove duplicates from linked list
    // removeDuplicates(pHead);
    removeDuplicates2(pHead);

    std::cout << "Linked list after duplicate removal :\n";
    printList(pHead); // 11 13 20

    return 0;
}
