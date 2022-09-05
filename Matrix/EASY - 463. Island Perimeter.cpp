class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans= 0 ;
        for(int i =0; i < grid.size();++i){
         for(int j =0; j < grid[0].size();++j){
            if(grid[i][j]){
            if(i==0) ans++;
            else{
                if(!grid[i-1][j])ans++;
            }
            if(i==grid.size()-1) ans++;
            else{
                if(!grid[i+1][j])ans++;
            }
                
            if(j==0) ans++;
            else{
                if(!grid[i][j-1])ans++;
            }
            if(j==grid[0].size()-1) ans++;
            else{
            if(!grid[i][j+1])ans++;
            }
            }
         }   
        }
        return ans;
    }
};
