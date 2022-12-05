#include <bits/stdc++.h>
using namespace std;
#define fastInp  \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(0);
vector<int> adj[100001];
bool visited[100001];
int ans[100001];
void dfs(int i)
{
    visited[i] = true;
    for (auto x : adj[i])
    {
        if (!visited[x])
        {
            dfs(x);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0, u, v; i < m; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

     }
     int count = 0;
     for (int i = 1; i <= n; ++i)
     {
         if (!visited[i])
         {
             count++;
             ans[count] = i;

             dfs(i);
         }
     }
     cout << count - 1 << "\n";
     if (count > 1)
         for (int i = 1; i < count ; ++i)
         {
             cout << ans[i] << " " << ans[i + 1] << "\n";
         }


}


int main()
{
    fastInp

    solve();

    return 0;
}