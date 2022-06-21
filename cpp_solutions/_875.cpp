#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> &piles, int H)
{
    int l = 1, r = 1000000000;
    while (l < r)
    {
        int m = (l + r) / 2, total = 0;
        for (int p : piles)
            total += (p + m - 1) / m;
        if (total > H)
            l = m + 1;
        else
            r = m;
    }
    return l;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles, h);
    return 0;
}