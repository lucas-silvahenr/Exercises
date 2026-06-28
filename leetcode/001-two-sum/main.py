def twoSum(nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        seen = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]
            seen[num] = i


nums = [3, 2, 4]
target = 6
expected = [1, 2]
print(f"Expected: {expected}\nResult:{twoSum(nums, target)}\n")
