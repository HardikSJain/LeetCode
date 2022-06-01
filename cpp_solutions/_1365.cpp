#include<bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> res;
    for(int i = 0; i < nums.size(); i++) {
        int cnt = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] < nums[i]) cnt++;
        }
        res.push_back(cnt);
    }
    return res;
}

int main(){
    vector<int> nums = {8,1,2,2,3};
    vector<int> temp = smallerNumbersThanCurrent(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<temp[i]<<" ";
    }
    
}