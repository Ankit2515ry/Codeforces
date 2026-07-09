#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a;
    cin>>a;
    int b;
    cin>>b;
    if(b>=a){
        if((n-b)%2==0){
            cout<<"YES"<<endl;
            return;
        }
    }else{
        if((n-a)%2==0&&(a-b)%2==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}