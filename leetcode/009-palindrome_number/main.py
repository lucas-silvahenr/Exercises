def isPalindrome(x):
    """
    :type x: int
    :rtype: bool
    """
    return (str(x)[::-1] == str(x))

print(f"Result: {isPalindrome(121)}\nExpected: True\n")
print(f"Result: {isPalindrome(-121)}\nExpected: False\n")
print(f"Result: {isPalindrome(10)}\nExpected: False\n")