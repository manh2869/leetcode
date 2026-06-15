def singleNumber(nums):
    nums.sort()
    for i in range(len(nums) - 1):
        if nums[i] == nums[i + 1]:
            i += 1
        else:
            return nums[i]


print(singleNumber([4, 1, 2, 1, 2]))
