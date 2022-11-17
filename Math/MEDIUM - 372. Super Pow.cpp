class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int m = 1337 ;
        long long a1 = a%m;
        long long ans =1 ;
        ans = ans % m ;
        for(int i= 0; i < b.size() ; i++){ 
            long long p1 =1 ;

            for(int j=0 ; j< 10 ; ++j){
                p1*= ans ;
                p1 = p1%m ;
            }
            long long p2 =1 ;   

            for(int j=0 ; j< b[i] ; ++j){
                p2*= a1 ;
                p2 = p2%m ;
            }
            p1 = p1 % m;
            p2 = p2% m;
            ans = p1*p2 ;
            ans = ans % m ;
        }
        return ans;
    }
};

/*

a^321 mod m  = 

((((a^3 % m ) ^ 10) % m ) * a^2 % m ) 



*/