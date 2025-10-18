# Lab 03 - Linked Lists

This lab implements a singly linked list data structure, introducing pointer manipulation and dynamic node management in C++.

## Files in this Directory
- `google_test/`: Directory containing Google Test files
- Implementation files: `*.cpp` with TODO comments for student completion
- Documentation: `*.md` files with requirements, diagrams, and presentations
- `linked_lists.cpp`: Template with Node structure and LinkedList class declarations
- `linked_lists_test.cpp`: Google Test suite with 10 comprehensive test cases
- `design_diagrams.md`: Visual representations of linked list operations
- `presentation.md`: Lecture notes on linked lists
- `requirements_document.md`: Detailed requirements and specifications

## Learning Objectives
- Master pointer manipulation in C++
- Implement dynamic data structures
- Understand linked list operations and their complexities
- Practice recursive and iterative algorithms
- Handle memory management properly

## System Overview
The LinkedList class manages a sequence of Node objects:
- **Node**: Contains integer data and next pointer
- **LinkedList**: Maintains head pointer and size counter

Key operations: insert at beginning/end, delete by value, search, reverse.

## Implementation Instructions

## Testing Your Implementation

**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods in the `.cpp` file, follow these steps to test your code:

### Step 1: Navigate to the google_test directory
```bash
cd google_test
```

### Step 2: Compile the test executable
```bash
g++ *_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o test_executable
```

### Step 3: Run the tests
```bash
./test_executable
```

### Expected Output
You should see output like:
```
[==========] Running X tests from Y test suite.
...
[  PASSED  ] X tests.
```

If all tests pass, your implementation is correct! If tests fail, check your code against the TODO requirements and test expectations.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented with correct signatures.
- **Test failures**: Review the failing test messages and debug your implementation.
- **Missing dependencies**: Make sure Google Test is installed as described in the prerequisites.

The `linked_lists.cpp` file contains class declarations with TODO comments. Implement each method following the specifications:
1. Start with Node constructor
2. Implement LinkedList destructor for proper cleanup
3. Add insertAtBeginning and insertAtEnd
4. Implement deleteValue with head and general cases
5. Add search, getSize, isEmpty
6. Finally, implement reverse algorithm

### Tips:
- Draw diagrams for pointer operations
- Handle edge cases: empty list, single node, head deletion
- Test each method incrementally
- Remember to update size counter

## Google Test Setup and Usage

### Prerequisites
- C++17 compatible compiler
- Google Test framework (see lab_01 for installation)

### Compiling Tests
```bash
g++ google_test/linked_lists_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o linked_lists_test
```

### Running Tests
```bash
./linked_lists_test
```

Expected: 10/10 tests pass.

### Test Case Details
1. **InsertAtBeginning**: Adds nodes to list head
2. **InsertAtEnd**: Appends nodes to list tail
3. **DeleteValue**: Removes specific values
4. **DeleteHead**: Edge case for head removal
5. **Search**: Locates values in list
6. **IsEmpty**: Verifies empty state
7. **GetSize**: Confirms size tracking
8. **Reverse**: Tests list reversal
9. **DeleteNonExistent**: Safe deletion handling
10. **EmptyListOperations**: Edge case robustness

### Demo Execution
```bash
g++ linked_lists.cpp -std=c++17 -o linked_lists
./linked_lists
```

## Key Concepts Covered
- **Pointer Manipulation**: Creating, linking, and deleting nodes
- **Memory Management**: Dynamic allocation and deallocation
- **Time Complexity**: O(1) head operations, O(n) others
- **Edge Cases**: Empty lists, single elements, boundary conditions

## Advantages over Arrays
- Dynamic size without reallocation
- Efficient insertions/deletions (once positioned)
- No wasted space for sparse data

## Common Pitfalls
- Null pointer dereferences
- Memory leaks from improper cleanup
- Off-by-one errors in traversal
- Forgetting to update size

## Further Challenges
- Implement doubly linked list
- Add insert at position method
- Implement merge sort on linked list
- Add cycle detection

This lab builds crucial understanding of dynamic data structures!
## Testing Your Implementation

**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods, follow these steps to test your code:

### Step 1: Navigate to the google_test directory
```bash
cd google_test
```

### Step 2: Compile the test executable
```bash
g++ *_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o test_executable
```

### Step 3: Run the tests
```bash
./test_executable
```

### Expected Output
You should see tests passing if your implementation is correct.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented.
- **Test failures**: Debug based on error messages.
- **Dependencies**: Verify Google Test installation.
