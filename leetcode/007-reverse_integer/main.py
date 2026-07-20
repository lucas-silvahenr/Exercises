def reverse(x: int) -> int:
    reversed_num = 0
    sign = -1 if x < 0 else 1
    limit = 2**31 if sign == -1 else 2**31 - 1
    x = abs(x)
    
    while x > 0:
        last_digit = x % 10
        reversed_num = (reversed_num * 10) + last_digit
        x = x // 10

    if reversed_num > limit:
        return 0

    return reversed_num * sign