// Lab 03: Linked Lists
// Implement a singly linked list with Node structure
// Complete the TODO sections
// Test with: g++ linked_lists_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o linked_lists_test && ./linked_lists_test

#include <iostream>

// TODO: Include <stdexcept> if needed for exceptions

// Node structure
struct Node {
    int data;
    Node* next;
    // TODO: Constructor for Node
};

class LinkedList {
private:
    Node* head;
    size_t size;

public:
    LinkedList() : head(nullptr), size(0) {}

    ~LinkedList() {
        // TODO: Implement destructor to free all nodes
    }

    void insertAtBeginning(int value) {
        // TODO: Create new node, set next to head, update head, increment size
    }

    void insertAtEnd(int value) {
        // TODO: Create new node, find last node, update next, increment size
    }

    void deleteValue(int value) {
        // TODO: Handle head case, traverse and delete node, decrement size
    }

    bool search(int value) const {
        // TODO: Traverse list, return true if found
    }

    void print() const {
        // TODO: Traverse and print each data followed by " -> "
    }

    size_t getSize() const {
        // TODO: Return size
    }

    bool isEmpty() const {
        // TODO: Return true if head is nullptr
    }

    void reverse() {
        // TODO: Reverse the list using three pointers
    }
};

int main() {
    // TODO: Test your implementation
    LinkedList list;
    std::cout << "Implement and test the LinkedList!" << std::endl;
    return 0;
}
