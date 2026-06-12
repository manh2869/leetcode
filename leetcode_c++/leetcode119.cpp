#include <iostream>
#include <vector>
using namespace std;


vector<int> getRow(int rowIndex)
{
    vector<vector<int>> a;
    vector<int> b;
    for (int i = 0; i < rowIndex; i++)
    {
        cout << i << endl;
    }
    return b;
}

int main()
{
    getRow(6);
    cout << "vai ca loz" << endl;
}