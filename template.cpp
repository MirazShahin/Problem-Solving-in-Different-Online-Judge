/*
**                 Bismillahir Rahmanir Rahim                       **
**                       ALLAHU AKBAR                               **
**                                                                  **
**     Author: Miraz Hossain Shahin                                 **
**     Bangladesh University of Business and Technology,(BUBT)      **
**     Dept. of CSE.                                                **
*/

#include<bits/stdc++.h>

//extension,,,,,,
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
#define PI 3.1415926535897932384626433832795

//define sort function,,,,,
#define asort(a) sort(a.begin(),a.end())
#define rsort(a) sort(a.rbegin(),a.rend())
#define gsort(a) sort(v.begin(),v.end(),greater<int>())
using namespace std;
void result()
{
    ll n,k;
    cin>>n>>k;
    vll v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }

    ll cnt=0;
    for(ll i=0; i<n; i++){
        ll x=(i+1)-v[i];
        if(x%k) cnt++;
    }

    if(cnt==2) cout<<"1"<<nn;
    else if(cnt>2) cout<<"-1"<<nn;
    else cout<<"0"<<nn;

}
int main()
{

    optimize();
    ll t;
    cin>>t;

    while(t--)
    {
        result();
    }

    return 0;
}

//int main()
//{
//
//    optimize();
//
//    result();
//
//    return 0;
//}


/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
