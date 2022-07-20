#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t)
{
    int n = s.size();
    int m = t.size();
    if (n != m)
    {
        return false;
    }

    unordered_map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (mp.find(t[i]) == mp.end())
        {
            return false;
        }
        else
        {
            mp[t[i]]--;
            if (mp[t[i]] == 0)
            {
                mp.erase(t[i]);
            }
        }
    }
    return mp.size() == 0;
}
// bool isAnagram(string s, string t)
// {
//     int n = s.size();
//     int m = t.size();
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     if (s == t)
//     {
//         return true;
//     }
//     return false;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    string t;
    cin >> s >> t;
    bool res = isAnagram(s, t);
    return 0;
}