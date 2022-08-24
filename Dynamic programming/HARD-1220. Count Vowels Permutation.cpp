class Solution {
public:
    long dp[20000][27];
    long solve(char x ,int len){
        long long mod = pow(10, 9)+7;
        if(dp[len][x-'a'])return  dp[len][x-'a'];
        if(!len)return 1;
        switch(x) {
          case 'a':
            return dp[len][x-'a'] =solve('e',len-1)%mod;
            break;
          case 'e':
            return dp[len][x-'a']= (solve('a',len-1)%mod+solve('i',len-1)%mod)%mod;
            break;
         case 'i':
            return dp[len][x-'a']= (solve('a',len-1)%mod+solve('e',len-1)%mod+solve('o',len-1)%mod+solve('u',len-1)%mod);   
            break;
         case 'o':
            return dp[len][x-'a']= (solve('i',len-1)%mod+solve('u',len-1)%mod)%mod;
            break;
         case 'u':
            return dp[len][x-'a'] = solve('a',len-1)%mod;
            break;
          default:
          return 0;
        }
        return 0;
    }
    
    int countVowelPermutation(int n) {
        long long mod = pow(10, 9)+7;
        return (solve('a',n-1)%mod+solve('e',n-1)%mod+solve('i',n-1)%mod+solve('o',n-1)%mod+solve('u',n-1)%mod)%mod ;
    }
};
