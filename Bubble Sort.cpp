#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define int long long
#define vll vector<int>
#define nn '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vll a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int iteration_counter = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n; j++) {
          if(a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
          }
        }
        iteration_counter++;
    }
    cout << iteration_counter << nn;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << nn;
}
int32_t main()
{
    FastIO;
    solve();
    return 0;
}

