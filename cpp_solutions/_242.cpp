#include <bits/stdc++.h>

using namespace std;

// RIGHT brute force approach (first attempt)
void bruteforce()
{
    string s;
    string t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int flag = 1;
    for (int i = 0; i < m; i++)
    {
        int j = 0;
        while (t[i] != s[j])
        {
            j++;
            if (j >= n)
            {
                break;
            }
        }
        if (t[i] == s[j])
        {
            s[j] = -1;
            flag *= 1;
        }
        else
        {
            flag *= 0;
            cout << "false" << endl;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "true" << endl;
    }
}

// WRONG counting ASCII (second attempt)
// wrong because there may be cases where addition of ascii of all the characters can be equal to sum of some other chars
// for example a+c and b+b
void countingASCII()
{
    string s;
    string t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int count = 0;
    if (n != m)
    {
        cout << "false" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        count += int(s[i]);
        count -= int(t[i]);
    }
    if (count == 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

// Sorting and comparing (saw solution)

void sorting()
{
    string s;
    string t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
