#include <bits/stdc++.h>

using namespace std;


int main(){
	int n=10;
int t[n]={9,1,5,2,3,4,9,6,7,8};
int sum=0;
for(int i =0 ; i<10  ;++i){
	sum+=t[i] ; 	
}

cout<< sum - (n*(n-1))/2 ;
return 0;
}
