#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        int num = target - numbers[i];

        // binary search num
        int left = i + 1;
        int right = numbers.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (numbers[mid] == num)
            {
                return {i + 1, mid + 1};
            }
            else if (numbers[mid] < num)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return {};
}

int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(numbers, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}