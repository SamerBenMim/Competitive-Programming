class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int> v ;
        v.push_back(1);
        
        for(int i=0; i<rowIndex;++i){
            vector<int> tmp ;
            for(int j=0;j<=i+1 ; ++j){
                if(!j || j==i+1) tmp.push_back(1);
                else {
                    tmp.push_back(v[j-1]+v[j]);
                }
            }
            v=tmp ;
    }
                return v;
    }

};
