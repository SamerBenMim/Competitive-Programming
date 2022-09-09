class Solution {
public:
    int dp[101][101];
    int solve(int n,int m){
        if (dp[m][n]) return dp[m][n];
        if(!m||!n)return 0 ;
        if(m==1 || n ==1) { dp[m][n]=1; return 1;};
        int tmp = solve(m-1,n)+solve(m,n-1);
        dp[m][n]=tmp;
        return tmp ;
    }
    
    int uniquePaths(int m, int n) {
        return solve(n,m);
    }
};
