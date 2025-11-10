// linked_lists.cpp
#include "linked_lists.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr), size(0) {}

LinkedList::~LinkedList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
   }
}

void LinkedList::insertAtBeginning(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
    size++;
}

void LinkedList::insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

void LinkedList::deleteBeginning() {
    if (!head) return;

    Node* temp = head; 
    head = head->next;
    delete temp;
    size--;
    if (!head) tail = nullptr;

}

void LinkedList::deleteValue(int value) {
    if (value >= size) return;
    if (value == 0) {
        deleteBeginning();
        return;
    }
    Node* temp = head;
    for (int i = 0; i < value - 1; i++) {
        temp = temp->next;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete == tail) tail = temp;
    delete toDelete;
    size--;
}

bool LinkedList::search(int value) const {
    if (!head) return false;
    Node* temp = head;
    while (temp != nullptr) { 
        if (temp->data == value) { 
            return true;
        }
        temp = temp->next; 
    }
    return false;
}

void LinkedList::print() const {
    Node* temp = head;
    while (temp) {
       std::cout << temp->data;
        temp = temp->next;
        if (temp != nullptr)
        std::cout << " -> ";
    }
    std::cout << "\n";
}

size_t LinkedList::getSize() const {
    return size;
}

bool LinkedList::isEmpty() const {
    if (head == nullptr) {
        return true;
    }
    else {
        return false;
    }
}

void LinkedList::reverse() {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    }

    head = prev; 
}

std::vector<int> LinkedList::toVector() const {
    std::vector<int> returnVector;
    if (!head) return returnVector;
    Node* temp = head;
    while (temp != nullptr) {
        returnVector.push_back(temp->data);
        temp = temp->next;
    }
    return returnVector;
}