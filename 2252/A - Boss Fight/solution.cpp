#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long, int> f;
    long long sum = 0;
 
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
        f[a[i]]++;
    }
 
    int maxi = 0;
    long long mv = 0;
    for (auto const &p : f)
    {
        long long v = p.first;
        int c = p.second;
        if (c > maxi)
        {
            maxi = c;
            mv = v;
        }
    }
 
    int k = (n + 1) / 2;
 
    if (maxi <= k)
    {
        cout << sum << endl;
    }
    else
    {
        long long x = sum - (long long)maxi * mv;
        int y = (n - maxi) + 2;
        long long ans = x + y * mv;
        cout << ans << endl;
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