#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int min_exit(vector<vector<char>> &maze, int x, int y)
{   
    return 0;
}
int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
{
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