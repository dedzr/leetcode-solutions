class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:

        intervals.sort(key=lambda x:x[0])

        answers=[]


        for interval in intervals:
            if not answers or answers[-1][1] < interval[0]:
                answers.append(interval)

            else:
                answers[-1][1]=max(answers[-1][1],interval[1])


        return answers;
        