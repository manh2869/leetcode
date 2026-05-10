def minPathSum(grid):

    def find(i, j):

        if i == len(grid) - 1 and j == len(grid[0]) - 1:
            return grid[i][j]
        if i == len(grid) - 1:
            return grid[i][j] + find(i, j + 1)
        if j == len(grid[0]) - 1:
            return grid[i][j] + find(i + 1, j)
        return grid[i][j] + min(find(i + 1, j), find(i, j + 1))

    return find(0, 0)


grid = [[1, 3, 1], [1, 5, 1], [4, 2, 1]]
print(minPathSum(grid))
input()
