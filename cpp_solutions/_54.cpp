#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> spiral;
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    int direction = 0;

    while (top <= bottom && left <= right)
    {

        if (direction == 0)
        {
            // left -> right
            for (int i = left; i <= right; i++)
            {
                spiral.push_back(matrix[top][i]);
            }
            top++;
        }
        else if (direction == 1)
        {
            // top -> bottom
            for (int i = top; i <= bottom; i++)
            {
                spiral.push_back(matrix[i][right]);
            }
            right--;
        }
        else if (direction == 2)
        {
            // right -> left
            for (int i = right; i >= left; i--)
            {
                spiral.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        else if (direction == 3)
        {
            // bottom -> top
            for (int i = bottom; i >= top; i--)
            {
                spiral.push_back(matrix[i][left]);
            }
            left++;
        }

        // increment the value of direction
        direction = (direction + 1) % 4;
    }

    return spiral;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> spiral = spiralOrder(matrix);
    for (int i = 0; i < spiral.size(); i++)
    {
        cout << spiral[i] << " ";
    }
    return 0;
}