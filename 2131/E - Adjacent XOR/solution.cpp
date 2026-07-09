#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin>>b[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==b[i])continue;
        else if((a[i]^a[i+1])==b[i])continue;
        else if((a[i]^b[i+1])==b[i])continue;
        else{
            cout<<"NO
";
            return;
        }
    }
    if(a[n-1]!=b[n-1]){
        cout<<"NO
";
        return;
    }
    cout << "YES
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}