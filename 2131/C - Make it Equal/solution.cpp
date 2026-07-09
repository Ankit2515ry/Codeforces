#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin>>t[i];
    }
    for (int i = 0; i < n; i++) {
        v[i]=v[i]%k;
        t[i]=t[i]%k;
    }
    multiset<int>s;
    for(auto it:v)s.insert(it);
    for(int i=0;i<n;i++){
        if(s.find(t[i])!=s.end())s.erase(s.find(t[i]));
        else if(s.find(k-t[i])!=s.end())s.erase(s.find(k-t[i]));
        else {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}