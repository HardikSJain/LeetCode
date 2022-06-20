#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    int temp = x;
    string num = to_string(x);
    reverse(num.begin(), num.end());
    return num == to_string(temp);
}

int main()
{
    int x = 121;
    cout << isPalindrome(x);
    return 0;
}