def uniquePathsWithObstacles(obstacleGrid):
    m, n = len(obstacleGrid), len(obstacleGrid[0])
    memo = [[-1 for _ in range(n)] for _ in range(m)]

    def dp(i, j):
        if i >= m or j >= n:
            return 0
        if obstacleGrid[i][j] == 1:
            return 0
        if i == m - 1 and j == n - 1:
            return 1
        if memo[i][j] != -1:
            return memo[i][j]
        memo[i][j] = dp(i + 1, j) + dp(i, j + 1)
        return memo[i][j]

    return dp(0, 0)


print(uniquePathsWithObstacles([[0, 0, 0], [0, 1, 0], [0, 0, 0]]))
