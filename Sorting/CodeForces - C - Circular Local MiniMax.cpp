#include <bits/stdc++.h>

using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
void solve() {
    int n;
    cin>>n;

    map<int,int> mp ;
    int t[n];
    for(int i = 0;i<n;++i){
        int tmp ;
        cin>>tmp;
        t[i]=tmp;
        if(mp.find(tmp)!=mp.end()){
            mp.find(tmp)->second++;
        }else{
            mp.insert({tmp,1});
        }

    }
    if(n%2==1){
        cout<<"NO"<<endl;
        return ;
    }
    int b = 0;
    int a = n;
    for(auto el:mp){
        a-= el.second;
        if(el.second > b && el.second> a){cout<<"NO"<<endl;return;}
        b+= el.second ;
    } cout<<"YES"<<endl;
    sort(t,t+n);

    for(int i =0; i<n/2;++i){
        cout<<t[i]<<" "<<t[n/2+i]<<" ";
    }
    cout<<endl;

}

int main() {
    fastInp;
    int t;
    cin >> t;

    while(t--)
        solve();
}
/*
 *
 * 4 3 4
 *
 *    1  1111 1 111 1 11
 * */