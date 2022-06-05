#include<bits/stdc++.h>
using namespace std;

int partitionArray(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end(), greater<int>());
    int n = nums.size();
    int count = 0;
    int begin = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (begin-nums[i]>k)
        {
            begin = nums[i];
            count++;
        }
        
    }
    count++;
    return count;
    
}

int main(){
    vector<int> nums = {3,6,1,2,1,5};
    int k = 2;
    cout<<partitionArray(nums, 2);
}
