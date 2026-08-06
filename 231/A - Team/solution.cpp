#include <bits/stdc++.h>
using namespace std;
 
// void solve(){
 
// }
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // int t;
    // if (cin >> t) {
    //     while (t--)
    //         solve();
    // }
    int n;
    cin>>n;
    int res=0;
    for(int i=0;i<n;i++){
        int a;
        int b;
        int c;
        cin>>a>>b>>c;
        if(a+b+c>=2)res++;
    }
    cout<<res<<endl;
    return 0;
}