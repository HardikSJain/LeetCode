#include <bits/stdc++.h>
using namespace std;

// 2 Pointer
vector<vector<int>> threeSum(vector<int> &nums)
{

    vector<vector<int>> res;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i)
    {
        int low = i + 1;
        int high = nums.size() - 1;

        int expectedSum = -1 * nums[i];
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        while (low < high)
        {
            int temp = nums[low] + nums[high];

            if (temp < expectedSum)
            {
                low++;
            }
            else if (temp > expectedSum)
            {
                high--;
            }
            else
            {
                res.push_back(vector<int>{nums[i], nums[low], nums[high]});
                int last_low_occurence = nums[low];
                int last_high_occurence = nums[high];

                while (low < high && low < nums.size() - 1 && nums[low] == last_low_occurence)
                {
                    low++;
                }
                while (low < high && high > 0 && nums[high] == last_high_occurence)
                {
                    high--;
                }
            }
        }
    }
    return res;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {0, 0, 0, 0};
    vector<vector<int>> ans = threeSum(nums);
    for (int i = 0; i < ans.size(); ++i)
    {
        for (int j = 0; j < ans[0].size(); ++j)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
