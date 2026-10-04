# Organisational Hierarchy and Department Search

## Data Structures and Algorithms Assignment – Question 5

### Problem Statement

A company has the following organisational hierarchy:

- CEO
  - HR
  - Finance
  - IT
    - Development
      - Frontend
      - Backend
    - Testing

The task is to represent this hierarchy using a suitable tree structure, display it using level-order traversal, and compare Linear Search and Binary Search for locating department names.

## Objectives

1. Represent the company hierarchy using a suitable tree structure.
2. Construct the organisational hierarchy in C.
3. Display the hierarchy using level-order traversal.
4. Store department names in a searchable sorted representation.
5. Compare Linear Search and Binary Search using at least three searches.
6. Record intermediate steps using trace tables.
7. Analyse time and space complexity.
8. Determine the most suitable approach for organisational reporting and department searching.

## Hierarchy Representation

A **child-sibling tree** is used. Each node stores:
- The department name.
- A pointer to its first child.
- A pointer to its next sibling.

### Hierarchy

```text
CEO
├── HR
├── Finance
└── IT
    ├── Development
    │   ├── Frontend
    │   └── Backend
    └── Testing
```

## Level-Order Traversal

The tree is traversed using a queue.

Expected traversal:

```text
CEO HR Finance IT Development Testing Frontend Backend
```

## Department Search

The sorted department array used for searching is:

```text
Backend, CEO, Development, Finance, Frontend, HR, IT, Testing
```

Three departments are searched:
- Development
- HR
- Testing

The number of comparisons is recorded for both Linear Search and Binary Search.

## Search Results

| Department | Linear Search | Binary Search |
|---|---:|---:|
| Development | 3 | 3 |
| HR | 6 | 2 |
| Testing | 8 | 4 |

Binary Search performs fewer comparisons for two of the three searches.

## Files in This Repository

| File | Description |
|---|---|
| organisational_hierarchy.c | C implementation of the hierarchy and searches |
| input.txt | Input data used for the assignment |
| output.txt | Expected program output |
| trace_table.md | Level-order and search trace tables |
| complexity_analysis.md | Time and space complexity analysis |
| comparison_table.md | Comparison of the approaches |

## Complexity Summary

| Operation | Time Complexity | Space Complexity |
|---|---|---|
| Level-order traversal | O(n) | O(n) |
| Linear Search | O(n) worst case | O(1) |
| Binary Search | O(log n) worst case | O(1) |
| Tree construction | O(n) for this fixed hierarchy | O(n) |

## Conclusion

The child-sibling tree is suitable for representing and reporting the company hierarchy because it preserves parent-child and sibling relationships.

For repeated department searches, a sorted array with Binary Search is more efficient than Linear Search because Binary Search reduces the search range by half after each comparison.

Therefore, the combination of a **child-sibling tree for organisational reporting** and a **sorted array with Binary Search for department searching** is the most suitable approach for this problem.
