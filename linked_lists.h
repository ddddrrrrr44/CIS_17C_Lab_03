// linked_lists.h
#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include <iostream>
#include <vector>

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val, Node* nxt = nullptr) : data(val), next(nxt) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;
    size_t size;

public:
    LinkedList();
    ~LinkedList();
    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void deleteBeginning();
    void deleteValue(int value);
    bool search(int value) const;
    void print() const;
    size_t getSize() const;
    bool isEmpty() const;
    void reverse();
    std::vector<int> toVector() const;  // For testing purposes
};

#endif // LINKED_LISTS_H