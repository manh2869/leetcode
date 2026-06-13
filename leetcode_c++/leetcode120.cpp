#include <iostream>
#include <vector>
using namespace std;

int minimumTotal(vector<vector<int>> &triangle)
{
    int dp[triangle.size()][triangle[triangle.size() - 1].size()];

    for (int i = 0; i < triangle[triangle.size() - 1].size(); i++)
    {
        dp[triangle.size() - 1][i] = triangle[triangle.size() - 1][i];
    }
    for (int i = triangle.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            dp[i][j] = triangle[i][j] + min(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
    // for (int i = 0; i < triangle.size(); i++)
    // {
    //     cout << dp[triangle.size() - 1][i]<<"  clmm   "<<endl;
    // }
    return dp[0][0];
}

int main()
{
    vector<vector<int>> triangle = {{2},
                                    {3, 4},
                                    {6, 5, 7},
                                    {4, 1, 8, 3}};
    cout << minimumTotal(triangle) << endl;
}