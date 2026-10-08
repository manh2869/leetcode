#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int countBattleships(vector<vector<char>> &board)
{
    vector<vector<int>> s;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == 'x')
            {
                bfs(i, j, board);
            }
        }
    }
    return 0;
}
class Solution {
public:
    int countBattleships(vector<vector<char>>&board) {
        int count = 0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == 'X') {
                    bfs(i, j, board);
                    count++;
                }
            }
        }
        return count;
    }
    void bfs(int i, int j, vector<vector<char>>&board) {
        if (i >= board.size() || j >= board[0].size() || j < 0 || i < 0 ||
            board[i][j] =='.') {
            return;
        }
        board[i][j] ='.';
        bfs(i + 1, j, board);
        bfs(i - 1, j, board);
        bfs(i, j - 1, board);
        bfs(i, j + 1, board);
    }
};
// int bfs(int i, int j, vector<vector<char>> &board)
// {
//     queue<pair<int, int>> q;
//     vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
//     q.push({i, j});
//     visited[i][j] = true;
//     vector<int> mx = {1, -1, 0, 0};
//     vector<int> my = {0, 0, -1, 1};

//     while (!q.empty())
//     {
//         pair<int, int> t = q.front();
//         q.pop();
//         for (int k = 0; k < 4; k++)
//         {
//             int nx = mx[k] + t.first;
//             int ny = my[k] + t.second;
//             if (nx >= board.size() || ny >= board[0].size() || nx < 0 || ny < 0)
//                 continue;
//             if (board[nx][ny] == '.' || visited[nx][ny] == true)
//                 continue;
//             visited[nx][ny] = true;
//             q.push({nx, ny});
//             cout << nx << "  " << ny << endl;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     vector<vector<char>> board = {
//         {'X', '.', '.', 'X'},
//         {'.', '.', '.', 'X'},
//         {'.', 'x', '.', 'x'},
//         {'.', '.', '.', 'X'},
//         {'.', '.', '.', 'X'}};
//     vector<vector<int>> s;
//     countBattleships(board);
//     bfs(0,3 , board);
// }