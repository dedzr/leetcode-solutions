#include <bits/stdc++.h>

class Solution {
    

public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n=nums.size();

        std::vector<int> arr(n,1);


        int mul=1;
        for(int i=0;i<n;i++)
        {
            arr[i]=mul;
            mul*=nums[i];


        }
        mul=1;
        for(int i=n-1;i>=0;i--)
        {
            arr[i]=mul*arr[i];
            mul*=nums[i];
        }

         return arr;
        

    }
};