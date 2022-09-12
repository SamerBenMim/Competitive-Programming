#include <bits/stdc++.h>

using namespace std;



//0 1 1 2 3 5 8 13 21 ...
int main(){
int t; 
cin>>t;
while(t--){
int n ;
cin >>n;
string s;
cin>>s;
int z=0;
string ans=""; 
for (int i = s.length()-1; i >=0;--i){
	if(s[i]=='0' && !z){
		z= 1 ;
	}
	else{
		if(z) {
		z=	0 ;
		ans = char(s[i] -'0'+10*(s[i-1]-'0')+ int('a')-1)  +ans ;i--;
		}
		else{
					ans = char( s[i] -'0' + int('a') - 1) +ans ;
//		cout<<ans<<endl;
		}
	}
	
	
}
cout<<ans<<endl;


}
}

