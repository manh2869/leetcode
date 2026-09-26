#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

bool recursion(vector<vector<char>> &board, string word, int x, int y, int i, vector<vector<bool>> &visited)
{
    if (x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || board[x][y] != word[i])
        return 0;
    if (visited[x][y])
        return false;
    if (board[x][y] != word[i])
        return 0;
    if (i == word.size() - 1)
        return 1;

    visited[x][y] = true;

    if (recursion(board, word, x + 1, y, i + 1, visited))
        return true;

    if (recursion(board, word, x - 1, y, i + 1, visited))
        return true;

    if (recursion(board, word, x, y + 1, i + 1, visited))
        return true;

    if (recursion(board, word, x, y - 1, i + 1, visited))
        return true;

    visited[x][y] = false;

    return false;
}

bool exist(vector<vector<char>> &board, string word)
{
    vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
    return recursion(board, word, 0, 0, 0, visited);
}
int main()
{
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}};
    string word = {"ABCCED"};
    cout << exist(board, word) << endl;
}