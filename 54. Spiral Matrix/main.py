class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        n= max(len(word1),len(word2))

        x=len(word1)
        y=len(word2)

     
        answer=''
        for i in range(0,n):
            if i< x:
                answer=answer+word1[i]

            if i<y:
                answer=answer+word2[i]
            
        return answer;