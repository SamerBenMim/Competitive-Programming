class Solution:
    def minOperations(self, nums: List[int]) -> int:
        ans : int = 0
        for i in range(1,len(nums)):
            if(nums[i]<=nums[i-1]) : 
                ans += 1+ - nums[i] + nums[i-1]
                nums[i]=nums[i-1]+1 
        return ans