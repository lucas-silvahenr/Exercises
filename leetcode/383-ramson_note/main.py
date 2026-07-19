def canConstruct(ransomNote: str, magazine: str) -> bool:
    chars = {}

    for letter in magazine:
        chars[letter] = chars.get(letter, 0) + 1

    for letter in ransomNote:
        if chars.get(letter, 0) == 0:
            return False
        chars[letter] -= 1

    return True