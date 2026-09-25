#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int orangesRotting(vector<vector<int>> &grid, int x, int y)
{

    queue<pair<int, int>> q;
    q.push({x, y});
    vector<int> move_x = {1, -1, 0, 0};
    vector<int> move_y = {0, 0, 1, -1};
    for (int i = 0; i < q.size(); i++)
    {
        pair<int, int> t = q.front();
        int mx = t.first;
        int my = t.second;
        for (int j = 0; j < 4; j++)
        {
            
        }
    }

    return 1;
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