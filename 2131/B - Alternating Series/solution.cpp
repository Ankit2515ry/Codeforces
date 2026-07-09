#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        if(i%2==0)a[i]=-1;
        if(i%2!=0)a[i]=3;
        if(n%2==0)a[n-1]=2;
    }
    for(auto it:a)cout<<it<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}