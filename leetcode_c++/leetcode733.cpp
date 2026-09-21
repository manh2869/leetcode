#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int color)
{
    if (image[x][y] == 0)
        return image;
    image[x][y] = color;
    if (x >= image[0].size() or x < 0)
    {
        return image;
    }
    if (y >= image.size() or y < 0)
    {
        return image;
    }
    floodFill(image, x, y + 1, color);
    floodFill(image, x + 1, y, color);
    floodFill(image, x, y - 1, color);
    floodFill(image, x - 1, y, color);
    cout << x << y << endl;
    // for (vector<int> x : image)
    // {
    //     for (int z : x)
    //     {
    //         cout << z;
    //     }
    //     cout << endl;
    // }

    return image;
}
int main()
{
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    //  vector<vector<int*>> t=&image;
    int sr = 1, sc = 1, color = 2;
    floodFill(image, sr, sc, color);
}
