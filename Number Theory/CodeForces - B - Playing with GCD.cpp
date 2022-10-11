#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
 
void solve(){
int n ;
cin>>n;
int t[n];
int t1[n+1];
for (int i=0;i<n;++i){
    cin>>t[i];
}
t1[0] = t[0];
for (int i=1;i<n;++i){
 
    t1[i] = t[i]*t[i-1] / gcd( t[i],t[i-1]);
 
}
//    for (int i=0;i<=n;++i) {
//
//        cout<<t1[i]<<" ";
//    }
t1[n]= t[n-1];
    for (int i=0;i<n;++i) {
        if(gcd(t1[i],t1[i+1])!=t[i]){ cout<<"NO"<<endl;
        return ;}
 
    }
    cout<<"YES"<<endl;
 
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
 
