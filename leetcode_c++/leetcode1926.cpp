#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int min_exit(vector<vector<char>> &maze, vector<vector<bool>> &visited, int x, int y, int count)
{
    if (x < 0 || y < 0 || x >= maze.size() || y >= maze[0].size() || maze[x][y] == '+' ||
        visited[x][y])
    {
        return 99999999;
    }
    if ((x == 0 || y == 0 || x == maze.size() - 1 || y == maze[0].size() - 1) && maze[x][y] == '.')
        return count;
    visited[x][y] = true;

    int a = min_exit(maze, visited, x + 1, y, count + 1);
    int b = min_exit(maze, visited, x, y + 1, count + 1);
    int c = min_exit(maze, visited, x - 1, y, count + 1);
    int d = min_exit(maze, visited, x, y - 1, count + 1);

    return min({a, b, c, d});
}
int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
{
    vector<vector<bool>> visited(
        maze.size(),
        vector<bool>(maze[0].size(), false));
    min_exit(maze, visited, entrance[0], entrance[1], 0);
    return 0;
}
int main()
{
    vector<vector<char>> maze = {
        {'+', '+', '.', '+'},
        {'.', '.', '.', '+'},
        {'+', '+', '+', '.'}};
    vector<int> entrance = {1, 2};
    cout << nearestExit(maze, entrance) << endl;
}