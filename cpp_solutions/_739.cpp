#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    stack<int> st;
    vector<int> res(temperatures.size(), 0);
    for (int i = temperatures.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && temperatures[st.top()] <= temperatures[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            res[i] = st.top() - i;
        }
        
        st.push(i);
    }
    return res;
}

int main()
{
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> res = dailyTemperatures(temperatures);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}