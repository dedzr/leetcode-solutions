#include <bits/stdc++.h>



class Solution {
public:
    int maxProfit(std::vector<int>& prices) {

        int maxProfit=0;
        int n=prices.size();

        int highest=prices[n-1];
        for(int i=n-1;i>=0;i--)
        {
            maxProfit=std::max(highest-prices[i],maxProfit);
            highest=std::max(prices[i],highest);
            
        }


        return maxProfit;
        
    }
};