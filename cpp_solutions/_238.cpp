#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res(n);
    int total_prod = 1;
    int zero_count = count(nums.begin(), nums.end(), 0);

    // if there is only one zero, then all the product will be zero
    if (zero_count > 1)
    {
        return res;
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            total_prod *= nums[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        // if there is only one zero, then all the product will be zero except the one whose value is 0
        if (zero_count == 1)
        {
            if (nums[i] == 0)
            {
                res[i] = total_prod;
            }
            else
            {
                res[i] = 0;
            }
        }
        else
        {
            res[i] = total_prod / nums[i];
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int> result = productExceptSelf(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}