class Solution {
public:
    
    double calculDistance(int x1,int y1 ,int x2 ,int y2){
        return sqrt( pow(x1-x2,2) + pow(y1-y2,2) );
    }
    bool isInsideCircle(int px, int py, int cx ,int cy , int r){
        return (calculDistance(px,py,cx,cy) <= r);
    }
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int ans =0 ;
        vector<int> v;
        for(int i= 0 ; i< queries.size();++i){
            ans=0;
            for(int j= 0 ; j< points.size();++j){
                if (isInsideCircle(points[j][0],points[j][1],queries[i][0],queries[i][1],queries[i][2]))ans++;
            }   
            v.push_back(ans);
        }
        return v ;
    }
};
