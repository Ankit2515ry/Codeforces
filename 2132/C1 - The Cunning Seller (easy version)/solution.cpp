#include <bits/stdc++.h>
using namespace std;
long long cost(int x) {
    if (x == 0) return 3;
    long long temp = 1;
    for (int i = 0; i < x; i++) temp *= 3;   
    return 3 * temp + 1LL * x * (temp / 3);    
}
void solve() {
    long long n;
    cin >> n;
    long long ans = 0;
    int x = 0;
    while (n > 0) {
        int rem = n % 3;    
        ans += 1LL * rem * cost(x);
        n /= 3;
        x++;
    }
    cout << ans << "
";
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}