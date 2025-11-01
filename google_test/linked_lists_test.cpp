#include <gtest/gtest.h>

// Include the student's implementation
#include "../linked_lists.h"

// Test cases

TEST(LinkedListTest, ReverseEmptyList) {
    LinkedList list;
    list.reverse();
    EXPECT_TRUE(list.isEmpty());
    EXPECT_EQ(list.toVector(), std::vector<int>({}));
}

TEST(LinkedListTest, ReverseSingleNode) {
    LinkedList list;
    list.insertAtEnd(5);
    list.reverse();
    EXPECT_EQ(list.getSize(), 1);
    EXPECT_EQ(list.toVector(), std::vector<int>({5}));
}

TEST(LinkedListTest, ReverseTwoNodes) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.reverse();
    EXPECT_EQ(list.getSize(), 2);
    EXPECT_EQ(list.toVector(), std::vector<int>({2, 1}));
}

TEST(LinkedListTest, ReverseThreeNodes) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.reverse();
    EXPECT_EQ(list.getSize(), 3);
    EXPECT_EQ(list.toVector(), std::vector<int>({3, 2, 1}));
}

TEST(LinkedListTest, ReverseFourNodes) {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.reverse();
    EXPECT_EQ(list.getSize(), 4);
    EXPECT_EQ(list.toVector(), std::vector<int>({40, 30, 20, 10}));
}

TEST(LinkedListTest, ReverseAfterInsertBeginning) {
    LinkedList list;
    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);
    list.reverse();
    EXPECT_EQ(list.toVector(), std::vector<int>({3, 2, 1}));
}

TEST(LinkedListTest, ReverseTwice) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.reverse();
    EXPECT_EQ(list.toVector(), std::vector<int>({3, 2, 1}));
    list.reverse();
    EXPECT_EQ(list.toVector(), std::vector<int>({1, 2, 3}));
}

TEST(LinkedListTest, ReverseWithDuplicates) {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(2);
    list.insertAtEnd(1);
    list.reverse();
    EXPECT_EQ(list.toVector(), std::vector<int>({1, 2, 2, 1}));
}

TEST(LinkedListTest, ReverseNegativeNumbers) {
    LinkedList list;
    list.insertAtEnd(-1);
    list.insertAtEnd(-2);
    list.insertAtEnd(-3);
    list.reverse();
    EXPECT_EQ(list.toVector(), std::vector<int>({-3, -2, -1}));
}

TEST(LinkedListTest, ReverseLargeList) {
    LinkedList list;
    for (int i = 1; i <= 100; ++i) {
        list.insertAtEnd(i);
    }
    list.reverse();
    std::vector<int> expected;
    for (int i = 100; i >= 1; --i) {
        expected.push_back(i);
    }
    EXPECT_EQ(list.toVector(), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}