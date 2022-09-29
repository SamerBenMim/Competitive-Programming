//
// Created by SAMER on 9/26/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
void solve() {
    int n,m;
    cin>>n>>m;
    if(n==1||m==1||m==2&&n==2)cout<<1<<" "<<1<<endl;
    else cout<<2<<" "<<2<<endl;
}

int main() {
    fastInp;
    int t;
    cin>>t;
    while(t--)
        solve();
}
//* * * *
//* * * *
//* * * *
//* *
