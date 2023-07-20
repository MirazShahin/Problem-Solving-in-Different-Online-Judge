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
vll v(200100);
vll pre_sum(200100);
void result()
{
    ll n,q;
    cin>>n>>q;;
    ll sum=0;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        sum+=v[i];
        pre_sum[i]=pre_sum[i-1];
        pre_sum[i]+=v[i];
    }

    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;

        ll ans=pre_sum[n]-(pre_sum[r]-pre_sum[l-1])+(r-l+1)*k;
        if(ans%2==1) yes;
        else no;
    }
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
//     result();

    return 0;
}


/*
 * do something instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
