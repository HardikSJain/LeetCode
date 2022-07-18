#include <bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int maximumSum(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> unorder_map;
    int ans = -1, first = 0, second = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = digitSum(nums[i]);

        if (unorder_map[temp] != 0)
        {
            if (nums[i] + unorder_map[temp] > ans)
            {
                first = nums[i];
                second = unorder_map[temp];
                ans = first + second;
            }
        }

        unorder_map[temp] = max(nums[i], unorder_map[temp]);
    }
    return ans;
}

int main()
{
    vector<int> nums = {18, 43, 36, 13, 7};
    int ans = maximumSum(nums);
    cout << ans;
    return 0;
}
