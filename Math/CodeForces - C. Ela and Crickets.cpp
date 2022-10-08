#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

void solve(){
int n;
cin>>n;
int cntrX ,cntrY;
int r1,c1,r2,c2,r3,c3,x,y ;
cin>>r1>>c1>>r2>>c2>>r3>>c3>>x>>y;
if(r1==r2&&c1==c3 ||r1==r3&&c1==c2){
    cntrX = r1 ,cntrY = c1;
}
else if(r2==r1&&c2==c3 ||r2==r3&&c2==c1){
    cntrX = r2 ,cntrY = c2;
}
else{
    cntrX = r3 ,cntrY = c3;
}
//cout<<cntrX<<" "<<cntrY<<endl;
if(cntrX == 1 && cntrY==1){
    if(x==1||y==1)cout<<"YES"<<endl;
//    else if(x==1||y==2)cout<<"YES"<<endl;
//    else if(x==2||y==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}
if(cntrX == n && cntrY==n){
    if(x==n||y==n)cout<<"YES"<<endl;
//    else if(x==n||y==n-1)cout<<"YES"<<endl;
//    else if(x==n-1||y==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
    }
    if(cntrX == n && cntrY==1){
        if(x==n||y==1)cout<<"YES"<<endl;
//        else if(x==n||y==2)cout<<"YES"<<endl;
//        else if(x==n-1||y==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    if(cntrX == 1 && cntrY==n){
        if(x==1||y==n)cout<<"YES"<<endl;
//        else if(x==2||y==n)cout<<"YES"<<endl;
//        else if(x==1||y==n-1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
if(cntrX %2==x%2||cntrY %2==y%2){cout<<"YES"<<endl;}
else{
    cout<<"NO"<<endl;
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


