# Trace Table – Part B

Sorted array:

Backend, CEO, Development, Finance, Frontend, HR, IT, Testing

## Linear Search

| Target | Comparison sequence | Total |
|---|---|---:|
| Development | Backend → CEO → Development | 3 |
| HR | Backend → CEO → Development → Finance → Frontend → HR | 6 |
| Testing | Backend → CEO → Development → Finance → Frontend → HR → IT → Testing | 8 |

## Binary Search

### Development
Finance → CEO → Development = **3 comparisons**

### HR
Finance → HR = **2 comparisons**

### Testing
Finance → HR → IT → Testing = **4 comparisons**

| Target | Linear | Binary |
|---|---:|---:|
| Development | 3 | 3 |
| HR | 6 | 2 |
| Testing | 8 | 4 |
| **Total** | **17** | **9** |
