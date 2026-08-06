#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t0 = 0, t1 = 0;
    for (auto it : s) {
        if (it == '0') t0++;
        else t1++;
    }
    int maxi = -1;
    for (int i = 0; i < 2; i++) {
        int l = 0;
        int e = i;
        for (int i = 0; i < n; i++) {
            if ((s[i] - '0') == e) {
                l++;
                e = 1 - e;
            }
        }
        for (int j = 1; j <= l; j++) {
            int k0, k1;
            if (i == 0) {
                k0 = (j + 1) / 2;
                k1 = j / 2;
            } else {
                k1 = (j + 1) / 2;
                k0 = j / 2;
            }
            int d0 = t0 - k0;
            int d1 = t1 - k1;
            if (abs(d0 - d1) <= 1) {
                maxi = max(maxi, j);
            }
        }
    }
    if (abs(t0 - t1) <= 1) {
        maxi = max(maxi, 0);
    }
    if (maxi == -1) {
        cout << -1 << endl;
    } else {
        cout << n - maxi << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t)
    {
        while (t--)
            solve();
    }
 
    return 0;
}