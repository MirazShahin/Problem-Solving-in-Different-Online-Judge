


#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define vll        vector<ll>
#define vii        vector<int>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()


using namespace std;
using ll = long long int;

void solve() {
    int n, m;
    cin >> n >> m;
    vii v(n), w(m);
    set<int> se;
    for(int i = 0; i < n; i++ ) {
        cin >> v[i];
        se.insert(v[i]);
    }
    for(int i = 0; i < m; i++ ) {
        cin >> v[i];
        auto it = se.upper_bound(v[i]);
        if(it == se.begin()) {
            cout << -1 << nn;
        }
        else {
            it--;
            cout << *it << nn;
            se.erase(it);
        }
    }
}
int32_t main() {
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
