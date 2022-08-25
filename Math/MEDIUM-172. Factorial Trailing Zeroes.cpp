class Solution {
public:
    int trailingZeroes(int n) {
        int plus =0;
        int i = 1;
        int ans=0;
        while(n>= pow(5,i)){
            ans+= n/pow(5,i);i++;
        }
        
        return ans;
    }
};           //2
// 5 10 15 20 25 30 35 40 45 50
