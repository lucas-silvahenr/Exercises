# Solution

## Approach

The key idea is to simulate the same addition process we use on paper.

Since the digits are stored in reverse order, I iterate through both linked lists simultaneously, adding the corresponding digits one by one.

To handle sums greater than or equal to 10, I keep track of a `carry` value (the "carry-over" from the previous addition). For each iteration:

* Read the current value from both lists (using `0` if one list is shorter).
* Compute the sum of both values and the current `carry`.
* Create a new node with `total % 10`.
* Update the `carry` with `total // 10`.
* Move to the next nodes.

One important detail is that the loop continues while there are still nodes to process **or** there is a remaining `carry`. This ensures that cases like `99 + 1 = 100` are handled correctly by creating the final node.

A dummy node is used to simplify building the resulting linked list without having to treat the first node as a special case.

## Complexity Analysis

| Metric           | Value                              |
| ---------------- | ---------------------------------- |
| Time Complexity  | O(max(n, m))                       |
| Space Complexity | O(1) |

## What I Learned

* How to perform addition directly on linked lists without converting them to integers.
* How the `carry` propagates between iterations, just like in manual addition.
* How a dummy node simplifies linked list construction by avoiding edge cases for the head node.
* Why iterating until both lists and the `carry` are exhausted guarantees the correct result.
