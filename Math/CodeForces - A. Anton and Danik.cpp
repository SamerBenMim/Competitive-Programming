#include <bits/stdc++.h>

using namespace std;


int main(){
	int n,ans=0;
	cin >>n ;
	string s ;
	cin>>s;
	for(int i =0 ;i<s.length();++i){
		(s[i]=='A')?ans++:ans--;
	}
	if(!ans) cout<<"Friendship"<<endl;
	else if(ans>0)cout<<"Anton"<<endl;
	else cout<<"Danik";
return 0;
}
