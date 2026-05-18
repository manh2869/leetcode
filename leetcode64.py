def minPathSum(grid):
    res = [[0 for _ in range(len(grid))] for _ in range(len(grid[0]))]
    res[0][0] = grid[0][0]
    for j in range(1,len(grid[0])):
        res[0][j] = res[0][j - 1] + grid[0][j]
    for i in range(1,len(grid)):
        res[i][0] = res[i - 1][0] + grid[i][0]
    for i in range(1, len(grid)):
        for j in range(1, len(grid[0])):
            res[i][j] = grid[i][j] + min(res[i - 1][j], res[i][j - 1])
    return res[-1][-1]


grid= [[1,2,3],[4,5,6]]
print(minPathSum(grid))
