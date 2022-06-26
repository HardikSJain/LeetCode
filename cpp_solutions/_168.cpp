#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber)
{
    string res = "";
    while (columnNumber > 0)
    {
        int remainder = columnNumber % 26;
        if (remainder == 0)
        {
            res = 'Z' + res;
            columnNumber = (columnNumber / 26) - 1;
        }
        else
        {
            res = (char)(remainder + 'A' - 1) + res;
            columnNumber = columnNumber / 26;
        }
    }
    return res;
}
int main()
{
    int n = 28;
    string res = convertToTitle(n);
    cout << res << endl;
    return 0;
}