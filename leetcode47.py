def permutations(nums):
    result = []
    current = []
    used = [False] * len(nums)

    def backtracking():
        if len(current) == len(nums):
            result.append(current[:])
            return
        for i in range(len(nums)):
            if used[i]:
                continue
            current.append(nums[i])
            used[i] = True
            backtracking()
            current.pop()
            used[i] = False

    backtracking()
    r = list({tuple(x) for x in result})
    r = [list(x) for x in r]
    return r


a = [1, 1, 2]
r = permutations(a)
for i in r:
    print(i)
