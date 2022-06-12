#include <bits/stdc++.h>
using namespace std;


// row -> i/c
// col -> i%c
vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
{
    int m = nums.size(), n = nums[0].size(), total = m * n;
    if (r * c != total)
    {
        return nums;
    }
    vector<vector<int>> res(r, vector<int>(c, 0));
    for (int i = 0; i < total; i++)
    {
        res[i / c][i % c] = nums[i / n][i % n];
    }
    return res;
}

vector<vector<int>> matrixReshape1(vector<vector<int>> &mat, int r, int c)
{
    vector<int> temp;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            temp.push_back(mat[i][j]);
        }
    }
    int i = 0;
    if (r * c != temp.size())
    {
        return mat;
    }
    c = temp.size() / r;
    vector<vector<int>> res(r, vector<int>(c, 0));

    for (int x = 0; x < r; x++)
    {
        for (int y = 0; y < c; y++)
        {
            if (i < temp.size())
            {
                res[x][y] = temp[i++];
            }
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    int r = 1;
    int c = 4;
    vector<vector<int>> res = matrixReshape(mat, r, c);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}