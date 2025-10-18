# Design Diagrams for Linked Lists

## Node Structure Diagram
```
Node
+ data: int
+ next: Node*
```

## LinkedList Class Diagram
```
LinkedList
- head: Node*
- size: size_t
+ insertAtBeginning(value: int): void
+ insertAtEnd(value: int): void
+ deleteValue(value: int): void
+ search(value: int): bool
+ getSize(): size_t
+ isEmpty(): bool
+ reverse(): void
+ print(): void (for debugging)
- ~LinkedList(): destructor
```

## Insertion at Beginning
Before: head -> A -> B -> null
After: head -> C -> A -> B -> null

## Deletion Flowchart
1. If list empty, return
2. If head matches value, delete head
3. Else, traverse to find node
4. Update previous node's next pointer
5. Delete the node

## Reverse Algorithm
- Use three pointers: prev, current, next
- Iterate through list, reverse pointers
- Update head to last node
