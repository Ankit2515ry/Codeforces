#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int>p(n);
    for(auto &it:p)cin>>it;
    for(int i=0;i<n;i++){
        cout<<n+1-p[i];
        if(i!=n-1)cout<<" ";
    }
    cout<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}