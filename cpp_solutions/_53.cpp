#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithm    ||   DP    ||   O(n)
// https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d

int maxSubArray(vector<int>& nums) {
    int currentsum = 0;
    int maxsum = INT_MIN;
    for(int i = 0; i < nums.size(); i++) {
        currentsum = currentsum + nums[i];
        maxsum = max(maxsum, currentsum);
        if(currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maxsum;
}

int main(){
    vector<int> nums = {5,4,-1,7,8};
    cout<<maxSubArray(nums)<<endl;
    return 0;
}