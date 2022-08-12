#include <bits/stdc++.h>
using namespace std;
// Runtime: 299 ms, faster than 47.13% of C++ online submissions for Largest Rectangle in Histogram.
// Memory Usage: 82.1 MB, less than 33.98% of C++ online submissions for Largest Rectangle in Histogram.
// Stack
int largestRectangleArea(vector<int> &heights)
{
    if (heights.size() == 1)
    {
        return heights[0];
    }

    stack<pair<int, int>> st;
    int index = heights.size();
    vector<int> right(heights.size());
    for (int i = heights.size() - 1; i >= 0; i--)
    {
        index--;
        if (st.empty())
        {
            right[index] = heights.size();
        }
        else if (!st.empty() && (st.top().first) < (heights[i]))
        {
            right[index] = st.top().second;
        }
        else if (!st.empty() && st.top().first >= heights[i])
        {
            while (!st.empty() && st.top().first >= heights[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                right[index] = heights.size();
            }
            else
            {
                right[index] = st.top().second;
            }
        }
        st.push(make_pair(heights[i], index));
    }

    stack<pair<int, int>> s;
    index = -1;
    vector<int> left(heights.size());
    for (int i = 0; i < heights.size(); i++)
    {
        index++;
        if (s.empty())
        {
            left[index] = -1;
        }
        else if (!s.empty() && s.top().first < heights[i])
        {
            left[index] = s.top().second;
        }
        else if (!s.empty() && s.top().first >= heights[i])
        {
            while (!s.empty() && s.top().first >= heights[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                left[index] = -1;
            }
            else
            {
                left[index] = s.top().second;
            }
        }
        s.push(make_pair(heights[i], index));
    }

    int maxArea = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int width = (right[i] - left[i] - 1);
        int tempArea = width * heights[i];
        maxArea = max(tempArea, maxArea);
    }
    return maxArea;
}

int main()
{
    vector<int> heights = {2, 2};
    cout << largestRectangleArea(heights) << endl;
    return 0;
}