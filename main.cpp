#include "linked_lists.h"

int main() {
    // TODO: Add your own test code here if needed
    std::cout << "Implement the LinkedList class and run the tests!" << std::endl;

    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.print();  // Should print 1 -> 2 -> 3

    list.reverse();
    list.print();  // Should print 3 -> 2 -> 1

    return 0;
}