class Solution {
public:
    int dp[40001][3];
    
    int maxSumDivThree(vector<int>& nums) {
        dp[0][(nums[0]%3)] = nums[0] ;
        for(int i =1;i < nums.size();++i){
            if(nums[i] % 3 ==0) {
                dp[i][0] = dp[i-1][0] + nums[i];
                if(dp[i-1][1])dp[i][1] = dp[i-1][1] + nums[i]; 
                if(dp[i-1][2]) dp[i][2] = dp[i-1][2] + nums[i]; 
            }else if(nums[i] % 3 ==1){

                 dp[i-1][2] ?  dp[i][0] = max(dp[i-1][0] ,dp[i-1][2] + nums[i] ) : dp[i][0] = dp[i-1][0] ;
                dp[i][1] = max(dp[i-1][1] ,dp[i-1][0] + nums[i] ) ; 
                dp[i-1][1]? dp[i][2] = max(dp[i-1][2] ,dp[i-1][1] + nums[i] ): dp[i][2] = dp[i-1][2]   ; 
            }
            else{
                dp[i-1][1]? dp[i][0] = max(dp[i-1][0] ,dp[i-1][1] + nums[i] ) :dp[i][0] = dp[i-1][0]  ;
                dp[i-1][2] ? dp[i][1] = max(dp[i-1][1] ,dp[i-1][2] + nums[i] ) : dp[i][1]=dp[i-1][1] ; 
                dp[i][2] = max(dp[i-1][2] ,dp[i-1][0] + nums[i] ) ; 
                
            }
            cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;
        }
        return dp[nums.size()-1][0];
    }
};

/*


  0 1 2  3  4
0 0 3 6 9   12
1 1 1 4 10    
2 0 2 5 8




*/
