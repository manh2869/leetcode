def subsetsWithDup(nums):
    result = []
    curr = []
    nums = sorted(nums)

    def dfs(i):
        if i >= len(nums):
            result.append(curr[:])
            return
        curr.append(nums[i])
        dfs(i + 1)
        curr.pop()
        dfs(i + 1)

    dfs(0)
    print(result)
    return result


subsetsWithDup([3, 1, 2])
