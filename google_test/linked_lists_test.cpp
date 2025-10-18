#include <gtest/gtest.h>

// Include the student's implementation
#include "../linked_lists.cpp"

// Test cases

TEST(LinkedListTest, InsertAtBeginning) {
    LinkedList list;
    list.insertAtBeginning(1);
    list.insertAtBeginning(2);
    EXPECT_EQ(list.getSize(), 2);
    EXPECT_TRUE(list.search(1));
    EXPECT_TRUE(list.search(2));
}

TEST(LinkedListTest, InsertAtEnd) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    EXPECT_EQ(list.getSize(), 2);
    EXPECT_TRUE(list.search(1));
    EXPECT_TRUE(list.search(2));
}

TEST(LinkedListTest, DeleteValue) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.deleteValue(2);
    EXPECT_EQ(list.getSize(), 2);
    EXPECT_TRUE(list.search(1));
    EXPECT_FALSE(list.search(2));
    EXPECT_TRUE(list.search(3));
}

TEST(LinkedListTest, DeleteHead) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.deleteValue(1);
    EXPECT_EQ(list.getSize(), 1);
    EXPECT_TRUE(list.search(2));
}

TEST(LinkedListTest, Search) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    EXPECT_TRUE(list.search(1));
    EXPECT_TRUE(list.search(2));
    EXPECT_FALSE(list.search(3));
}

TEST(LinkedListTest, IsEmpty) {
    LinkedList list;
    EXPECT_TRUE(list.isEmpty());
    list.insertAtEnd(1);
    EXPECT_FALSE(list.isEmpty());
}

TEST(LinkedListTest, GetSize) {
    LinkedList list;
    EXPECT_EQ(list.getSize(), 0);
    list.insertAtEnd(1);
    EXPECT_EQ(list.getSize(), 1);
    list.insertAtEnd(2);
    EXPECT_EQ(list.getSize(), 2);
}

TEST(LinkedListTest, Reverse) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.reverse();
    EXPECT_TRUE(list.search(1));
    EXPECT_TRUE(list.search(2));
    EXPECT_TRUE(list.search(3));
    EXPECT_EQ(list.getSize(), 3);
}

TEST(LinkedListTest, DeleteNonExistent) {
    LinkedList list;
    list.insertAtEnd(1);
    list.deleteValue(2);
    EXPECT_EQ(list.getSize(), 1);
}

TEST(LinkedListTest, EmptyListOperations) {
    LinkedList list;
    EXPECT_FALSE(list.search(1));
    list.deleteValue(1);
    list.reverse();
    EXPECT_TRUE(list.isEmpty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
