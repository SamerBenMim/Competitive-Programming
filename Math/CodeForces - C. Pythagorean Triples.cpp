#include <bits/stdc++.h>
 
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
 
void solve() {
    long long a;
    cin >> a;
    long long sq = a*a;
    for (long long i = 1; i <= a; ++i) {
        if (sq % i == 0){
            long long f1 = i;
            long long f2 = sq/i;
//            cout<<f1<<endl;
            if (f1 % 2 == f2 % 2) {
                long long c = (f1 + f2) / 2;
                long long b = (-f1 + f2) / 2;
 
                if (a * a + b * b == c * c && a&&b&&c) {
                    cout << b << " " << c << endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
}
 
int main() {
 
    fastInp
//    int t;
//    cin>>t;
//    while(t--){
    solve();
//    }
    return 0;
 
 
}
 
/*
 
   a^2 + b^2 = c^2
 
   3^2 + 4^2 = 5^2
     3  1  2
 
 
 
 
 
   (c-b)(c+b)=a^2
    c+b=f2
    c-b=
f1
    c= (f1+f2)/2
    b= (f2-f1)/2
 * */
