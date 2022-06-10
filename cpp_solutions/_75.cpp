#include <bits/stdc++.h>
using namespace std;

// every element before low is 0, every element after high is 2, every element in between are either 0, 1 or 2 i.e. unprocessed

vector<int> sortColors(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (auto i : nums)
        cout << i << " ";
    cout << endl;
    return 0;
}