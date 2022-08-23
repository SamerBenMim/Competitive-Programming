#include <bits/stdc++.h>
using namespace std;
 
long long dp[1000][1000] ;


int powr(int x,int n ){
	if(!x )return 0 ;
	if(!n) return 1 ;
	if(n==1) return x;
	int tmp =powr(x,n/2);
	if(n%2==0) return tmp*tmp;
	return x*tmp*tmp;
}


int main(){

	cout<<powr(2,10);
	return 0 ;
}


