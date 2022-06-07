#include <bits/stdc++.h>
using namespace std;



// made a duplicate of the input vector and repeated it once to act like a cycle
// not the best approach
// time complexity: O(2n)
vector<int> nextGreaterElements(vector<int> &nums)
{
    vector<int> v;
    stack<int> st;
    vector<int> temp = nums;
    for (int i = 0; i < nums.size(); i++)
    {
        temp.push_back(nums[i]);
    }

    for (int i = temp.size() - 1; i >= 0; i--)
    {

        if (st.empty())
        {
            v.push_back(-1);
        }
        else if (st.top() > temp[i])
        {
            v.push_back(st.top());
        }
        else if (!st.empty() && st.top() <= temp[i])
        {
            while (!st.empty() && st.top() <= temp[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
        }

        st.push(temp[i]);
    }

    reverse(v.begin(), v.end());
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(v[i]);
    }
    
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 1};
    vector<int> res = nextGreaterElements(nums);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }

    return 0;
}
