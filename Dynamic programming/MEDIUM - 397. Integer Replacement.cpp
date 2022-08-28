class Solution {
public:
    map<int,int> mp;
    long solve(long n){
        if(mp[n]!=0)return mp[n];
        if(n==1) return 0;
        if(n%2 == 0) return mp[n]= 1+solve(n/2);
        return mp[n]= 1+ min(solve(n-1),solve(n+1) );
    } 
    int integerReplacement(int n) {
        return solve(n);  
    }
};

