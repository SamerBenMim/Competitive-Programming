class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if (!n)return 0 ;
        if(n==1)return 1 ; 
        int maxi = 0 ;
        int t[n+1] ; 
        t[0]=0;
        t[1] =1 ;
        for(int i =2; i<=n;++i){
            if(i%2==0)t[i]=t[i/2];
            else t[i] = t[i/2]+t[i/2+1];
            maxi=max(maxi,t[i]);
        }
        return maxi;
    }
};

