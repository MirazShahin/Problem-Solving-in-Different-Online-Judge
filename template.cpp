#include <bits/stdc++.h>
using namespace std;
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using ll = long long int;

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define yes        cout << "YES\n"
#define no         cout << "NO\n"
#define sp         " "

#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(), (x).rend()

/// Modular arithmetic
const ll    MOD = (ll)1e9 + 7;

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

//***********************************************  The END ***********************************************************************************

vector<ll>  prime;
const ll N = (ll)1e6;
ll          fact[N + 5];
bitset<N + 3>marked;


///**********************************************MiRaZ_HoSsAiN_ShAhIn**************************************************///
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
bool isPrime(int n) {
    if(n < 2) return false;
    return !marked[n];
}

///=========__________===================_________====================_________====================________============
void solve()
{

}
int32_t main()
{
    FastIO;
    Sieve();

    int test_case;
    cin >> test_case;
    int Case = 0;
    while( test_case--) {
//    cout << "Case " << Case + 1 << ": ";
        solve();
        Case++;
    }

    return 0;
}

