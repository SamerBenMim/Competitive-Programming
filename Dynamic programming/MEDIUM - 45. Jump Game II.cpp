class Solution {
public:
    int jump(vector<int>& nums) {
        int t[nums.size()] ;
        memset (t,-1, sizeof(t));
        t[0] =0 ;
        for(int i = 0 ; i < nums.size(); ++i){
            for(int j = i+1 ; j<i+1+nums[i] && j<nums.size() ; ++j ){
                if(t[j]==-1){
                    t[j] = t[i] + 1;
                }
                else
                t[j] = min(t[i] + 1,t[j]) ;
            }
        }

        return t[nums.size()-1];
    }
};



/*

2 3 1 1 4
0 1 1 2 2  


*/

