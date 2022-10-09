class Solution {
public:

    int dp[201][201][201];
    bool solve(string s1, string s2, string s3){
        if(dp[s1.length()][s2.length()][s3.length()]!=-1)return dp[s1.length()][s2.length()][s3.length()];
        if(s1==""&&s2==""&&s3=="")return dp[s1.length()][s2.length()][s3.length()] =  true;
        if(s1[0]!=s3[0]&&s2[0]!=s3[0]||s3=="")return dp[s1.length()][s2.length()][s3.length()] = false;
        if(s1[0]==s3[0]&&s2[0]==s3[0]) return dp[s1.length()][s2.length()][s3.length()]= solve(s1.substr(1,s1.length()-1),s2,s3.substr(1,s3.length()-1)) ||solve(s1,s2.substr(1,s2.length()-1),s3.substr(1,s3.length()-1));
        if(s1[0]==s3[0])return dp[s1.length()][s2.length()][s3.length()]=solve(s1.substr(1,s1.length()-1),s2,s3.substr(1,s3.length()-1));
        if(s2[0]==s3[0])return dp[s1.length()][s2.length()][s3.length()]= solve(s1,s2.substr(1,s2.length()-1),s3.substr(1,s3.length()-1));
        return true;
    }
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp,-1,sizeof(dp));
        return solve(s1,s2,s3);
    }
};
