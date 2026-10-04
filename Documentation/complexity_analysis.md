# Complexity Analysis

## Tree

The child-sibling representation stores each node with a first-child pointer and next-sibling pointer.

- Tree height: **3 edges / 4 levels**
- Level-order traversal: **O(n)** time
- Level-order auxiliary queue space: **O(n)** worst case
- Tree storage: **O(n)**

## Linear Search

- Best case: **O(1)**
- Average case: **O(n)**
- Worst case: **O(n)**
- Extra space: **O(1)**

## Binary Search

The array must be sorted before searching.

- Best case: **O(1)**
- Average case: **O(log n)**
- Worst case: **O(log n)**
- Extra space: **O(1)** for the iterative implementation

## Suitability

The child-sibling tree is suitable for organisational reporting because it preserves parent-child relationships and supports level-order traversal.

For repeated department-name searches, Binary Search is preferable when department names are maintained in sorted order because its search complexity is logarithmic.

For this assignment, the recommended combination is therefore:
1. **Child-sibling tree** for hierarchy representation and reporting.
2. **Sorted array + Binary Search** for department lookup.
