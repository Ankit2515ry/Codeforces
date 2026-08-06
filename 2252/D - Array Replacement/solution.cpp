#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    vector<long long> b(n - 1);
    vector<long long> res(n);
    for (int i = 0; i < n - 1; i++)
    {
        b[i] = a[i + 1] - a[i];
    }
    while (l < n - 1)
    {
        int r = l;
        while (r < n - 1 && abs(b[r] % 2) == abs(b[l] % 2))
        {
            r++;
        }
        sort(b.begin() + l, b.begin() + r);
        l = r;
    }
    res[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        res[i] = res[i - 1] + b[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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