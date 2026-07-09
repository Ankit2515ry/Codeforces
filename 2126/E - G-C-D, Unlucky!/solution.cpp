#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> p(n), s(n);
    for (long long i = 0; i < n; i++) cin >> p[i];
    for (long long i = 0; i < n; i++) cin >> s[i];
 
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        a[i] = lcm(p[i], s[i]);
    }
    
    vector<long long> prefix(n), suffix(n);
    prefix[0] = a[0];
    for (long long i = 1; i < n; i++)
        prefix[i] = gcd(prefix[i - 1], a[i]);
 
    suffix[n - 1] = a[n - 1];
    for (long long i = n - 2; i >= 0; i--)
        suffix[i] = gcd(suffix[i + 1], a[i]);
 
    for (long long i = 0; i < n; i++) {
        if (prefix[i] != p[i] || suffix[i] != s[i]) {
            cout << "NO
";
            return;
        }
    }
 
    cout << "YES
";
}
 
int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}