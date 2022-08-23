#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n){
	if(!n || n==1 ) return n ;
	return fibonacci(n-1)+fibonacci(n-2);
}

int fibonacciIteratif(int n){
	if(!n || n==1 ) return n ;
	int ans=0 ,previousprevious=0,previous=1;
	for (int i =2 ;i<=n ;++i){
		 ans = previousprevious+previous ;
		 previousprevious=previous;
		 previous =ans;
	}
	return ans;

}


//0 1 1 2 3 5 8 13 21 ...
int main(){
	cout<<fibonacci(6)<<" "<<fibonacciIteratif(6);


return 0;
}
