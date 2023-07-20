#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    int k;
    cin>>k;
    int l=-1,r=n;
    while(r-l>1){
        int  mid=(l+r)/2;
        if(a[mid]>k){
            r=mid;
        }
        else{
            l=mid;
        }

    }
    cout<<l;
    return 0;
}
