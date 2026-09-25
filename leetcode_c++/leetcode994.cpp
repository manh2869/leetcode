#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int orangesRotting(vector<vector<int>> &grid, int x, int y)
{
    int count = 0;
    queue<pair<int, int>> q;
    vector<int> move_x = {1, -1, 0, 0};
    vector<int> move_y = {0, 0, 1, -1};
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({i, j});
            }
        }
    }
    while (!q.empty())
    {
        for (int i = 0; i < q.size(); i++)
        {
            pair<int, int> t = q.front();
            q.pop();
            int mx = t.first;
            int my = t.second;
            for (int j = 0; j < 4; j++)
            {
                if (mx + move_x[j] < 0 ||
                    mx + move_x[j] >= grid.size() ||
                    my + move_y[j] < 0 ||
                    my + move_y[j] >= grid[0].size())
                {
                    continue;
                }
                if (grid[mx][my] == 1)
                {
                    grid[mx][my] = 2;
                    q.push({mx, my});
                }
            }
        }
        count++;
    }
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                return -1;
            }
        }
    }
    return count - 1;
}
int main()
{
    vector<vector<int>> grid = {
        {2, 1, 1, 0, 1},
        {1, 1, 0, 0, 2},
        {0, 1, 1, 0, 1},
        {0, 0, 0, 1, 0}};
    cout << orangesRotting(grid) << endl;
}