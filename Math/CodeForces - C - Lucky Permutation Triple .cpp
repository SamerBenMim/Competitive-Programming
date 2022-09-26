//
// Created by SAMER on 9/26/2022.
//
#include <bits/stdc++.h>

using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
void solve() {
    int n;
    cin>>n;
    if(n%2==0) {
        cout<<-1<<endl;
        return ;
    }
    vector<int> v1(n,0);
    vector<int> v2(n,0);
    vector<int> v3(n,0);

    for(int i =0 ; i<n;++i){
        v1[i]=i;
        v3[n-1-i]=i;
    }
    for(int i =0 ; i<n;++i){
        if(v3[i]>=v1[i])v2[i] = v3[i]-v1[i];
        else v2[i] = n+v3[i]-v1[i];
    }
    for(int i =0 ; i<n;++i){
        cout<<v1[i]<<" ";
    }cout<<endl;
    for(int i =0 ; i<n;++i){
        cout<<v2[i]<<" ";
    }cout<<endl;
    for(int i =0 ; i<n;++i){
        cout<<v3[i]<<" ";
    }cout<<endl;
}

int main() {
    fastInp;
//    int t;
//    cin >> t;

//    while(t--)
    solve();
}
/*
 *
 *
0 1 2 3 4 5
0 3 1 4 2 5
5 4 3 2 1 0

3


0 1 2 3
0 1 2 3
3 2 1 0

0 1 2 3 4 5 6 7
0 5 3 1 6 4 2 7
7 6 5 4 3 2 1 0

0 1 2 3 4
0 1 2 3 4
0 2 4 1 3
 0 2 4 6 8
 0 2 4 1 3
 * */