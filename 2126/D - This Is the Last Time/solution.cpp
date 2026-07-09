#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<pair<int,pair<int,int>>>h(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int b;
        cin>>b;
        int c;
        cin>>c;
        h[i]={a,{b,c}};
    }
    sort(h.begin(),h.end());
    int coin=k;
        for(int i=0;i<n;i++){
        if(h[i].first<=coin&&h[i].second.first>=coin){
            coin=max(coin,h[i].second.second);
            if(coin==h[i].second.second)coin=h[i].second.second;
        }
    }
    cout<<coin<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}