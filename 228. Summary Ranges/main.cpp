#include <bits/stdc++.h>



class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
            int n=nums.size();
            int i=0;
            int j=1;
            std::vector<std::string> numbers;

            while(i<n)
            {
                int start=nums[i];

                while(i<n-1 && nums[i]+1==nums[i+1])
                    i++;

                if(start == nums[i])
                {
                    numbers.push_back(std::to_string(start));

                }
                else
                {
                    std::string temp=std::to_string(start)+"->"+std::to_string(nums[i]);
                    numbers.push_back(temp);
                }

                i++;

            }

            return numbers;

          


     
        
    }
};