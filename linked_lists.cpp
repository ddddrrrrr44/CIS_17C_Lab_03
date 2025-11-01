// linked_lists.cpp
#include "linked_lists.h"

LinkedList::LinkedList() : head(nullptr), size(0) {}

LinkedList::~LinkedList() {
    // TODO: Implement destructor to free all nodes
}

void LinkedList::insertAtBeginning(int value) {
    // TODO: Create new node, set next to head, update head, increment size
}

void LinkedList::insertAtEnd(int value) {
    // TODO: Create new node, find last node, update next, increment size
}

void LinkedList::deleteValue(int value) {
    // TODO: Handle head case, traverse and delete node, decrement size
}

bool LinkedList::search(int value) const {
    // TODO: Traverse list, return true if found
}

void LinkedList::print() const {
    // TODO: Traverse and print each data followed by " -> "
}

size_t LinkedList::getSize() const {
    // TODO: Return size
}

bool LinkedList::isEmpty() const {
    // TODO: Return true if head is nullptr
}

void LinkedList::reverse() {
    // TODO: Reverse the list using three pointers
}

std::vector<int> LinkedList::toVector() const {
    // TODO: Traverse list and build vector
}