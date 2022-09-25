#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
int t;
cin>>t;
while(t--){
    int n,c;
    int ans = 0 ;
    cin>>n;
    cin>>c;
    int t[102];
    memset(t,0,sizeof (t));
    for(int i =0 ; i<n;++i){
        int tmp;
        cin>>tmp;
        t[tmp]++;
    }
    for(int i =0 ; i<=100;++i){
        if(t[i]>=c) ans+=c;
        else ans+=t[i] ;
    }
    cout<<ans<<endl;
 
}
}