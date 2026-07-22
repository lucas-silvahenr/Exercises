# Search Insert Position

## Information

| Property   | Value                                                 |
| ---------- | ----------------------------------------------------- |
| Difficulty | Easy                                                  |
| Topic      | Array, Binary Search                                  |
| Link       | https://leetcode.com/problems/search-insert-position/ |

## Problem Summary

Given a sorted array of distinct integers and a target value, return the index if the target is found.

If the target is not present, return the index where it would be inserted while maintaining the sorted order. Your solution must have a runtime complexity of `O(log n)`.

## Examples

### Example 1

```text
Input: nums = [1,3,5,6], target = 5
Output: 2
```

### Example 2

```text
Input: nums = [1,3,5,6], target = 2
Output: 1
```

### Example 3

```text
Input: nums = [1,3,5,6], target = 7
Output: 4
```

## Constraints

```text
1 <= nums.length <= 10^4
-10^4 <= nums[i] <= 10^4

nums contains distinct values sorted in ascending order.

-10^4 <= target <= 10^4
```
