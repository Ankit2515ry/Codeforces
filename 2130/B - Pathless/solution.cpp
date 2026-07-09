#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int s;
    cin >> s;
    int sum = 0;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    vector<int> a(n);
    for (auto &it : a)
    {
        cin >> it;
        sum += it;
        if (it == 0)
            count0++;
        else if (it == 1)
            count1++;
        else
            count2++;
    }
    if (sum == s || s - sum > 1)
        cout << -1 << endl;
    else
    {
        while (count0--)
        {
            cout << 0 << " ";
        }
        while (count2--)
        {
            cout << 2 << " ";
        }
        while (count1--)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}