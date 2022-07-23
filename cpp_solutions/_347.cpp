#include <bits/stdc++.h>
using namespace std;

static bool sortbysec(const pair<int, int> &a,
                      const pair<int, int> &b)
{
    // descending order
    return (a.second > b.second);
}
vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> res;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    vector<pair<int, int>> v;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        v.push_back(make_pair(it->first, it->second));
    }
    sort(v.begin(), v.end(), sortbysec);

    for (int i = 0; i < k; i++)
    {
        res.push_back(v[i].first);
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 1, 1, 1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = topKFrequent(nums, k);
    for (auto i : result)
        cout << i << " ";
    cout << endl;
    return 0;
}