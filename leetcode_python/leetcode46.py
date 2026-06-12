def permutation(a):
    result = []
    current = []
    used = [False] * len(a)

    def backtracking():
        if len(current) == len(a):
            result.append(current[:])
            return
        for i in range(len(a)):
            if used[i]:
                continue
            current.append(a[i])
            used[i] = True
            backtracking()
            current.pop()
            used[i] = False

    backtracking()
    for i in result:
        print(i)


a = [1, 2, 3]
permutation(a)
