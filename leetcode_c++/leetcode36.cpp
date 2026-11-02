#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool check_row(vector<char> &r)
{
    sort(r.begin(), r.end());
    for (int i = 0; i < size(r) - 1; i++)
    {
        if (r[i] == r[i + 1])
            return 0;
    }
    return 1;
}
bool check_rect(vector<vector<char>> board, int a, int b)
{
    for (int i = a; i <= size(board); i++)
    {
        for (int j = b; j <= size(board); j++) 
        {
        }
    }
}
bool isValidSudoku(vector<vector<char>> &board)
{

    for (int i = 1; i <= size(board); i++)
    {

        vector<char> r;
        vector<char> c;

        int count = 0;
        for (int j = 1; j <= size(board); j++)
        {
            count += 1;

            if (board[i - 1][j - 1] == '.' && board[j - 1][i - 1] == '.')
                continue;
            else
            {
                if (board[i - 1][j - 1] != '.')
                    r.push_back(int(board[i - 1][j - 1]));
                if (board[j - 1][i - 1] != '.')
                    c.push_back(int(board[j - 1][i - 1]));
            }
        }
        if (check_row(r) == 0 or check_row(c) == 0)
            return 0;
    }
    return 1;
}
int main()
{
    vector<vector<char>> board = {
        {'1', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    cout << isValidSudoku(board) << endl;
}