#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    string a;
    string b;
    cin >> a;
    cin >> b;
    vector<int> ae;
    vector<int> ao;
    vector<int> be;
    vector<int> bo;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == '1')
        {
            if (i % 2 == 0)
                ae.push_back(i);
            else
                ao.push_back(i);
        }
        if (b[i] == '1')
        {
            if (i % 2 == 0)
                be.push_back(i);
            else
                bo.push_back(i);
        }
    }
    if (ae.size() != be.size() || ao.size() != bo.size())
    {
        cout << -1 << endl;
        return;
    }
 
    long long ans = 0;
    for (int i = 0; i < ae.size(); ++i)
    {
        ans += abs(ae[i] - be[i]) / 2;
    }
    for (int i = 0; i < ao.size(); ++i)
    {
        ans += abs(ao[i] - bo[i]) / 2;
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