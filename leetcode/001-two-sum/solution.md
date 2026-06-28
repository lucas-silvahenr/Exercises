# Solution

## Approach

The idea for this solution came from realizing that it wasn't necessary to compare each element with every other one. Instead, I only needed to check whether the missing complement had already been encountered during the iteration.

So, I created a dictionary to store each element as I iterated through the array. If the required complement had already appeared, it would already be in the dictionary, and I could return both indices.

## Complexity Analysis

| Metric           | Value |
| ---------------- | ----- |
| Time Complexity  | O(n)  |
| Space Complexity | O(n)  |

## What I Learned

* How a dictionary can reduce the search time from O(n) to O(1).
* How to trade additional memory for better performance.
* How to solve the problem in a single pass.
