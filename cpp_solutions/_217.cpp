#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        if (s.find(nums[i]) != s.end())
        {
            return true;
        }
        s.insert(nums[i]);
    }
    return false;
}

void containsDuplicate1()
{
    vector<int> nums;
    int n = nums.size();

    sort(nums.begin(), nums.end());
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            cout << "true" << endl;
        }
    }
    cout << "false" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (containsDuplicate(a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}