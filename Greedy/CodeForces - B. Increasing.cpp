#include <bits/stdc++.h>
 
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int t[101]; 
void solve() {
int n;
cin >>n;
set<int> s ;
for (int i =0;i<n;++i){
	int tmp;
	cin>>tmp;
	s.insert(tmp);
}
 
if(n>s.size())cout<<"NO"<<endl;
 
else cout<<"YES"<<endl;
 
 
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
 
