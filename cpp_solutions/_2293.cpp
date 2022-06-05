#include <bits/stdc++.h>
using namespace std;

int minMaxGame(vector<int> &nums)
{

    if (nums.size() == 1)
        return nums[0];
    if (nums.size() / 2 == 1)
    {
        return min(nums[0], nums[1]);
    }

    vector<int> newNums(nums.size() / 2);

    for (int i = 0; i < nums.size() / 2; i++)
    {
        if (i % 2 == 0)
        {

            newNums[i] = min(nums[2 * i], nums[2 * i + 1]);
        }
        else
        {
            newNums[i] = max(nums[2 * i], nums[2 * i + 1]);
        }
    }

    return minMaxGame(newNums);
}

int main()
{
    vector<int> nums = {3};
    cout << minMaxGame(nums);
}