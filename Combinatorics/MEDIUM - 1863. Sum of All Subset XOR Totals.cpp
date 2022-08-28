class Solution {
public:
    
    void solve(vector<int> vec , int index ,vector<int> v,int & res ){
        
        if(index!=vec.size()) {
        solve(vec,index+1,v,res);
        v.push_back(vec[index]);
        solve(vec,index+1,v,res);    
        } else{
            int ans = 0 ;
            for(int i =0 ; i<v.size();++i){
                ans^= v[i] ;
            }
            res+=ans;
        }
    }
    
    
    int subsetXORSum(vector<int>& nums) {
            vector<int> v;
            int s = 0;
            solve(nums,0,v,s) ;
            return s;
    }
};



/*

            5 1 6
          -     
         - 
        - 


*/
