#include<bits/stdc++.h>
using namespace std;

int findUnsortedSubarray(vector<int>& nums) {
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left < n - 1 && nums[left] <= nums[left + 1])
    {
        left++;
    }
    while (right > 0 && nums[right] >= nums[right - 1])
    {
        right--;
    }
    if (left >= right)
    {
        return 0;
    }
    int minm = nums[left], maxm = nums[right];
    for (int i = left; i <= right; i++)
    {
        minm = min(minm, nums[i]);
        maxm = max(maxm, nums[i]);
    }
    while (left >= 0 && nums[left] > minm)
    {
        left--;
    }
    while (right < n && nums[right] < maxm)
    {
        right++;
    }
    return right - left - 1;
}

int main(){
    vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
    cout << findUnsortedSubarray(nums) << endl;
    return 0;
}
    