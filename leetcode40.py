def combinationSum2(candidates, target):

    result = []

    def backtrack(start, current, target):
        if target == 0:
            result.append(current[:])
            return
        for i in range(start, len(candidates)):
            if candidates[i] > target:
                break
            current.append(candidates[i])
            backtrack(i + 1, current, target - candidates[i])
            current.pop()

    candidates.sort()
    backtrack(0, [], target)
    return result


candidates = [10, 1, 2, 7, 6, 1, 5]
target = 8
print(combinationSum2(candidates, target))
