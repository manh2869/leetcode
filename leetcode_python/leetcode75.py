def sortColors(nums):
    for i in range(len(nums)):
        min = i
        for j in range(i, len(nums) ):
            if nums[min] > nums[j]:
                min = j

        nums[min], nums[i] = nums[i], nums[min]


nums = [2, 0, 2, 1, 1, 0]
sortColors(nums)
for i in nums:
    print(i)
