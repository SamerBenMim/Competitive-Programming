class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>ans ;
        for(int i =0;i<=n;++i){
            if(!i) ans.push_back(0) ;
            else if(i==1) ans.push_back(1) ;
            else if(i==2) ans.push_back(1) ;
            else  ans.push_back(0) ;
        }
        
        
          for(int i =1;i<=n/2;++i){
            // if (!i%2){
              ans[2*i] = ans[i] ; 
                ans[2*i+1] = ans[i]+1;
            // } 
            //   else{
            //       v[2*i] = v[i] ;
            //   }
        }
    
return ans;

};
    
};

/*

0           0
1           1
10          1
11          2
100         1
101         2
110         2
111         3
1000        1
1001            2   
1010           3
1011
1100
1111         4
11010
/
// 1 2 --- 1 2 2  3 --- 1 2 2 3 2 3 3 4 --- 12232334 23343445  */ 
