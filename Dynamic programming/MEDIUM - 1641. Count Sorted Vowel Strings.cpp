class Solution {
public:
    int countVowelStrings(int n) {
        int ans[5]= {1,1,1,1,1} ;
        int s = 0 ;
        for(int i=1 ;i < n ; ++i){
            ans[1]+=ans[0];
            ans[2]+=ans[1];
            ans[3]+=ans[2];
            ans[4]+=ans[3];
                
        }
         for(int j=0 ;j < 5 ; ++j){
            s+=ans[j];
         } 
        return s  ;
    }
};
