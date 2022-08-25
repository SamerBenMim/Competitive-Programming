class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int ans = nums[0] ;
        for (int i=0 ; i<nums.size();++i ){
         ans= gcd(ans,nums[i]);
            }
        
        
        return ans==1 ;
    }  
};
