class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        n=len(nums);
        numbers=[]
        i=0

        while i < n:
            start=nums[i]

            while i < n-1 and nums[i+1] == nums[i]+1:
                i=i+1
                

            if start==nums[i]:
                numbers.append(str(start))
            else:
                numbers.append(str(start)+'->'+str(nums[i]))

            i=i+1


        return numbers