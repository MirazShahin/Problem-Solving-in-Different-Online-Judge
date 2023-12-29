#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define int long long
#define vll vector<int>
#define nn '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b) / gcd(a,b)
#define pb push_back

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define sp " "
#define pi 3.1415926535897932384626433832795

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;
const int MAX=(int)1e6+5;
int Divisor[MAX];

///_________________________________MiRaZ_HoSsAiN_ShAhIn_________________________________________________///

void divisor_count()
{
    for (int i=1; i<MAX; i++)
    {
        for(int j=i; j<MAX; j+=i)
        {
            Divisor[j]++;
        }
    }
}

///_________________________________________________________________________________________///
void solve()
{
 


}
int32_t main()
{
    FastIO;

//   divisor_count();
    int test_cases;
    cin>>test_cases;

    while(test_cases--) {
        solve();
    }

    return 0;
}
