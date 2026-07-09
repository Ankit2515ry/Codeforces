#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
ll cou_good(ll x) {
    vector<int> primes = {2, 3, 5, 7};
    ll bad = 0;
    bad += x / 2;
    bad += x / 3;
    bad += x / 5;
    bad += x / 7;
    bad -= x / lcm(2LL, 3LL);
    bad -= x / lcm(2LL, 5LL);
    bad -= x / lcm(2LL, 7LL);
    bad -= x / lcm(3LL, 5LL);
    bad -= x / lcm(3LL, 7LL);
    bad -= x / lcm(5LL, 7LL);
    bad += x / lcm(lcm(2LL, 3LL), 5LL);
    bad += x / lcm(lcm(2LL, 3LL), 7LL);
    bad += x / lcm(lcm(2LL, 5LL), 7LL);
    bad += x / lcm(lcm(3LL, 5LL), 7LL);
    bad -= x / lcm(lcm(lcm(2LL, 3LL), 5LL), 7LL);
    ll good = x - bad;
    return good;  
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << cou_good(r) - cou_good(l - 1) << "
";
    }
    return 0;
}