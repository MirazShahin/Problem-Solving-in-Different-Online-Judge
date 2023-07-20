#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,counter=0;
    cin>>n;
    string s;
    vector<string> t(n);
    cin >> s;
    t.push_back(s);

    for(int i=0; i<s.size(); i++) s[i]=tolower(s[i]);

    vector<string>::iterator it;




    if(n>=26)
    {
        if(counter>=26)
            cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;



    return 0;
}
