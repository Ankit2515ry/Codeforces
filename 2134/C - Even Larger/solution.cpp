#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    long long res=0;
    for(int i=1;i<n-1;i+=2){
        if(a[i]<a[i-1]){
            res+=a[i-1]-a[i];
            a[i-1]=a[i];
        }
        if(a[i]<a[i+1]){
            res+=a[i+1]-a[i];
            a[i+1]=a[i];
        }
        if(a[i]<(a[i-1]+a[i+1])){
            res+=a[i-1]+a[i+1]-a[i];
            a[i+1]=a[i]-a[i-1];
        }
    }
    if(n%2==0){
        if(a[n-1]<a[n-1-1]){
            res+=a[n-1-1]-a[n-1];
            a[n-1-1]=a[n-1];
        }
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}