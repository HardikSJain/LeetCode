#include <bits/stdc++.h>
using namespace std;

vector<long long> sumOfThree(long long num)
{
    if (num % 3 != 0)
        return {};

    long long mid = num / 3;
    return {mid - 1, mid, mid + 1};
}

int main()
{
    long long int num = 33;
    vector<long long> result = sumOfThree(num);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}