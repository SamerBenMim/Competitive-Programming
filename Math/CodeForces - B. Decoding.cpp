
#include <bits/stdc++.h>
using namespace std;


int main(){	
 	int n;
 	string s,ans="";
	cin>>n ;
	cin >>s;
	if(n%2)
	for(int i =0 ; i<n;++i){
		if(i%2) ans= s[i]+ans;
		else ans+=s[i];
	}
	else for(int i =0 ; i<n;++i){
		if(i%2) ans+=s[i];
				else ans= s[i]+ans;

	}
	
	cout<<ans;

    return 0;
}
