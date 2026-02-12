#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {


        int first=0;
        int second=0;

        int subSize=s.size();
        int strSize=t.size();

        
        while(first< subSize &&  second < strSize)
        {
            if(s[first]==t[second])
            {
                ++first;
            }
            
            second++;
        }

        return first==subSize;
        
    }
};