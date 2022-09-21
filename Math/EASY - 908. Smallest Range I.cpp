class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int l,m ;
        l=m=nums[0];
        for(auto el:nums){
            l = max(l,el);
            m = min(m,el) ;
        }
        if(l-m-2*k<=0) return 0;
        return l-m-2*k;
    }
};
