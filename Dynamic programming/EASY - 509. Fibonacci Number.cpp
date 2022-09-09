class Solution {
public
    int fib(int n) {
        int t[n+1];
        if(!n)return 0 ;
        if(n==2  n==1) return 1 ;
        t[0]=0;
        t[1]=1;
        t[2] =1 ;
        for(int i=3;i=n;++i){
            t[i]=t[i-1]+t[i-2];
        }
        return t[n];
    }
};
