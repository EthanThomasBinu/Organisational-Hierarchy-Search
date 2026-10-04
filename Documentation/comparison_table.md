# Comparison Table

| Feature | Child-Sibling Tree | Linear Search | Binary Search |
|---|---|---|---|
| Purpose | Represents hierarchy | Searches sequentially | Searches sorted data |
| Preserves hierarchy | Yes | No | No |
| Sorted data required | No | No | Yes |
| Search best case | — | O(1) | O(1) |
| Search average case | — | O(n) | O(log n) |
| Search worst case | — | O(n) | O(log n) |
| Extra search space | O(n) for level-order queue | O(1) | O(1) |
| Best use | Organisational reporting | Small/unsorted lists | Repeated searches |

## Measured Results

| Department | Linear Search | Binary Search |
|---|---:|---:|
| Development | 3 | 3 |
| HR | 6 | 2 |
| Testing | 8 | 4 |
| **Total** | **17** | **9** |

Binary Search used 9 comparisons compared with 17 for Linear Search for these three searches.
