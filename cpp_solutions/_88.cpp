#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (i >= 0)
    {
        nums1[k] = nums1[i];
        i--;
        k--;
    }
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

void merge1(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> temp;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            temp.push_back(nums1[i]);
            i++;
        }
        else
        {
            temp.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m)
    {
        temp.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        temp.push_back(nums2[j]);
        j++;
    }
    nums1 = temp;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    merge(nums1, m, nums2, n);
    for (auto i : nums1)
    {
        cout << i << " ";
    }
    return 0;
}