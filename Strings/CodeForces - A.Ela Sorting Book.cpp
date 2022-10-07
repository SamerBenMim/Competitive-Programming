#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
void solve(){
int n,k;
cin>>n>>k;
int t[26] ;
    memset(t,0,sizeof(t));
string s;
cin>>s;
for(int i =0;i<n;++i){
    t[s[i]-'a']++;
}
//    for(int i =0;i<26;++i){
//        cout<<t[i]<<" - ";
//    }cout<<endl;
string ans="";
int l = n/k;
    while(k--){
        int j=0;
    for(int i =0;i<26;++i){
        if(!t[i]||i==l){
            ans+=char(i+97);
            break;
        }
        else {t[i]--; }
        }
    }
    cout<<ans<<endl;
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


