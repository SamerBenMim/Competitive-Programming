class Solution {
public:
    int numSub(string s) {
        int n =0 ;
        long long  ans= 0 ;
        long long mod = pow(10,9) +7;
        for (int i =0; i< s.length() ; ++i){
            while(s[i]=='1'){n++ ;i++;};
            ans+= ((n%mod)*((1+n)%mod)/2)%mod;
            n=0;
        }
        return ans;
    }
};
/*

111


1
 1 
  1
11
 11
1 1 
111

11 -> 3
3 = 6 

1
 1 11
11 111
      1  
4 =  
111111


4 -> 6 + 1+1 + 1 + 1 

5 -

 
 1 1
 2 3
 3 6
 4 10
 5 15
 6 21
 7 28



*/
