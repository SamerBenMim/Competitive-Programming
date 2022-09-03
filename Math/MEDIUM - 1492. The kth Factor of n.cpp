class Solution {
public:
    int kthFactor(int n, int k) {
        int i =1 ,ans = 0 ;
        while(i<=n && ans<k){
            if(n%i==0)ans++;i++;
        }
        return (ans==k)? i-1  : -1;
    }
};
