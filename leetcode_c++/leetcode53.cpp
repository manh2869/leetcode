#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int current = nums[0];
    int answer = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        current = max(nums[i], current + nums[i]);
        answer = max(answer, current);
    }
}
int main()
{
    vector<int> a = {-2, 1};
    cout << maxSubArray(a) << endl;

    return 0;
}