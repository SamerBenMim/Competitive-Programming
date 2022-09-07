class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
      int low=1, high = 2e9;

        long ab=long(a)*(long(b)/gcd(a,b));
        long  bc= ( long(c)/gcd(b,c)) * long(b);
        long ac=long(a)*(long(c)/gcd(a,c));
        long abc=long(a)* (bc/gcd(a,bc));
        
        while(low<high)
        {
            long long  mid=low+(high-low)/2;
            long long cnt=mid/a+mid/b+mid/c-mid/ab-mid/bc-mid/ac+mid/abc;
            if(cnt<n)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return low;
    }
};


/*

10/2 + 10/3 + 10/5 - 10/6 -10/15 - 10/10
5 + 3 + 2 -1 -1 -0

2 3 4 5 6 8 9 10

*/




