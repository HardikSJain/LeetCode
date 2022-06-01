#include<bits/stdc++.h>
using namespace std;



// time limit exceeded
int main(int argc, char const *argv[])
{
    vector<int> nums = {1,3,4,2,2};
    int ans;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (ans == nums[j])
            {
                cout<<nums[j];
                break;
            }
        }
    }
    
    return 0;
}
