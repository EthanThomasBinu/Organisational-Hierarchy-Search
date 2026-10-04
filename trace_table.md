# Trace Table

## 1. Level-Order Traversal

The organisational hierarchy is represented using the child-sibling tree representation. A queue is used for level-order traversal.

| Step | Queue Before | Node Processed | Children Added | Queue After |
|---|---|---|---|---|
| 1 | CEO | CEO | HR, Finance, IT | HR, Finance, IT |
| 2 | HR, Finance, IT | HR | None | Finance, IT |
| 3 | Finance, IT | Finance | None | IT |
| 4 | IT | IT | Development, Testing | Development, Testing |
| 5 | Development, Testing | Development | Frontend, Backend | Testing, Frontend, Backend |
| 6 | Testing, Frontend, Backend | Testing | None | Frontend, Backend |
| 7 | Frontend, Backend | Frontend | None | Backend |
| 8 | Backend | Backend | None | Empty |

**Level-order output:** CEO → HR → Finance → IT → Development → Testing → Frontend → Backend

## 2. Linear Search Trace

The department array is sorted as:

Backend, CEO, Development, Finance, Frontend, HR, IT, Testing

### Search: Development

| Comparison | Array Element | Result |
|---|---|---|
| 1 | Backend | Not equal |
| 2 | CEO | Not equal |
| 3 | Development | Found |

**Total comparisons = 3**

### Search: HR

| Comparison | Array Element | Result |
|---|---|---|
| 1 | Backend | Not equal |
| 2 | CEO | Not equal |
| 3 | Development | Not equal |
| 4 | Finance | Not equal |
| 5 | Frontend | Not equal |
| 6 | HR | Found |

**Total comparisons = 6**

### Search: Testing

| Comparison | Array Element | Result |
|---|---|---|
| 1 | Backend | Not equal |
| 2 | CEO | Not equal |
| 3 | Development | Not equal |
| 4 | Finance | Not equal |
| 5 | Frontend | Not equal |
| 6 | HR | Not equal |
| 7 | IT | Not equal |
| 8 | Testing | Found |

**Total comparisons = 8**

## 3. Binary Search Trace

The sorted department array is:

Backend, CEO, Development, Finance, Frontend, HR, IT, Testing

### Search: Development

| Comparison | Low | High | Mid | Element | Result |
|---|---:|---:|---:|---|---|
| 1 | 0 | 7 | 3 | Finance | Target is smaller |
| 2 | 0 | 2 | 1 | CEO | Target is larger |
| 3 | 2 | 2 | 2 | Development | Found |

**Total comparisons = 3**

### Search: HR

| Comparison | Low | High | Mid | Element | Result |
|---|---:|---:|---:|---|---|
| 1 | 0 | 7 | 3 | Finance | Target is larger |
| 2 | 4 | 7 | 5 | HR | Found |

**Total comparisons = 2**

### Search: Testing

| Comparison | Low | High | Mid | Element | Result |
|---|---:|---:|---:|---|---|
| 1 | 0 | 7 | 3 | Finance | Target is larger |
| 2 | 4 | 7 | 5 | HR | Target is larger |
| 3 | 6 | 7 | 6 | IT | Target is larger |
| 4 | 7 | 7 | 7 | Testing | Found |

**Total comparisons = 4**
