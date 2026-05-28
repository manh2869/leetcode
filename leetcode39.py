def combinationSum(candidates, target):
    result = []

    def backtrack(start, current, target):
        if target == 0:
            result.append(current[:])
            return
        for i in range(start, len(candidates)):
            if candidates[i] > target:
                break
            current.append(candidates[i])
            backtrack(i, current, target - candidates[i])
            current.pop()

    candidates.sort()
    backtrack(0, [], target)
    return result


a = [1, 2, 3, 4, 5]
print(combinationSum(a, 7))
