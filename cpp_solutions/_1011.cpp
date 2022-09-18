#include <bits/stdc++.h>
using namespace std;

int shipWithinDays(vector<int> &weights, int D)
{
    int left = 0;
    int right = 0;
    int n = weights.size();
    for (int i = 0; i < n; i++)
    {
        left = max(left, weights[i]);
        right += weights[i];
    }
    while (left < right)
    {
        int mid = (left + right) / 2;
        int curr_days = 1, curr_bagsize = 0;
        for (int i = 0; i < n; i++)
        {
            if (curr_bagsize + weights[i] > mid)
            {
                curr_days++;
                curr_bagsize = 0;
            }
            curr_bagsize += weights[i];
        }
        if (curr_days > D)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return left;
}

int main()
{
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int D = 5;
    cout << shipWithinDays(weights, D) << endl;
    return 0;
}