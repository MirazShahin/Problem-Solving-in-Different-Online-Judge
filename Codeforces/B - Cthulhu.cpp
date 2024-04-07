

#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define yes        cout << "Yes\n"
#define no         cout << "No\n"
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;


const int N = 1e5 + 7;
vector<vector<int>> graph;
int vis[N];
void dfs(int node) {
    vis[node] = 1;
    for(auto child : graph[node]) {
        if(!vis[child]) {
            dfs(child);
        }
        else {
            continue;
        }
    }
}
///------------------------------>>>>>---Start---<<<<<---------------------------------------------
void solve()
{
    int n, m;
    cin >> n >> m;
    graph.resize(n + 1);
    for(int i = 0; i < m; i++ ) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    if(n != m) {
        cout << "NO" << nn;
        return;
    }
    int ans = 0;
    dfs(1);
    for(int i = 1; i <= n; i++ ) {
        ans += vis[i];
    }
    if(ans == n) {
        cout << "FHTAGN!" << nn;
    }
    else {
        cout << "NO" << nn;
    }
//    cout << ans << nn;
}
int32_t main()
{
    FastIO;

    int test_case = 1;
//    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
