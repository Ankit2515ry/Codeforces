#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    int c;
    cin >> n >> c;
    vector<int> a(n);
    for (auto &it : a) cin >> it;
    sort(a.begin(),a.end());
    int coin=0;
    int j=n;
    while(j>0){
        int idx = upper_bound(a.begin(), a.begin() + j, c) - a.begin();
        coin += j - idx;
        j = idx-1;
        c /= 2;
    }
    cout<<coin<<endl;  
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}