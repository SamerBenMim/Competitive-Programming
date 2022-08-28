class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1-i;j++){
                nums[j]=(nums[j]+nums[j+1])%10;
            }}
            
    return nums[0];
    }
};
