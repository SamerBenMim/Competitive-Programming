#include <bits/stdc++.h>

using namespace std;


int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;

while(t--){
int n ;
cin >> n ;
int t[n];
int a; 
for(int i= 0; i < n ; ++i ){ 
	cin>>a;
	t[i] = -a ;
	
}
for(int i= 0; i < n ; ++i ){
	cin>>a;
	t[i]+=a;
}
sort(t,t+n) ;
int l = 0 ,r = n-1 ;
int ans = 0 ;
while(l<r){
	if(t[r]<0){ break ;
	}else{
		if (t[r]+t[l]>=0){	
		ans++ ; r-- ; l++ ;
		}
		else{
		l++;
		}
	}
}
cout<<ans<<"\n";
}


return 0;
}
/*
0 -1 2 0 -1 2
-1 -1 0 0 2 2

*/

