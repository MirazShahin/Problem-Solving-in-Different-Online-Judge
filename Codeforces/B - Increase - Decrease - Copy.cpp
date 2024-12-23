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
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int;
using ld = long double;
using ull = unsigned long long;

const ll MOD = 1LL * 998244353;
 
// Direction Array...
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {1,-1,0,0}; // 4-direction...........
int dy4[]= {0,0,1,-1};

//Modular Arithmetic__________________________________________
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
//debug_______________________________________________________
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
// #else
// #define dbg(args...)
 
void solve() {
    int n; cin >> n;
    vector<int> v(n), w(n + 1);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    for(int i = 0; i < n + 1; i++ ) cin >> w[i];
    ll ans1 = 0;
    ll ans2 = 0;
    for(int i = 0; i < n; i++ ) {
        ans1 += abs(v[i] - w[i]);
        ans2 += abs(v[i] - w[i]);
    }
    ans1++;
    ans2++;
    ll last = w[n];
    bool increment_check = 0;
    for(int i = 0; i < n; i++ ) {
        if((last >= w[i] and last <= v[i]) or (last <= w[i] and last >= v[i])) {
            increment_check = 1;
            break;
        }
    }
    ll mn1 = 1e9;
    for(int i = 0; i < n; i++ ) {
       ll curr = abs(last - v[i]);
       mn1 = min(mn1, curr);
    }
    for(int i = 0; i < n; i++ ) {
        ll move = abs(v[i] - w[i]);
        if(v[i] > w[i]) {
            v[i] -= move;
        }
        else {
            v[i] += move;
        }
    }
    ll mn2 = 1e9;
    for(int i = 0; i < n; i++ ) {
       ll curr = abs(last - v[i]);
       mn2 = min(mn2, curr);
    }
    if(increment_check) {
        cout << min(ans1, ans2) << nn;
    }
    else {
        cout << min(ans1 + mn1, ans2 + mn2) << nn;
    }
}   
int32_t main() {
    FastIO; 
    
    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
