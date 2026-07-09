#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long a,b;
    cin >> a>>b;
    long long res = -1;
    if((a*b)%2!=0){
        res=(a*b)+1;
        cout<<res<<endl;
    }
    else if((a*b)%4==0&&b%2==0){
        res=(a*b)/2+2;
        cout<<res<<endl;
    }else{
        cout<<res<<endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}