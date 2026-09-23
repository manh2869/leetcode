#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int bfs(vector<vector<char>> &grid, vector<vector<int>> check /*test*/, int x, int y)
{

    if (grid[x][y] == '0' || check[x][y] == 1 || x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size())
    {
        return 0;
    }
    bfs(grid, check, x + 1, y);
    bfs(grid, check, x, y - 1);
    return 1;
}
int numIslands(vector<vector<char>> &grid)
{
    vector<vector<int>> check = {
        grid.size(),
        vector<int>(grid[0].size(), 0)};
    int sum = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            sum += bfs(grid, check, i, j);
        }
    }

    return sum;
}
int main()
{
    vector<vector<char>> grid = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}};
    cout << numIslands(grid) << endl;
    return 0;
}