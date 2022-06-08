#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int res = 0;
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(0);
        }
        else if (s[i] == ')')
        {
            if (res < st.size())
            {
                res = st.size();
            }

            st.pop();
        }
    }
    return res;
}
int main()
{
    string s = "1";
    int ans = maxDepth(s);
    cout << ans;
}