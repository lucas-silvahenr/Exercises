# Solution

## Approach

The idea behind this solution is to use **two pointers**, one starting at the beginning of the string and the other at the end.

Since the problem only considers **alphanumeric characters** and ignores **letter casing**, both pointers skip any character that is not a letter or digit. After finding valid characters, they are converted to lowercase and compared.

If the characters are different, the string cannot be a palindrome, so the function immediately returns `False`. Otherwise, both pointers move toward the center and continue the process until they meet or cross each other.

If no mismatch is found, the string is a palindrome, and the function returns `True`.

## Complexity Analysis

| Metric | Value |
| ------- | ----- |
| Time Complexity | **O(n)** |
| Space Complexity | **O(1)** |

## What I Learned

- How the **two pointers** technique efficiently compares characters from both ends of a string.
- How to ignore non-alphanumeric characters using `isalnum()`.
- How to solve the problem in a single traversal while using constant extra space.