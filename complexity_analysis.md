# Complexity Analysis

## 1. Tree Representation

The organisational hierarchy is represented using a **child-sibling tree**.

Each node contains:
- Department name
- Pointer to its first child
- Pointer to its next sibling

This representation is suitable because an organisational unit can have multiple sub-units.

## 2. Tree Height

The longest path is:

**CEO → IT → Development → Frontend**

The tree has:
- **Height = 3 edges**
- **Number of levels = 4** when the root is considered Level 0

## 3. Level-Order Traversal

Level-order traversal uses a queue and visits every node once.

- Time complexity: **O(n)**
- Auxiliary space complexity: **O(n)** in the worst case
- For this hierarchy, n = 8

## 4. Tree Construction

The hierarchy contains a fixed number of nodes and relationships.

- Overall construction for this assignment: **O(n)**
- The addChild() function may traverse existing siblings when adding a child, but for this small fixed hierarchy the total cost is negligible.

## 5. Linear Search

Linear search checks departments one by one.

- Best case: **O(1)**
- Average case: **O(n)**
- Worst case: **O(n)**
- Extra space: **O(1)**

## 6. Binary Search

Binary search requires the department array to be sorted.

- Best case: **O(1)**
- Average case: **O(log n)**
- Worst case: **O(log n)**
- Extra space: **O(1)** for the iterative implementation

## 7. Overall Suitability

The tree is suitable for representing and reporting the organisational hierarchy because it preserves parent-child relationships and supports hierarchical traversal.

For repeated department-name searches, a sorted array with binary search is more efficient than linear search.

Therefore, the combination of a **child-sibling tree for hierarchy representation** and a **sorted array with binary search for department searching** is the most suitable approach for this problem.
