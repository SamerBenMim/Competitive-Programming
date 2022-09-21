class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = 1;
        for (auto el:nums){
            if(!el)return 0 ;
            if(el<0) n*=-1 ;
            
        }
        return n;
        
    }
};
