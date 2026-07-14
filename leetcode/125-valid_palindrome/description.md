# Valid Palindrome

## Information

| Property   | Value                                           |
| ---------- | ----------------------------------------------- |
| Difficulty | Easy                                            |
| Topic      | Two Pointers, String                            |
| Link       | https://leetcode.com/problems/valid-palindrome/ |

## Problem Summary

Given a string, determine whether it is a palindrome after converting all uppercase letters to lowercase and removing all non-alphanumeric characters.

Return `true` if the resulting string is a palindrome; otherwise, return `false`.

## Examples

### Example 1

```text
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
```

### Example 2

```text
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
```

### Example 3

```text
Input: s = " "
Output: true
Explanation: After removing all non-alphanumeric characters, the string is empty. An empty string is considered a palindrome.
```

## Constraints

```text
1 <= s.length <= 2 * 10^5

s consists only of printable ASCII characters.
```
