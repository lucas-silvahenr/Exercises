# Solution

## Approach

Initially, I used a Hash Map to store the value of each Roman numeral. Once I know their values, it becomes a matter of iterating through the string and comparing the current symbol with the next one.

Another important detail about the problem is understanding how Roman numerals work. Roman numerals use subtraction in some cases, such as IV (4) and IX (9). Knowing this, all I had to do was:

* If the current value is smaller than the next value, I subtract it from the result.
* Otherwise, I add it to the result.

This allows the algorithm to correctly process both regular and subtraction cases in a single pass.

## Complexity Analysis

| Metric           | Value |
| ---------------- | ----- |
| Time Complexity  | O(n)  |
| Space Complexity | O(1)  |

## What I Learned

* How to use a Hash Map for constant-time lookups.
* How to compare adjacent elements while iterating through a string.
* How subtraction cases can be handled without creating many special conditions.
