def combine(n, k):
    # res = [[0 for _ in range(k)] for _ in range(n)]
    # for i in res:
    #     print(i)
    res = []
    cur = []
    # l = []

    def backtrack(start):
        if len(cur) == k:
            res.append(cur[:])
            return
        for i in range(start, n+1):
            cur.append(i)
            backtrack(i + 1)
            cur.pop()

    backtrack(1)
    return res


#   [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
print(combine(4, 2))
