#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>mark(n + 4);
vector<int> ans;

void f(int i) {
   if(i == n) {
    for(auto u : ans) {
        cout << u << " ";
    }
    cout << '\n';
    return;
   }
   ans.push_back(mark[i]);
   f(i + 1);
   ans.pop_back();
   f(i + 1);
}
int main()
{
    cin >> n;
    mark[0] = 1;
    for(int i = 1; i <= n; i++) {
        mark[i] = i + 1;
    }
    f(0);

    return 0;
}
