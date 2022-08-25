class Solution {
    
public:
    int dp[46] ;
    int climbStairs(int n) {
        if(dp[n]) return dp[n];
        if(!n) return 1 ;
        if(n-2>=0){
            dp[n] =  climbStairs(n-2) + climbStairs(n-1);
            return dp[n];
        }
            
        
        else {
            dp[n] =climbStairs(n-1);
            return dp[n];
        }
    }
};
