//
// Created by SAMER on 9/26/2022.
//
#include <bits/stdc++.h>
long mod = 998244353 ;
using namespace std;
long long loose(int n);
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
 long long nChoosek(long long n, long long k)
{
    long long C[n + 1][k + 1];
    long long i, j;
 
    // Calculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
 
            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
 
    return C[n][k];
}
//long long nChoosek(int n, int r)
//{
//    return fact(n) / (fact(r) * fact(n - r));
//}
 
// Returns factorial of n
//long long nChoosek( long n, long k )
//{
//    if (k > n) return 0;
//    if (k * 2 > n) k = n-k;
//    if (k == 0) return 1;
//
//    long long result = n%mod;
//    for( int i = 2; i <= k; ++i ) {
//    	result= result%mod;
//        result *= (n-i+1)%mod;
//        
//        result /= i%mod;
//        result= result%mod;
//    }
//    return result%mod;
//}
long long win(int n){
		if(n==2) return 1;
		return (nChoosek(n-1,n/2-1)%mod+loose(n-2)%mod)%mod;

}
long long loose(int n){
	if(n==2) return 0;
	return (nChoosek(n-2,n/2-2)%mod+win(n-2)%mod)%mod;
}
void solve() {
	int n;
cin>>n;

//for(int i=2;i<=n;i+=2)
// cout<<i <<" : "<<win(i)<<" "<<loose(i)<<" "<<1 <<endl; 
 
cout<<win(n)<<" "<<loose(n)<<" "<<1 <<endl; 
cout<<win(n)<<" "<<loose(n)<<" "<<1 <<endl; 

}

int main() {
   int t;
   cin>>t;
//   	cout<<"C : "<<fact(33)<<" "<<nChoosek(33,16)<<endl;

    while(t--)
        solve();
}
/*
1 0 1
1 2 3 4
***************************
1 2 3 4 5 6
A C2 5 + l4 = 10 +2

B = 
****************************
  C1 4
  C1 3	
D = 1 
C 1 4

8
C 1 6
C 1 4

1 2 3 4 5 6 7 8


35+ l6
l6 =  4 +w4
     
 
1 2 3 4 5 6 7 8 





 







*/
