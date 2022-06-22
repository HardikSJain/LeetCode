#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n)
{
    vector<int> res;
    res.push_back(0);
    for (int i = 1; i < n + 1; i++)
    {
        int count = 0;
        int temp = i;
        while (temp)
        {
            temp = (temp & (temp - 1));
            count++;
        }
        res.push_back(count);
    }
    return res;
}

int main()
{
    int n = 2;
    vector<int> ans;
    ans = countBits(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}