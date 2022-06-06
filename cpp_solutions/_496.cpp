#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    vector<int> temp;
    stack<int> st;
    for (int j = nums2.size() - 1; j >= 0; j--)
    {
        if (st.empty())
        {
            temp.push_back(-1);
        }
        else if (!st.empty() && st.top() > nums2[j])
        {
            temp.push_back(st.top());
        }
        else if (!st.empty() && st.top() <= nums2[j])
        {
            while (!st.empty() && st.top() <= nums2[j])
            {
                st.pop();
            }
            if (st.empty())
            {
                temp.push_back(-1);
            }
            else
            {
                temp.push_back(st.top());
            }
        }

        st.push(nums2[j]);
    }
    reverse(temp.begin(), temp.end());
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i]==nums2[j])
            {
                ans.push_back(temp[j]);
            }
            
        }
        
    }
    
    return ans;
}

int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> res = nextGreaterElement(nums1, nums2);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}