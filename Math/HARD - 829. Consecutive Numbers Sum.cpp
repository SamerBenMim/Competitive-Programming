class Solution {
public:
    int consecutiveNumbersSum(int n) {
        long k ;
        int ans= 1 ;
        if(n==1) return 1 ;
        while(n%2==0){
            n/=2;
            k*= 2 ;
        }
        if(n%2==1&&n!=1)ans++;
        for(long i = 3 ; i < sqrt(n) ; i+=2){
        if(n%i==0)ans+=2 ;
        }
        if((long)sqrt(n)*(long)sqrt(n)==n&&n!=1)ans++;
        return ans;
    }
};

    
/*
5 
    
2 3
    
    9
    
    4 5
    4 3 2
    
    
    15
    
    7 8
    5 5 5
    3 3 3 3 3
    
    2 * 3
    
         6
    
    5*2
    
    7*2
    
    2 3 4 5
    */
