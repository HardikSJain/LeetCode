#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] > nums[r])
            l = mid + 1;
        else
            r = mid;
    }
    return nums[l];
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << findMin(nums) << endl;
}