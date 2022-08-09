#include <bits/stdc++.h>
using namespace std;
// Stack
// Runtime: 3 ms, faster than 53.16% of C++ online submissions for Backspace String Compare.
// Memory Usage: 6.2 MB, less than 72.80% of C++ online submissions for Backspace String Compare.
bool backspaceCompare(string s, string t)
{
    stack<int> a;
    stack<int> b;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '#')
        {
            a.push(s[i]);
        }
        else if (!a.empty())
        {
            a.pop();
        }
    }
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] != '#')
        {
            b.push(t[i]);
        }
        else if (!b.empty())
        {
            b.pop();
        }
    }
    return a == b;
}

int main()
{
    string s = "a##c";
    string t = "#a#c";
    bool ans = backspaceCompare(s, t);
    cout << ans;
}