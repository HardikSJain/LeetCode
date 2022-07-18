#include <bits/stdc++.h>
using namespace std;

vector<int> numberOfPairs(vector<int> &nums)
{
    vector<int> ans;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && nums[i] != -1 && nums[j] != -1)
            {
                count++;
                nums[i] = -1;
                nums[j] = -1;
            }
        }
    }
    ans.push_back(count);
    ans.push_back(nums.size() - 2 * count);
    return ans;
}
int main()
{
    vector<int> nums = {1, 3, 2, 1, 3, 2, 2};
    vector<int> ans = numberOfPairs(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}