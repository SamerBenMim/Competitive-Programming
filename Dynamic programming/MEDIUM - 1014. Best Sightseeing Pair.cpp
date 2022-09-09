class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = values[0] ;
        int bestv=values[0];
        int besti=0;
        
        for(int i= 1 ; i < values.size() ; ++i){
                ans=max(ans,values[i]-i+besti+bestv);
            if(i+values[i]>bestv+besti){
                bestv=values[i];
                besti=i;
            }
        }
        
        return ans ;
    }
};

/* 


 
1 8 5 2 6 
 
best 8,1      
 
res 14



*/ 
