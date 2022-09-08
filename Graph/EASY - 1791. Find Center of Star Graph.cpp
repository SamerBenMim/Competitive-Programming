class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
     
         sort(edges[0].begin(),edges[0].end());
         sort(edges[1].begin(),edges[1].end());

        if(edges[0][0] == edges[1][0])  return edges[0][0] ;
        return edges[0][1];
    }
};
