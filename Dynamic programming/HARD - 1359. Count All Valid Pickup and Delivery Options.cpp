class Solution {
public:
    int countOrders(int n) {
        int mod = 1000000007;
        long long ans = 1;
        
        for (int i =2; i<=n;++i){
            ans = ans%mod * i*(2*i-1);
        }
        return ans%mod;
    }
};
