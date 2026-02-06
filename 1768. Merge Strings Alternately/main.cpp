
#include <iostream>
#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int n=word1.size();
        int m=word2.size();

        int longest=std::max(n,m);

        std::string str="";

        for(int i=0;i<longest;i++)
        {
            if(i<n)
                str.push_back(word1[i]);
            
            if(i<m)
                str.push_back(word2[i]);
        }
        return str;
    }
};