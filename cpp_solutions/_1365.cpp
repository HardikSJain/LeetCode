#include <bits/stdc++.h>
using namespace std;

// Hash Table
vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    unordered_map<int, int> m;
    vector<int> v;
    int n = nums.size();
    v = nums;
    sort(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--)
    {
        m[v[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        nums[i] = m[nums[i]];
    }
    return nums;
}

// Bruteforce solution
// vector<int> smallerNumbersThanCurrent(vector<int> &nums)
// {
//     vector<int> res;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < nums.size(); j++)
//         {
//             if (nums[j] < nums[i])
//                 cnt++;
//         }
//         res.push_back(cnt);
//     }
//     return res;
// }

int main()
{
    vector<int> nums = {8, 1, 2, 2, 3};
    // 1 2 2 3 8
    vector<int> temp = smallerNumbersThanCurrent(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << temp[i] << " ";
    }
}