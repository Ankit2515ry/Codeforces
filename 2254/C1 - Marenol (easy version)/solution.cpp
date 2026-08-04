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
    int ao = 0;
    int ae = 0;
    int bo = 0;
    int be = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            if (a[i] == '1')
                ao++;
            if (b[i] == '1')
                bo++;
        }
        else
        {
            if (a[i] == '1')
                ae++;
            if (b[i] == '1')
                be++;
        }
    }
    if (ao == bo && ae == be)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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