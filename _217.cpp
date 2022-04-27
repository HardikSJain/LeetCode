#include <bits/stdc++.h>
using namespace std;

// RIGHT first attempt
void soln()
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
