class Solution {
public:
    int dp[1001];
    
    int solve(vector<int>& nums, int target){
        if(dp[target]!=-1) return dp[target];
        if(!target) return 1 ;
        int s = 0 ;
        for (int i = 0 ; i < nums.size();++i){
        if(target-nums[i]>=0)    s+= solve( nums , target-nums[i]) ;
        }
        return dp[target] = s ;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp)) ;
        return solve( nums,  target);
    }
};


/*





*/
