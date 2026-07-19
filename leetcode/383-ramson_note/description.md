# Ransom Note

## Information

| Property   | Value                                      |
| ---------- | ------------------------------------------ |
| Difficulty | Easy                                       |
| Topic      | Hash Table, String, Counting               |
| Link       | https://leetcode.com/problems/ransom-note/ |

## Problem Summary

Given two strings, `ransomNote` and `magazine`, determine whether the ransom note can be constructed using the characters from the magazine.

Each character in `magazine` can be used at most once. Return `true` if the ransom note can be constructed; otherwise, return `false`.

## Examples

### Example 1

```text
Input: ransomNote = "a", magazine = "b"
Output: false
```

### Example 2

```text
Input: ransomNote = "aa", magazine = "ab"
Output: false
```

### Example 3

```text
Input: ransomNote = "aa", magazine = "aab"
Output: true
```

## Constraints

```text
1 <= ransomNote.length, magazine.length <= 10^5

ransomNote and magazine consist of lowercase English letters.
```
