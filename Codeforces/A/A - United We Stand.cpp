#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define vll vector<ll>
#define vst vector<str>
#define nn '\n'
#define gcd(a,b)  __gcd(a,b)
#define	lcm(a,b)  (a*b)/gcd(a,b)

#define pb push_back
#define ppb pop_back
#define yes cout << "Yes\n"
#define no  cout<<"No\n"
#define sp  " "
#define pi 3.1415926535897932384626433832795
#define all(x)  (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
ll mod =1e9+7;
using namespace std;
void result()
{
    ll n;
    cin>>n;
    vll v(n);
    ll mx=0;
    vll b,c;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mx=max(mx,v[i]);
    }
     for(ll i=0;i<n;i++){
        if(v[i]<mx){
            b.pb(v[i]);
        }
        else{
            c.pb(v[i]);
        }
    }
    if(b.size()==0)cout<<"-1"<<nn;
    else{
        cout<<b.size()<<sp<<c.size()<<nn;
        for(auto u:b){
         cout<<u<<sp;
        }
        cout<<nn;
        for(auto u:c){
            cout<<u<<sp;
        }
        cout<<nn;
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
//    result();

    return 0;
}
