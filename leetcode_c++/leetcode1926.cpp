#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
{
    vector<vector<int>> distance(
        maze.size(),
        vector<int>(maze[0].size(), 0));
    distance[entrance[0]][entrance[1]] = 1;
    queue<pair<int, int>> q;
    q.push({entrance[0], entrance[1]});
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= maze.size() || ny >= maze[0].size())
                continue;
            if (maze[nx][ny] == '+')
                continue;
            if (distance[nx][ny] != 0)
                continue;
            distance[nx][ny] = distance[x][y] + 1;
            if (nx == 0 || ny == 0 || nx == maze.size() - 1 || ny == maze[0].size() - 1)
                return distance[nx][ny] - 1;
            q.push({nx, ny});
        }
    }
    return -1;
}
int main()
{
    vector<vector<char>> maze = {
        {'+', '+', '+', '+'},
        {'.', '.', '.', '+'},
        {'+', '+', '.', '+'},
        {'.', '.', '.', '+'},
        {'+', '+', '+', '+'}};
    vector<int> entrance = {1, 0};
    cout << nearestExit(maze, entrance) << endl;
}