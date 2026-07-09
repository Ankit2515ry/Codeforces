#include <bits/stdc++.h>
using namespace std;
void solve() {
    int k, x;
    cin >> k >> x;
    for(int i=0;i<k;i++){
        if(x!=1&&(x-1)%3==0&&((x-1)/3)%2!=0){
            x=(x-1)/3;
        }
        else{
            x*=2;
        }
    }
    cout<<x<<endl;
    
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}