#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>&arr) {
        
        int n = arr.size()  ;
        
        int maximumProfit = INT_MIN; 
        int minimumPurchase = INT_MAX; 
        
        for(int i=0;i<n;i++){
            minimumPurchase = min(minimumPurchase, arr[i])   ; 
            maximumProfit = max(maximumProfit, arr[i]-minimumPurchase)  ; 
        }
        
        return maximumProfit; 
    }
};
