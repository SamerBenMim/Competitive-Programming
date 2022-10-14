#include <bits/stdc++.h>
 
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
 
void solve() {
    int n;
    cin >> n;
    int t[1001];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        t[tmp] = i + 1;
    }
    int ma = -1;
    for (int i = 1; i < 1001; ++i) {
        for (int j = 1; j < 1001; ++j) {
            if (t[i] + t[j] > ma && gcd(i, j) == 1 && t[i] && t[j]) ma = t[i] + t[j];
        }
    }
   
    cout << ma << endl;
}
 
int main() {
    int k;
    fastInp
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
 
 
}
 

