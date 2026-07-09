#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int peak=0;
    int temp=0;
    bool f=true;
    for(int i=0;i<n;i++){
        if(f==true&&a[i]==0){
            temp++;
           if(temp==k){
            peak++;
            f=false;
            temp=0;
           }
        }
        else{
            f=true;
            temp=0;
        }
    }
    cout<<peak<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}