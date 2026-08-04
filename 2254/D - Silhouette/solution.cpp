#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long, int> f;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }
    vector<long long> S;
    for (auto p : f) {
        S.push_back(p.first); 
    }
    if (S[0] != 0) {
        cout << -1 << endl;
        return;
    }
    int k = S.size();
    vector<long long> V(k);
    bool flag = true;
    for (int i = 1; i < k; i++) {
        long long d = S[i] - S[i - 1];
        long long pre = f[S[i - 1]];
        if (d <= 0 || d % pre != 0) {
            flag = false;
            break;
        }
        V[i - 1] = d / pre;
        if (i - 1 == 0) {
            if (V[0] < 1) flag = false;
        } else {
            if (V[i - 1] <= V[i - 2]) flag = false;
        }
    }
    if (!flag) {
        cout << -1 << endl;
        return;
    }
    if (k == 1) {
        V[0] = 1;
    } else {
        V[k - 1] = V[k - 2] + 1;
    }
    map<long long, long long> res;
    for (int i = 0; i < k; i++) {
        res[S[i]] = V[i];
    }
    for (int i = 0; i < n; i++) {
        cout << res[a[i]] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--)
            solve();
    }
    return 0;
}