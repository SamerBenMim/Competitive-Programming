class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        long long sum = 0 ;
        map<int,int>mp;
        mp.insert({0,0});
        for(int i=0 ; i< nums.size();++i){
            sum += nums[i] ;
            sum%=k ;
            if(mp.find(sum)!=mp.end()){
                if(i+1 - mp.find(sum)->second > 1) return true;
            }else{
                mp.insert({sum,i+1}) ;
            }

        }
        return false;
    }
};

