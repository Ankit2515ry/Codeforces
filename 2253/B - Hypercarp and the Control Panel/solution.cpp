#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> y;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        if (x.empty() || x.back() != a[i])
        {
            x.push_back(a[i]);
            y.push_back(1);
        }
        else
        {
            y.back()++;
        }
    }
    bool f1 = false;
    bool f2 = false;
    int xs = x.size();
    int ml = xs;
    for (int i = 0; i < xs - 1; i++)
    {
        if (y[i] >= 2 && y[i + 1] >= 2)
        {
            f2 = true;
            break;
        }
    }
    if (f2)
    {
        cout << ml + 2 << endl;
        return;
    }
    for (int i = 0; i < xs; i++)
    {
        if (y[i] >= 2)
        {
            bool p = false;
            if (i + 1 < xs)
            {
                if (i + 2 >= xs || x[i] != x[i + 2])
                {
                    p = true;
                }
            }
            bool q = false;
            if (i > 0)
            {
                if (i - 2 < 0 || x[i - 2] != x[i])
                {
                    q = true;
                }
            }
            if (p || q)
            {
                f1 = true;
                break;
            }
        }
    }
    if (f1)
    {
        cout << ml + 1 << endl;
    }
    else
    {
        cout << ml << endl;
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
        {
            solve();
        }
    }
 
    return 0;
}