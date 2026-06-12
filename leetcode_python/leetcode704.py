def binaryseach(nums, target):
    right = len(nums) - 1
    left = 0
    check = False
    while left < right:
        mid = (right + left) // 2
        print(f"  {left}   {right}    {mid}  ")
        if nums[mid] == target:
            check = True
            return mid
        if nums[mid] < target:
            left = mid + 1
        if nums[mid] > target:
            right = mid - 1
    if check == False:
        return -1


a = [2,9]
print(binaryseach(a, 9))
