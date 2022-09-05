class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0 ; i < matrix.size();++i){
         for(int j=0 ; j < matrix[0].size();++j){
            if(!matrix[i][j]){
                    for(int z  = 0 ; z< matrix[0].size() ; ++z){
                        if(matrix[i][z])matrix[i][z] = -1512370 ;
                    }
                    for(int z  = 0 ; z< matrix.size() ; ++z){
                        if(matrix[z][j])matrix[z][j] = -1512370 ;
                    }
                
            }
        }   
        }
         for(int i=0 ; i < matrix.size();++i){
         for(int j=0 ; j < matrix[0].size();++j){
             if(matrix[i][j]==-1512370){matrix[i][j]=0;}
         }}
    }
};
