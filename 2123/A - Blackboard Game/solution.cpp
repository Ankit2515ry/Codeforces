#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)a[i]=i;
    bool al=false;
    bool bo=false;
    int temp=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(al==false){
            if(a[i]!=-1){
                al=true;
                temp=a[i];
                a[i]=-1;
            }
        }else{
            if(a[i]!=-1&&((temp+a[i])%4)==3){
                al=false;
                bo=true;
                a[i]=-1;
            }
        }
        }
    }
    if(al)cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}