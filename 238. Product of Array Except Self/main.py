class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        n= len(nums)
        arr=[1]*n

        mul=1
        for i in range(n):
            arr[i]=mul
            mul=mul*nums[i]

        mul=1
        for i in range(n-1,-1,-1):
            arr[i]=arr[i]*mul
            mul=mul*nums[i]

        
        return arr

        