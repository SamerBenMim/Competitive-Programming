class Solution:
    def largestSumAfterKNegations(self, nums: List[int], k: int) -> int:
        nums.sort() 
        i =0 
        print(nums[2])

        while   i<len(nums) and nums[i]< 0 and k>0:
            nums[i] *=-1
            i+=1;
            k-=1

        if(k%2==0):
            return sum(nums) 
        print(sum(nums) - 2*min(nums))
        return (sum(nums) - 2*min(nums)) 


        return 0
