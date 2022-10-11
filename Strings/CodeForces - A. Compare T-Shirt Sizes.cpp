#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
 
void solve(){
string s1;
string s2;
cin>>s1>>s2;
if(s1[s1.length()-1]=='L'&&s2[s2.length()-1]!='L')cout<<">"<<endl;
else if(s2[s2.length()-1]=='L'&&s1[s1.length()-1]!='L')cout<<"<"<<endl;
else if(s1[s1.length()-1]=='M'&&s2[s1.length()-1]!='M')cout<<">"<<endl;
else if(s2[s2.length()-1]=='M'&&s1[s1.length()-1]!='M')cout<<"<"<<endl;
else if(s2[s2.length()-1]==s1[s1.length()-1]) {
	if(s2[s2.length()-1]=='S'){
			if(s1.length()>s2.length()){
	cout<<"<"<<endl;
	}
	else	if(s2.length()>s1.length()){
	cout<<">"<<endl;
	}
	else cout<<"="<<endl;
	}
	else{
					if(s1.length()>s2.length()){
	cout<<">"<<endl;
	}
	else	if(s2.length()>s1.length()){
	cout<<"<"<<endl;
	}
	else cout<<"="<<endl;
	}
 
}
 
}
 
int main() {
    fastInp
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 
 
    return 0;
 
}
