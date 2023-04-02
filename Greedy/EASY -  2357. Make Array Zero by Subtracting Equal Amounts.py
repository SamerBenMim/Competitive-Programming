class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        z = 0 ;
        for i in nums:
            if(i==0): 
                z=1
                break
        return len(set(nums)) - z
