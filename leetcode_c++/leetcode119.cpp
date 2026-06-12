#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<vector<int>> a = {{1}};
    for (int i = 0; i < rowIndex; i++)
    {
        vector<int> curr = {1};
        vector<int> prev = a.back();
        for (int j = 0; j < prev.size() - 1; j++)
        {
            curr.push_back(prev[j] + prev[j + 1]);
        }
        curr.push_back(1);
        a.push_back(curr);
    }

    return a.back();
}

int main()
{
    vector<int> a = getRow(6);
    for (int x : a)
    {
        cout << x << endl;
    }

    cout << "vai ca loz" << endl;
}