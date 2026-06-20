#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;
// vector<int> grayCode(int n)
// {
//     vector<int> result;
//     return result;
// }

// vector<int> binary(int x)
// {
//     vector<int> s;
//     if (x == 0)
//     {
//         s.push_back(0);
//         return s;
//     }
//     while (x > 0)
//     {
//         s.push_back(x % 2);
//         x /= 2;
//     }
//     reverse(s.begin(), s.end());
//     return s;
// }

int main()
{
    vector<int> a;
    int x = 5;
    for (int i = 0; i < 10; i++)
    {
        cout << (10000 >> i) << endl;
    }
    return 0;
}