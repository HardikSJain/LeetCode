#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &a, int target)
{
    int s = 0, e = a.size() - 1;
    vector<int> ans(2, -1);
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (a[m] < target)
            s = m + 1;
        else if (a[m] > target)
            e = m - 1;
        else
        {
            if (m == s || a[m] != a[m - 1])
            {
                // first occurence
                ans[0] = m;
                break;
            }
            else
            {
                // if a[m]==a[m-1] set e as m-1; if there exist m-2 also as target while loop will take care of it.
                e = m - 1;
                ans[0] = m - 1;
            }
        }
    }

    s = 0, e = a.size() - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (a[m] < target)
            s = m + 1;
        else if (a[m] > target)
            e = m - 1;
        else
        {
            if (m == e || a[m] != a[m + 1])
            {
                ans[1] = m;
                break;
            }
            else
            {
                s = m + 1;
                ans[1] = m + 1;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1};
    int target = 1;
    vector<int> res = searchRange(nums, target);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}