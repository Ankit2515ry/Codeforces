#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    vector<int> v(3);
    for(int i=0;i<3;i++)cin>>v[i];
    int res = 0;
    while (true) {
        if (v[0] == v[1] || v[1] == v[2] || v[0] == v[2]) {
            break;
        }
        sort(v.begin(), v.end());
        v[2] -= 1;
        v[0] += 1;
        res++;
    }
    cout << res << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}