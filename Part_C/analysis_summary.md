# Analysis Summary

## Observations

The hierarchy contains 8 nodes. The longest path from the CEO to a leaf contains 3 edges, so the tree height is 3.

Level-order traversal visits the departments level by level using a queue.

For the three recorded searches, Linear Search required 17 total comparisons, while Binary Search required 9.

## Interpretation

Binary Search is not always better for a single search: for Development, both methods required 3 comparisons. However, as the number of departments grows, Binary Search scales better because its worst-case time is O(log n), compared with O(n) for Linear Search.

The tree and search array solve different parts of the problem, so using both is appropriate.
