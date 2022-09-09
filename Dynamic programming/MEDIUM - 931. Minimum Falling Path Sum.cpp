class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i =1 ;  i< n;++i){
              for(int j =0 ;  j< n;++j){
                if(!j)matrix[i][j] += min(matrix[i-1][j],matrix[i-1][j+1]) ;
                else if(j== n-1)matrix[i][j] += min(matrix[i-1][j],matrix[i-1][j-1]) ;
                else matrix[i][j] += min(matrix[i-1][j+1], min(matrix[i-1][j],matrix[i-1][j-1]));
              }
        }
        int ans = INT_MAX ;
        for(int i =0 ;  i< n;++i){
        ans= min(matrix[n-1][i],ans);
        }
        return ans;
        
    }
};
