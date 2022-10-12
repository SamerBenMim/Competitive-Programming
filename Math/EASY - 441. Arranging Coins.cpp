class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        long long n1=n;
        long long a= sqrt(2*n1+0.25) -0.5;
     return  a;
     
    }
};
// (int)(Math.sqrt(2 * (long)n + 0.25) - 0.5)
// n*n+1 / 2      <= k
// n* (n+1) <=2k
// n^2 + n + 0.5<= 
// (n+0.70)^2 <= 
// n < sqrt 2k-0.5  +0.75