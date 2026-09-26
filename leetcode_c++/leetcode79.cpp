#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

bool recursion(vector<vector<char>> &board, string word, int x, int y)
{
    if ()
    {
    }
    return 0;
}

bool exist(vector<vector<char>> &board, string word)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == word[0])
                recursion(board, word, i, j);
        }
    }
    return 0;
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