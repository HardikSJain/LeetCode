#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n)
    {
        // n&n-1 will flip all the bits from the right most bit to the end leaving one less "1" bit
        n = (n & n - 1);
        count++;
    }
    return count;
}

int main()
{
    uint32_t n = 00000000000000000000000000001011;
    cout << hammingWeight(n);
}