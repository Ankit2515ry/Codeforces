#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n ;
    string a;
    cin>>a;
    int m;
    cin>>m;
    string b;
    cin>>b;
    string s;
    cin>>s;
    string x="";
    string y="";
    for(int i=0;i<m;i++){
        if(s[i]=='V')x+=b[i];
        else y+=b[i];
    }
    reverse(x.begin(),x.end());
    string res=x+a+y;
    cout<<res<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}