#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a;
    long long b;
    long long k;
    cin>>a;
    cin>>b;
    cin>>k;
    if(k>=a&&k>=b){
        cout<<1<<endl;
        return;
    }
    else{
        long long l=__gcd(a,b);
        a=a/l;
        b/=l;
        if(k>=a&&k>=b){
        cout<<1<<endl;
        return;
        }
        else cout<<2<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}