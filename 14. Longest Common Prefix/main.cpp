
#include<string>
#include<vector>
class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) return "";


    std::string base = strs[0];
    for (auto &s : strs) {
        if (s.length() < base.length())
            base = s;
    }

    int n = base.length();

    for (int i = n; i > 0; i--) {
        std::string testStr = base.substr(0, i);
        bool ok = true;

        for (auto &s : strs) {
            if (s.substr(0, i) != testStr) {
                ok = false;
                break;
            }
        }

        if (ok)
            return testStr;   
    }

    return "";
}

};