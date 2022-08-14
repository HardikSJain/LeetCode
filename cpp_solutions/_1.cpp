#include <bits/stdc++.h>
using namespace std;

// using hashmap

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        map[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int temp = target - nums[i];
        if (map.find(temp) != map.end() && map[temp] != i)
        {
            result.push_back(i);
            result.push_back(map[temp]);
            return result;
        }
    }
    return result;
}

// brute force approach

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> result = twoSum(a, x ^ y);
        cout << result[0] + 1 << " " << result[1] + 1 << endl;
    }
}