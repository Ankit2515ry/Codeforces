#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 998244353;
long long ways(int pos, int n, const vector<int>& a) {
    for (int i = 0; i < pos - 2; ++i) {
        if (a[i] > a[i + 1]) return 0;
    }
    for (int i = pos - 1; i < n - 2; ++i) {
        if (a[i] < a[i + 1]) return 0;
    }
    vector<int> pov(n + 1, 0);
    vector<int> vap(n + 1, 0);
    vap[pos] = n;
    pov[n] = pos;
    for (int i = 1; i <= pos - 1; ++i) {
        int prev = (i == 1) ? 0 : a[i - 2];
        int curr = a[i - 1];
        if (curr > prev) {
            if (pov[curr] != 0 && pov[curr] != i) return 0;
            if (vap[i] != 0 && vap[i] != curr) return 0;
            pov[curr] = i;
            vap[i] = curr;
        }
    }
    for (int i = pos; i <= n - 1; ++i) {
        int next = (i == n - 1) ? 0 : a[i];
        int curr = a[i - 1];
        if (curr > next) {
            int tp = i + 1;
            if (pov[curr] != 0 && pov[curr] != tp) return 0;
            if (vap[tp] != 0 && vap[tp] != curr) return 0;
            pov[curr] = tp;
            vap[tp] = curr;
        }
    }
    vector<int> bc(n + 1, 0);
    int fs = 0;
    for (int i = 1; i <= n; ++i) {
        if (vap[i] == 0) {
            int lim = (i < pos) ? a[i - 1] : a[i - 2];
            bc[lim]++;
            fs++;
        }
    }
    vector<int> u;
    u.reserve(fs);
    for (int v = 1; v < n; ++v) {
        if (pov[v] == 0) {
            u.push_back(v);
        }
    }
    if ((int)u.size() != fs) return 0;
    long long ways = 1;
    int ptr = 0;
    int cu = 0;
    for (int b = 1; b <= n; ++b) {
        while (ptr < fs && u[ptr] <= b) {
            cu++;
            ptr++;
        }    
        int slotsb = bc[b];
        for (int k = 0; k < slotsb; ++k) {
            if (cu <= 0) return 0;
            ways = (ways * cu) % MOD;
            cu--;
        }
    }
    return ways;
}
 
void solve() {
    int n;
    cin >> n;
    if (!n) return;
    vector<int> a(n - 1);
    int maxi = 0;
    bool range = true;
    for (int i = 0; i < n - 1; ++i) {
        cin >> a[i];
        if (a[i] >= n || a[i] < 1) range = false;
        maxi = max(maxi, a[i]);
    }
    if (!range) {
        cout << 0 << "
";
        return;
    }
    int L = -1, R = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == maxi) {
            if (L == -1) L = i + 1;
            R = i + 1;
        }
    }
    long long ans = 0;
    int c1 = L;
    ans = (ans + ways(c1, n, a)) % MOD;
    int c2 = R + 1;
    if (c2 != c1) {
        ans = (ans + ways(c2, n, a)) % MOD;
    }
    cout << ans << "
";
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