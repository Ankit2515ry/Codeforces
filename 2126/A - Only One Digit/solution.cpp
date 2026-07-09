#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int y=10;
    if(n<10)
        y=n;
    else if(n<100){
        y=min(y,n%10);
        y=min(y,n/10);
    } 
    else if(n<1001){
        y=min(y,n%10);
        n=n/10;
        y=min(y,n%10);
        y=min(y,n/10);
    }  
    cout<<y<<endl; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}