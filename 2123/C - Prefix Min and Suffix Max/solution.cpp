#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>pre(n,-1);
    vector<int>suf(n,-1);
    pre[0]=a[0];
    suf[n-1]=a[n-1];
    int j=n-2;
    for(int i=1;i<n;i++){
        pre[i]=min(pre[i-1],a[i]);
        suf[j]=max(suf[j+1],a[j]);
        j--;
    }
    string s(n,'0');
    for(int i=0;i<n;i++){
        if(pre[i]==a[i]||suf[i]==a[i])s[i]='1';
    }
    cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}