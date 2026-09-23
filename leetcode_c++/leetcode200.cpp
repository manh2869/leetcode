#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int numIslands(vector<vector<char>> &grid)
{
    for (vector<char> a : grid)
    {
        for (char x : a)
        {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    vector<vector<char>> grid = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}};
    numIslands(grid);
    return 0;
}