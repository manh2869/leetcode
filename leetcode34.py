def searchRange(nums, target):

    if binarysearch(nums, target) == [-1, -1]:
        print("con ")
        return [-1, -1]
    else:
        pass


def binarysearch(nums, target):
    if len(nums) == 1 and target == nums[0]:
        return 0
    if len(nums) == 1 and target != nums[0]:
        return [-1,-1]
    l = 0
    r = len(nums) - 1
    check = False
    while l < r:
        mid = (r + l) // 2
        if nums[mid] == target:
            check = True
            return mid
        if nums[mid] > target:
            r = mid - 1
        if nums[mid] < target:
            l = mid + 1
    if check == False:
        return [-1, -1]


nums = [8]
target = 6
searchRange(nums, target)
