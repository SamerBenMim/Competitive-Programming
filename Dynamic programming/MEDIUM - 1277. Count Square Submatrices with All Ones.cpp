class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int ans = 0 ;
        for (int i = 0 ; i < matrix.size() ; ++i){
            for (int j= 0 ; j < matrix[0].size() ; ++j){
                if(i!=0&&j!=0 && matrix[i][j])
                matrix[i][j] = matrix[i][j]+min(matrix[i-1][j-1],min(matrix[i-1][j],matrix[i][j-1]));
                ans+=matrix[i][j];
                cout<<matrix[i][j];
            }cout<<endl;
        }
        return ans;
    }
};

/*
0 1 1 1
1 1 1 1
0 1 1 1


0 1 1 1
1 1 2 2 
0 1 2 3
 
 
 0 0 0 
 0 1 0
 0 1 0
 1 1 1
 1 1 0
 
 0 0 0
 0 1 0
 0 1 0
 1 1 1
 1 1 0
 
 

*/
