class Solution {
public:
    int minMoves(vector<int>& nums) { 
        int mini = INT_MAX ;
         for(int i =0;i < nums.size();++i){
            mini= min(nums[i],mini);
        }
        
        int ans= 0 ;
        for(int i =0 ;i < nums.size();++i){
            ans+= nums[i]-mini;
        }
        return ans;
    }
};

