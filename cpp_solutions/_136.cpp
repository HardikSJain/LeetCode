#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        // xor of same numbers is zero
        // xor of 0 and num is num
        ans = ans ^ nums[i];
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumber(nums);
    return 0;
}