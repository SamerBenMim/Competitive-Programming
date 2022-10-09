class Solution {
public:
    int dp[501] ;
    int solve(vector<int>& arr, int k,int index  ){
        if(dp[index])return dp[index];
        if(index < arr.size()){
            int tmp = 0 ;
            int ma=0;
            for(int i= index ; i < index+k&&i<arr.size();++i){
                if(arr[i]>ma) ma = arr[i] ;
                tmp =max(tmp, (i-index+1)*ma + solve(arr,k,i+1));
            }
        return dp[index] = tmp;

        }
        return 0;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
     return solve(arr, k , 0 ) ;

    }
};
