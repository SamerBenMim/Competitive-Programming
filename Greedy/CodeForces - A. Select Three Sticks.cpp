#include <bits/stdc++.h>

using namespace std;



//0 1 1 2 3 5 8 13 21 ...
int main(){
int t; 
cin>>t;
while(t--){
int n ;
cin>>n;
long t[n] ;
for(int i = 0 ; i < n ;++i){
	cin>>t[i];
}
long ans = INT_MAX ;
sort(t,t+n);
for(int i = 0 ; i < n-2 ;++i){
	ans = min(ans,t[i+2] - t[i]);
}
cout<<ans<<endl;	
}
}


/*
3 2 1
2
1 2 5


*/

