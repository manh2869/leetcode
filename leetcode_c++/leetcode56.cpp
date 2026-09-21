#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> a;
    for (vector<int> &x : intervals)
        sort(x.begin(), x.end());
    sort(intervals.begin(), intervals.end());

    // for (int i = 0; i < intervals.size(); i++)
    // {
    //     // for (int z : x)
    //     if (x)
    // }
    return intervals;
}
int main()
{
    vector<vector<int>> a = {
        {4, 7},
        {4, 1},
    };
    merge(a);
}