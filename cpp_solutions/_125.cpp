#include <bits/stdc++.h>
using namespace std;

// Brute force approach

bool isPalindrome(string s)

{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<int> str;

    int flag = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if ((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122) || (int(s[i]) >= 48 && int(s[i]) <= 57))
        {
            str.push_back(int(s[i]));
        }
    }

    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

// 2 pointer approach

bool isPalindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        while (i < j && !(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'))
        {
            i++;
        }
        while (i < j && !(s[j] >= 'a' && s[j] <= 'z' || s[j] >= '0' && s[j] <= '9'))
        {
            j--;
        }
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isPalindrome(s) << endl;
    }
}