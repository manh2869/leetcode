#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int min_exit(vector<vector<char>> &maze, int x, int y, int count)
{
    if (x < 0 || y < 0 || x >= maze.size() || y >= maze[0].size() || maze[x][y] == '+')
    {
        return 0;
    }
    if ((x == 0 || y == 0 || x == maze.size() - 1 || y == maze[0].size() - 1) & maze[x][y] == '.')
        return count;
    min_exit(maze, x + 1, y, count + 1);
    min_exit(maze, x, y + 1, count + 1);
    min_exit(maze, x - 1, y, count + 1);
    min_exit(maze, x, y - 1, count + 1);
    return 0;
}
int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
{
    min_exit(maze, entrance[0], entrance[1],0);
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