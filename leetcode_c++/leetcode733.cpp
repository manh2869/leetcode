#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
vector<vector<int>> bfs(vector<vector<int>> &image, int x, int y, int orr, int color)
{
    if (x >= image.size() or x < 0 or y >= image[0].size() or y < 0)
        return image;
    // need one if
    if (image[x][y] != orr)
        return image;
    image[x][y] = color;
    bfs(image, x + 1, y, orr, color);
    bfs(image, x, y - 1, orr, color);
    bfs(image, x - 1, y, orr, color);
    bfs(image, x, y + 1, orr, color);
    return image;
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    return bfs(image, sr, sc, image[sr][sc], color);
}
int main()
{
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    int sr = 1, sc = 1, color = 2;
    floodFill(image, sr, sc, color);
    for (vector<int> x : image)
    {
        for (int z : x)
        {
            cout << z;
        }
        cout << endl;
    }
}
