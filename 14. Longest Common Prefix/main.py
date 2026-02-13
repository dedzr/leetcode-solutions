class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        n=len(strs[0])
        shortestStr=strs[0]
        for x in strs:
            if len(x)<n:
                shortestStr=x
                n=len(x)


       
        for i in range(0,n-1):
            
            for y in strs:
                if y[i]!=shortestStr[i]:
                    return y[0:i]
            


        return ""

        