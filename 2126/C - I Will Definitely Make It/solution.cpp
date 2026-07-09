#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>a(n);
    set<int>st;
    for(auto &it:a){
        cin>>it;
    }
    int pre=a[k-1];
    for(auto &it:a){
        if(it>pre)st.insert(it);
    }
    bool ans=true;
    for(auto &it:st){
        if(it-pre>a[k-1])ans=false;
        pre=it;
    }
    if(ans==false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}