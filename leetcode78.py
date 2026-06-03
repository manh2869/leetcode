def subsets(nums):
    result = []
    cur = []

    def dfs(i):
        if i >= len(nums):
            result.append(cur[:])
            return
        cur.append(nums[i])
        dfs(i + 1)
        cur.pop()
        dfs(i + 1)

    dfs(0)
    return result


print(subsets([1, 2, 3]))
