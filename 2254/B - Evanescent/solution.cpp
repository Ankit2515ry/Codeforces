#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || s[i] != s[i - 1])
        {
            res++;
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == s[i + 1] && s[i] != s[i - 1])
        {
            cout << res - 2 << endl;
            return;
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] != s[i - 1] && s[i] != s[i + 1])
        {
            cout << res - 1 << endl;
            return;
        }
    }
    cout << res << endl;
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