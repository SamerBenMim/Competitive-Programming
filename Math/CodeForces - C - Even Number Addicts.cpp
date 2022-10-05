#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int dp[100][100];
void solve(){
    int n;
    cin>>n;
    int b=0,a=0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            a += 1;
        else
            b += 1;
    }
    if (b % 4 == 2)
        cout << "Bob" << endl;
    else if (b % 4 == 3)
        cout << "Alice" << endl;
    else if (b % 4 == 0)
        cout << "Alice" << endl;
    else if (a % 2 == 1)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
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
/*



0 3
0 2      1 1
0 1

 */

