#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int mean=a[0];
    for(int i=1;i<n;i++){
        mean=(mean+a[i])/2;
    }
    cout<<mean<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}