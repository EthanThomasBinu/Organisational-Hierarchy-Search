# Comparison Table

## Data Structure and Search Comparison

| Feature | Child-Sibling Tree | Linear Search | Binary Search |
|---|---|---|---|
| Main purpose | Represents hierarchy | Searches department names | Searches sorted department names |
| Data organisation | Hierarchical | Sequential | Sorted sequential |
| Preserves hierarchy | Yes | No | No |
| Requires sorted data | No | No | Yes |
| Best-case search | Not applicable | O(1) | O(1) |
| Average search | Not applicable | O(n) | O(log n) |
| Worst-case search | Not applicable | O(n) | O(log n) |
| Extra search space | O(n) traversal queue | O(1) | O(1) |
| Suitable for reporting hierarchy | Excellent | Poor | Poor |
| Suitable for repeated department search | Not primary purpose | Acceptable for small data | Excellent |

## Recorded Search Comparisons

| Department | Linear Search | Binary Search |
|---|---:|---:|
| Development | 3 | 3 |
| HR | 6 | 2 |
| Testing | 8 | 4 |

### Observation

Binary search requires fewer comparisons for **HR** and **Testing**, while both methods require three comparisons for **Development** in this particular data set.

As the number of departments increases, binary search provides a significant advantage because its search time grows logarithmically rather than linearly.

## Final Comparison

The **child-sibling tree** is the most suitable representation for the organisational hierarchy because it clearly models the relationship between the CEO, departments, and sub-departments.

For department searching, the **sorted array with binary search** is preferred when the data is maintained in sorted order and searches are performed repeatedly.

Therefore, the recommended solution is to use the tree for organisational reporting and binary search for efficient department lookup.
