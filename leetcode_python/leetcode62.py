def uniquePaths(m, n):

    res = [[0 for _ in range(n)] for _ in range(m)]
    for i in range(m - 1, -1, -1):
        res[i][n - 1] = 1
    for i in range(n - 1, -1, -1):
        res[m - 1][i] = 1

    for i in range(m - 2, -1, -1):
        for j in range(n - 2, -1, -1):
            res[i][j] = res[i + 1][j] + res[i][j + 1]

            # print(f"{i}   {j}    {res[i-1][j]}    {res[i][j-1]}")
    return res[0][0]

uniquePaths(3, 7)
