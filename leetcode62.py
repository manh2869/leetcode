def uniquePaths(m, n):
    def bt(i, j):
        if (i == m - 1) and (j == n - 1):
            return 1
        if i == m or j == n:
            return 0
        return bt(i + 1, j) + bt(i, j + 1)

    return bt(0, 0)
