class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ;
        vector<int> v ;
        v.push_back(1);
        ans.push_back(v);
        
        for(int i=0; i<numRows-1;++i){
            vector<int> tmp ;
            for(int j=0;j<=i+1 ; ++j){
                if(!j || j==i+1) tmp.push_back(1);
                else {
                    tmp.push_back(ans[i][j-1]+ans[i][j]);
                }
            }
            
            ans.push_back(tmp) ;
        }
        return ans;
    }
};
/*
1
11
121
1331
14641




*/
