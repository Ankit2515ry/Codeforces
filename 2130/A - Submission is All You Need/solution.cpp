#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    int ma=0;
    cin >> n ;
    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
        if(it>1)ma+=it;
    }
    int count=0;
    for(auto it:a){
        if(it<2)count++;
    }
    cout<<ma+count<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}