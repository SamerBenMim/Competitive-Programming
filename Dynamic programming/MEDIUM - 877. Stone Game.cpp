class Solution {
public:
    int dp[501][501][2]  ; 

    int solve(vector<int>& piles , int left , int right , int turn ){
        if(dp[left][right][turn]) return dp[left][right][turn];
        if(right>left){
            if(turn){ // alice plays
                return dp[left][right][turn] = max(piles[left]+ solve(piles,left+1 ,right, 0),piles[right] +solve(piles,left ,right-1, 0)) ;
            }else{
                return  dp[left][right][turn] =min(solve(piles,left+1 ,right, 1) - piles[left] ,solve(piles,left ,right-1, 1) - piles[right]);
            }
        }
        return 0 ;
    }
    bool stoneGame(vector<int>& piles) {
        return solve(piles, 0 , piles.size()-1 , 1)>0 ;
    }
};