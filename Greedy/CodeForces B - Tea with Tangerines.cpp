#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
void solve(){
int n;
cin>>n;
int mi ;
cin>>mi ;
mi=2*mi-1;
int ans =0;
for(int i=1 ; i < n; ++i){
    int tmp;
    cin>>tmp;
    if(tmp%mi==0){
        ans+= tmp/mi-1;
 
    }else{
        ans+=tmp/mi;
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
