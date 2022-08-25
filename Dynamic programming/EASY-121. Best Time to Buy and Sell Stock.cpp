class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r=1;
        int l=0 ;
        
      int ans =0 ;  
        while(r<prices.size()){
            
            if(prices[l]<prices[r]){
                if (ans<prices[r] - prices[l]){
                    ans = prices[r] - prices[l];
                    
                    
                                    
                }
                           r++;

            }
            else{
                l=r;r++;
            }
        }
        
       return ans ;
        
        
        
    }
};
