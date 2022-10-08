#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
long long intsqrt(long long x){
    long long left = 0, right = 2000000123;
    while (right > left) {
        long long mid = (left + right) / 2;
 
        if (mid * mid > x) right = mid;
        else left = mid + 1;
    }
    return left - 1;
}
void solve(){
long long l,r;
cin>>l>>r;
long long sqr = intsqrt(r);
long long sql = intsqrt(l-1) ;
long long sq = sqr-sql ;
long long ans = (sq-1)*3;
if(sqr*(sqr)<=r)ans++;
if(sql*(sql)>=l)ans++;
if(sqr*(sqr+1)<=r)ans++;
if(sqr*(sqr+2)<=r)ans++;
if(sql*(sql+2)>=l)ans++;
if(sql*(sql+1)>=l)ans++;
 
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
