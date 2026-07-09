#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>g(n);
    for(auto &it:g)cin>>it;
    sort(g.begin(),g.end());
    long long res=0;
    for(int i=n-1;i>=0;i-=2){
        res+=g[i];
    }
    cout<<res<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}