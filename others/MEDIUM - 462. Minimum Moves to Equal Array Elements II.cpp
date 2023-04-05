class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        long sum1 = 0;
        long sum2 = 0; 
        sort(nums.begin(), nums.end());
        if(nums.size()==1)return 0 ;

        for(int  i =  0 ; i< nums.size(); ++ i){
            if(nums.size()>2)
            sum1+= abs(nums[i] - nums[nums.size()/2 +1]) ;
            sum2+= abs(nums[i] - nums[nums.size()/2]) ;
            
        }
                    if(nums.size()>2)


        return min(sum1,sum2);

        return sum2;
    }
};
