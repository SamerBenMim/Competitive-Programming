class Solution:
    def maxArea(self, height: List[int]) -> int:
        r= len(height)-1
        print(r)
        l=0
        ans = min( height[l],height[r] ) * (r-l)
        while(l<r) :
            if(height[l] > height[r] ):
                ans = max(ans,min(height[r-1],height[l]) * (r-1-l)) 
                r-=1
            else :
                ans = max(ans,min(height[r],height[l+1]) * (r-l-1))
                l+=1
        return ans