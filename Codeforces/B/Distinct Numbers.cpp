

/*
**                 Bismillahir Rahmanir Rahim                       **
**                       ALLAHU AKBAR                               **
**                                                                  **
**     Author: Miraz Hossain Shahin                                 **
**     Bangladesh University of Business and Technology,(BUBT)      **
**     Dept. of CSE.                                                **
*/

#include<bits/stdc++.h>

//extension,,,,,,,
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define vll vector<ll>
#define vst vector<str>
#define nn '\n'
#define gcd(a,b)  __gcd(a,b)
#define	lcm(a,b)  (a*b)/gcd(a,b)

#define pb push_back
#define ppb pop_back
#define yes cout << "YES\n"
#define no cout<<"NO\n"
#define sp  " "
#define pi 3.1415926535897932384626433832795

//define sort function,,,,,
#define asrt(a) sort(a.begin(),a.end())
#define rsrt(a) sort(a.rbegin(),a.rend())
#define reva(a) reverse(a.begin(),a.end())
#define gsrt(a) sort(v.begin(),v.end(),greater<int>())
using namespace std;

void result()
{
    ll n;
    cin>>n;
    set<ll>s;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<nn;


}
int main()
{
    optimize();
//    ll t;
//    cin>>t;
//
//    while(t--)
//    {
//        result();
//    }
     result();

    return 0;
}


/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
