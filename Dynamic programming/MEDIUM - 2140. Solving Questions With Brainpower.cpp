class Solution {
public:
    long long  dp[100001] ;
    long long solve(vector<vector<int>>& v , int index) {
        if(index >= v.size()) return 0 ;
        if(dp[index])return dp[index];
        
        
        return dp[index] = max(solve(v,index+1), v[index][0] + solve(v,index+v[index][1]+1)) ;
    }

    
    long long mostPoints(vector<vector<int>>& questions) {
        
        return solve( questions , 0) ;
        
    }
};
