#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    vector<long long >res;
    long long a=10;
    for(int i=1;i<=18;i++){
        if(n%(a+1)==0&&n/(a+1)>0)res.push_back(n/(a+1));
        a*=10;
    }
    if(res.size()==0){
        cout<<0<<endl;
        return ;
    }
    sort(res.begin(),res.end());
    cout<<res.size()<<" "<<endl;
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
    
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}