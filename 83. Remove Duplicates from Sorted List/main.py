class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        n=len(s)
        m=len(t)

        first=0;
        second=0;

        while first < n and second < m:
            if s[first]==t[second]:
                first=first+1

            second=second+1

        

        return first==n
        
        