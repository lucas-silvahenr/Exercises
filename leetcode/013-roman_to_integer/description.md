# Roman to Integer

## Information

| Property | Value |
|----------|--------|
| Difficulty | Easy |
| Topic | Hash Table, String |
| Link | https://leetcode.com/problems/roman-to-integer/ |

## Problem Summary

Roman numerals are represented by the symbols:

| Symbol | Value |
|---------|---------|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

Roman numerals are usually written from largest to smallest. However, some combinations use subtraction:

| Combination | Value |
|------------|---------|
| IV | 4 |
| IX | 9 |
| XL | 40 |
| XC | 90 |
| CD | 400 |
| CM | 900 |

Given a Roman numeral string, convert it to an integer.

## Examples

### Example 1

```text
Input: s = "III"
Output: 3
```

### Example 2
```text
Input: s = "LVIII"
Output: 58
```

### Example 3
```text
Input: s = "MCMXCIV"
Output: 1994
```

### Constraints
1 <= s.length <= 15

s contains only:
'I', 'V', 'X', 'L', 'C', 'D', 'M'

1 <= value <= 3999