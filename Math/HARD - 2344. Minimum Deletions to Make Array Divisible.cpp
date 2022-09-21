class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        int Gcd = numsDivide[0] ;
        for(auto el:numsDivide){
            Gcd = gcd(el,Gcd);
            if(Gcd==1)break;
        }
        if(nums[0]==1)return 0 ;
        for(int i = 0; i<nums.size();++i){
            if(Gcd % nums[i]==0) return i  ;
        }
        return -1;
        
    }
};
