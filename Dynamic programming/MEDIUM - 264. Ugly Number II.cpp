class Solution {
public:
    int nthUglyNumber(int n) {
        int t[n];
        t[0]=1;
        int i2=0,i3=0,i5=0;
        for(int i=1; i < n; ++i){
            t[i] = min(t[i5]*5,min(t[i2]*2,t[i3]*3));
            if(t[i] == t[i5]*5 )++i5;
            if(t[i] == t[i2]*2 )++i2;
            if(t[i] == t[i3]*3 )++i3;
            cout<<t[i]<<" ";
        }
        return t[n-1] ;
    }
};

/*
    i2
  13
i5
0 1 2 3 4 5 6 7 8 9 
1 2 3 4

*/
