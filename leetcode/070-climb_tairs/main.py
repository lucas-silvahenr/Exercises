def climbStairs(n: int):
    current, previous = 1,1
    for _ in range(n - 1):
        current, previous = current + previous, current

    return current
