#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int n)
{
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = vector<int>(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            // previous row's jth element + previous row's j+1th element
            ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
    }
    return ans;
}

int main()
{
    int numRows = 5;
    vector<vector<int>> result = generate(numRows);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}