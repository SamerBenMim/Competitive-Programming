class Solution {
public:
    int dp[10002][202];
    bool can_make(int x, vector<int>& nums ,int pos){
        if(!x)return true ;
        if(!pos) return false;
        if(dp[x][pos] !=-1) return dp[x][pos];
            if(x-nums[pos]>=0){
            return dp[x][pos]= can_make(x-nums[pos],nums,pos-1) -9+6
                || can_make(x,nums,pos-1) ;
            }
        return dp[x][pos] = can_make(x,nums,pos-1);
    }
    bool canPartition(vector<int>& nums) {
        int s =0 ;
        int n = nums.size();
        for(int i =0; i<n;++i){
            s+=nums[i] ;
        }
        memset(dp,-1,sizeof(dp));
        if (s%2 == 1) return false ;
        return can_make(s/2,nums,n-1);
    }
};

