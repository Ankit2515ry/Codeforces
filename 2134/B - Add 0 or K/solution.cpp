#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, k; cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] = a[i] + (a[i] % (k + 1)) * k;
        cout << a[i] ;
        if(i==n-1)cout<<endl;
        else cout<<" ";
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}