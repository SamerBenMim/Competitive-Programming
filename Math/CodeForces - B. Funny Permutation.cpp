#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
 
void solve(){
int n;
cin>>n;
if(n==3){
cout<<-1<<endl; return ;
}
if(n==5){
cout<<5<<" " <<4<<" "<< 1<<" "<< 2<<" "<< 3<<endl; return ;
}
if(n%2==0)
for(int i= n; i> 0 ;--i)cout<<i<<" ";
else {
	int k = n/ 2 +1 ;
 
for(int i= n; i> k ;--i)cout<<i<<" ";
cout<<k-1<<" ";
cout<<k<<" ";
for(int i= k-2; i> 0 ;--i)cout<<i<<" ";
}
cout<<endl;
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
 
/*
 
1 2 3 4 5 6 7 
7 6 5 3 4 2 1