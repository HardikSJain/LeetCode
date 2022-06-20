#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    sort(nums.begin(), nums.end());

    int maxlen = 0;
    int currentlen = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            continue;
        }
        if (nums[i] == nums[i - 1] + 1)
        {
            currentlen++;
        }
        else
        {
            maxlen = max(maxlen, currentlen);
            currentlen = 1;
        }
    }
    return max(maxlen, currentlen);
}

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums) << endl;
    return 0;
}