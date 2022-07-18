#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> &nums, vector<int> &numsDivide)
{
    int gcd = 0;
    int ans = 0;
    sort(nums.begin(), nums.end());

    for (auto i : numsDivide)
    {
        gcd = __gcd(gcd, i);
    }
    int size = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == gcd || gcd % nums[i] == 0)
        {
            break;
        }
        else
        {
            ans++;
            size--;
        }
    }

    if (size == 0)
    {
        return -1;
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 2, 4, 3};
    vector<int> numsDivide = {9, 6, 9, 3, 15};
    cout << minOperations(nums, numsDivide) << endl;
    return 0;
}