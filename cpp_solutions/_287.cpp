#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    // FLOYD CYCLE DETECTION
    int slow = nums[0];
    int fast = nums[nums[0]];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    slow = 0;
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int findDuplicate1(vector<int> &nums)
{
    // COUNT VECTOR
    vector<int> cnt(nums.size(), 0);
    int res = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        cnt[nums[i]]++;
    }

    for (int i = 0; i < cnt.size(); i++)
    {
        if (cnt[i] > 1)
        {
            res = i;
            break;
        }
    }

    return res;
}

// slow = 1; fast = 3

// slow = 3; fast = 4
// slow = 2; fast = 4
// slow = 4; fast = 4

// slow = 0;
// slow = 1; fast = 4
// slow = 3; fast = 4
// slow = 2; fast = 4
// slow = 4; fast = 4

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << findDuplicate(nums) << endl;
    return 0;
}
