#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    vector<int>b(n);
    for(auto &it:b)cin>>it;
    int in=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i])in+=a[i]-b[i];
    }
    cout<<in+1<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}