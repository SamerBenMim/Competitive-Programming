class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int i =0 ,j = nums.size()-1;
        int ans = 0;
        while(j>i){
            ans = max(ans,nums[i]+nums[j]);
            i++;    
            j--;
        }
        return ans;
}
};
/*
1 1 1 2 4 4 5 5 5 5
*/