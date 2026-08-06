#include <bits/stdc++.h>
using namespace std;
 
struct SegTree
{
    int n;
    vector<long long> c;
    vector<long long> s;
    SegTree(int size)
    {
        n = max(1, size);
        c.assign(4 * n, 0);
        s.assign(4 * n, 0);
    }
    int query(int node, int l, int r, long long t, const vector<long long> &val)
    {
        if (s[node] < t)
            return -1;
        if (l == r)
        {
            long long v = val[l];
            long long need = (t + v - 1) / v;
            if (need <= c[node])
                return (int)need;
            return -1;
        }
        int mid = l + (r - l) / 2;
        if (s[2 * node + 1] >= t)
        {
            return query(2 * node + 1, mid + 1, r, t, val);
        }
        else
        {
            int rc = c[2 * node + 1];
            int lc = query(2 * node, l, mid, t - s[2 * node + 1], val);
            if (lc == -1)
                return -1;
            return rc + lc;
        }
    }
    void update(int node, int l, int r, int idx, long long val)
    {
        c[node]++;
        s[node] += val;
        if (l == r)
            return;
        int mid = l + (r - l) / 2;
        if (idx <= mid)
            update(2 * node, l, mid, idx, val);
        else
            update(2 * node + 1, mid + 1, r, idx, val);
    }
};
 
void solve()
{
    int n, m;
    if (!(cin >> n >> m))
        return;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<long long>> a(n, vector<long long>(m));
    vector<long long> val;
    val.reserve(n * m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            val.push_back(a[i][j]);
        }
    }
    sort(val.begin(), val.end());
    val.erase(unique(val.begin(), val.end()), val.end());
    int U = val.size();
    SegTree st(U);
    int ans = m;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            int idx = lower_bound(val.begin(), val.end(), a[i][j]) - val.begin();
            st.update(1, 0, U - 1, idx, a[i][j]);
        }
        int temp = st.query(1, 0, U - 1, v[i], val);
        if (temp != -1)
        {
            ans = min(ans, temp);
        }
    }
    cout << ans << endl;
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