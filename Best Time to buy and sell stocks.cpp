#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxProfit=0;
       int minElement=INT_MAX;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minElement){
                minElement=prices[i];
            }
            maxProfit=max(maxProfit,prices[i]-minElement);
        }
       return maxProfit;
    }
};
