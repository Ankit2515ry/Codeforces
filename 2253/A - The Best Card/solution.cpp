#include <bits/stdc++.h>
using namespace std;
 
bool check(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    if (check(n + 1))
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