# Trace Table – Part A

| Step | Queue Before | Processed | Children Added | Queue After |
|---|---|---|---|---|
| 1 | CEO | CEO | HR, Finance, IT | HR, Finance, IT |
| 2 | HR, Finance, IT | HR | None | Finance, IT |
| 3 | Finance, IT | Finance | None | IT |
| 4 | IT | IT | Development, Testing | Development, Testing |
| 5 | Development, Testing | Development | Frontend, Backend | Testing, Frontend, Backend |
| 6 | Testing, Frontend, Backend | Testing | None | Frontend, Backend |
| 7 | Frontend, Backend | Frontend | None | Backend |
| 8 | Backend | Backend | None | Empty |

**Result:** CEO → HR → Finance → IT → Development → Testing → Frontend → Backend

**Tree height:** 3 edges (4 levels).
