class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        long pans = 0 ;
        long nans=0 ;
        long psum =0;
        long nsum =0;

        for(long i=0 ; i<nums.size() ;++i){
            if(psum + nums[i] >0) {
                psum+=nums[i];
            } 
            else{
                psum =0 ;
            }
            if(nsum + nums[i] >0) {
                nsum=0;
            } 
            else{
                nsum+=nums[i];
            }
            pans = max(pans,psum);
            nans = min(nans,nsum);

        }   
        
        return max(-nans,pans );
    }
};
