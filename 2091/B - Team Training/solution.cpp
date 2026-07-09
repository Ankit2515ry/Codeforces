#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int team=0;
    int idx=-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]>=x)team++;
        else {
            idx=i;
            break;
        }
    }
    int temp=n-team;
    if(idx!=-1){
        int f=1;
        for(int i=idx;i>=0;i--){
            if(x>f*a[i]){
                f++;
            }
            else{
                team++;
                f=1;
            }
        }
    }
    cout<<team<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}