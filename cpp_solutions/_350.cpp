#include <bits/stdc++.h>
using namespace std;
// hashmaps
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;

    vector<int> res;
    int m = nums1.size();
    int n = nums2.size();

    for (int i = 0; i < m; ++i)
    {
        mp1[nums1[i]]++;
    }
    for (int i = 0; i < n; ++i)
    {
        mp2[nums2[i]]++;
    }

    for (auto it : mp1)
    {
        if (mp2.find(it.first) != mp2.end())
        {
            int count = min(it.second, mp2[it.first]);
            while (count--)
            {
                res.push_back(it.first);
            }
        }
    }
    return res;
}

vector<int> intersect1(vector<int> &nums1, vector<int> &nums2)
{
    // 2 pointer
    vector<int> res;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            res.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return res;
}

int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> res = intersect(nums1, nums2);
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}