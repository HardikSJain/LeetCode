#include<bits/stdc++.h>
using namespace std;

// O(row*col)
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int col = matrix[0].size();
    int row = matrix.size();
    int total = row * col;
    for (int i = 0; i < total; i++)
    {
        if (matrix[i/col][i%col] == target)
        {
            return true;
        }
        
    }
    return false;
    
}

int main(){
    vector<vector<int>> matrix = {{1,3}};
    int target = 3;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}
