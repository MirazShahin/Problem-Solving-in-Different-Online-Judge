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

///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----Modular Arithmetic----<<<<<<<<<<<<<<<<<<<<<<<<<---------------
const  ll MOD = (ll) 1e9 + 7;
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----The End----<<<<<<<<<<<<<<<<<<<<<<<<<---------------
const ll N = (ll) 1e6 + 7;
bitset<N> marked;
vii  prime;
int Divisor[N];
int Divisor_sum[N];

///--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>----MiRaZ_HoSsAiN_ShAhIn----<<<<<<<<<<<<<<<<<<<<<-----------------
void divisor_count() {
    for (int i = 1; i < N; i++) {
        for(int j = i; j < N; j += i) {
            Divisor[j]++;
        }
    }
}
void divisor_sum() {
    for (int i = 1; i < N; i++) {
        for(int j = i; j < N; j += i) {
            Divisor_sum[j] += i;
        }
    }
}
void Sieve()
{
    for(int i = 4; i <= N; i+=2) {
        marked[i] = 1;
    }
    for(int i = 3; i * i <= N; i+= 2) {
        if(!marked[i])
        for(int j = i * i; j <= N; j += (i << 1)) {
            marked[j] = 1;
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= N; i+=2) {
        if(!marked[i]) {
            prime.push_back(i);
        }
    }
}
bool isPrime(ll n) {
    if(n < 2) return false;
    return !marked[n];
}

///---------------------------------------->>>>>---Start---<<<<<---------------------------------------------
void solve() {
    // Code here....

  
}
int32_t main()
{
    FastIO;
    Sieve();
    divisor_count();
    divisor_sum();
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
