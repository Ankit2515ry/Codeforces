#include <bits/stdc++.h>
using namespace std;
 
bool check(int i, int j, int m, const vector<int> &l, const vector<int> &r, const vector<int> &u, const vector<int> &v)
{
    int lr = j;
    int rr = m - j + 1;
    if (lr >= l[i] && lr <= r[i])
    {
        return false;
    }
    if (rr >= u[i] && rr <= v[i])
    {
        return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n + 1);
    vector<int> r(n + 1);
    vector<int> u(n + 1);
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i];
        cin >> r[i];
        cin >> u[i];
        cin >> v[i];
    }
    for (int m = n; m >= 1; m--)
    {
        vector<int> dp(m + 1, n + 1);
        dp[0] = 0;
        int maxr = 0;
        for (int i = 1; i <= n; i++)
        {
            int limit = min(m, maxr + 1);
            for (int j = limit; j >= 1; j--)
            {
                if (dp[j - 1] < i && check(i, j, m, l, r, u, v))
                {
                    dp[j] = min(dp[j], i);
                    maxr = max(maxr, j);
                }
            }
            if (dp[m] <= n)
            {
                cout << m << "
";
                return;
            }
        }
    }
 
    cout << 0 << "
";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}