#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> rows(m, 1);
    vector<int> cols(n, 1);
    for (int i = 0; i < m * n; i++)
    {
        if (matrix[i / n][i % n] == 0)
        {
            rows[i / n] = 0;
            cols[i % n] = 0;
        }
    }
    for (int i = 0; i < m * n; i++)
    {
        if (rows[i / n] == 0 || cols[i % n] == 0)
        {
            matrix[i / n][i % n] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(matrix);
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m * n; i++)
    {
        cout << matrix[i / n][i % n] << " ";
    }
    return 0;
}