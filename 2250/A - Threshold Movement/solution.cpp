#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    if(n%2!=0){
        cout<<"NO"<<endl;
        return ;
    }
    long long maxe=0;
    long long mino=1e10;
    for(int i=0;i<n;i++){
        if((i+1)%2==0){
            maxe=max(maxe,a[i]);
        }else{
            mino=min(mino,a[i]);
        }
    }
    if(mino-maxe>=2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}