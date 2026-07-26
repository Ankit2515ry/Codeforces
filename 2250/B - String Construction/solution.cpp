#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    if (k == n - 1)
    {
        cout << -1 << endl;
        return;
    }
    int b = n - k;
    int c1 = (n + 1) / 2;
    int c0 = n / 2;
 
    int ones = (b + 1) / 2;
    int zeros = b / 2;
 
    int s = 1;
    if (ones > c1 || zeros > c0)
    {
        s = 0;
    }
 
    if (s == 1)
    {
        ones = (b + 1) / 2;
        zeros = b / 2;
    }
    else
    {
        zeros = (b + 1) / 2;
        ones = b / 2;
    }
 
    int eones = c1 - ones;
    int ezeros = c0 - zeros;
 
    string result = "";
    bool fones = false;
    bool fzeros = false;
 
    int curr = s;
    for (int i = 0; i < b; ++i)
    {
        if (curr == 1)
        {
            result += '1';
            if (!fones)
            {
                result.append(eones, '1');
                fones = true;
            }
        }
        else
        {
            result += '0';
            if (!fzeros)
            {
                result.append(ezeros, '0');
                fzeros = true;
            }
        }
        curr = 1 - curr;
    }
 
    cout << result << endl;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}