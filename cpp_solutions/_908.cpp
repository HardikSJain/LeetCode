#include <bits/stdc++.h>
using namespace std;

// int smallestRangeI(vector<int>& nums, int k) {

// }
int smallestRangeI(vector<int>& nums, int k) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int minm = nums[0];
    int maxm = nums[n-1];
    int ans = max(0,(maxm-minm-2*k));
    // cout << ans;
    return ans;
}
int main()
{
    vector<int> nums = {9,9,2,8,7};
    int k = 4;
    int ans = smallestRangeI(nums, k);
    cout<<ans;
}