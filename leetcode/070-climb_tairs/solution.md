# Solution

## Approach

The key observation is that to reach step `n`, there are only two possible previous positions:

- From step `n - 1` by taking one step.
- From step `n - 2` by taking two steps.

This leads to the recurrence:

```text
ways(n) = ways(n - 1) + ways(n - 2)
```

which is exactly the Fibonacci sequence.

Instead of storing the number of ways for every step, I only keep the last two computed values since each new result depends only on them.

I initialize two variables representing the number of ways to reach the previous two steps. Then, for each remaining step, I compute the next value and update both variables.

At the end of the iteration, the current value represents the number of distinct ways to reach the top.

## Complexity Analysis

| Metric | Value |
|--------|-------|
| Time Complexity | O(n) |
| Space Complexity | O(1) |

## What I Learned

- Many dynamic programming problems can be optimized from **O(n)** space to **O(1)** when each state depends only on a fixed number of previous states.
- The recurrence `ways(n) = ways(n - 1) + ways(n - 2)` is identical to the Fibonacci sequence.
- Using two variables instead of an array is enough because older values are never used again.
- This is a good example of **bottom-up dynamic programming with space optimization**.