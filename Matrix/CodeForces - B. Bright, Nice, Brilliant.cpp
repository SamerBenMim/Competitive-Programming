#include <bits/stdc++.h>

using namespace std;


int main(){
int t; 
cin>>t;
while(t--){
int n ;
cin>>n;
int j = 1;
for(int i=1;i<=n;++i){
	for(int k =0;k<i;++k){
				 if(k==i-1)cout<<1<<endl;

	else	if(k==0)cout<<1<<" ";

		else cout<<0<<" ";
	}
}
}
}


/*
1
1 1
1 0 1
1 0 0 1
1 0 0 0 1


*/

