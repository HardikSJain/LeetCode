#include <bits/stdc++.h>
using namespace std;

int findLengthOfLCIS(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }
    int max_len = 1;
    int cur_len = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            cur_len++;
        }
        else
        {
            cur_len = 1;
        }
        max_len = max(max_len, cur_len);
    }
    return max_len;
}

int main()
{
    vector<int> nums = {1, 3, 5, 4, 7};
    cout << findLengthOfLCIS(nums) << endl;
    return 0;
}