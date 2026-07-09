#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >>n;
    //wrong on same freq like 2 2 2 2 there may have two numbers which have same freq
    // vector<int>b(n);
    // for(auto &it:b)cin>>it;
    // unordered_set<int>st;
    // for(auto &it:b)st.insert(it);
    // int sum=0;
    // for(auto &it:st)sum+=it;
    // if(sum>n){
    //     cout<<-1<<endl;
    //     return;
    // }
    // int a=1;
    // unordered_map<int,int>mp;
    // for(auto &it:st){
    //     mp[it]=a;
    //     a++;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<mp[b[i]];
    //     if(i!=n-1)cout<<" ";
    // }
    // cout<<endl;
    vector<int> b(n,0);
    unordered_map<int,int> mp;
    vector<pair<int,int>> temp;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        temp.push_back({b[i], i});
        mp[b[i]]++;
    }
    for(auto &it : mp) {
        if(it.second % it.first != 0) {
            cout << -1 << endl;
            return;
        }
    }
    vector<int> res(n,0); 
    int c = 1; 
    sort(temp.begin(), temp.end()); 
    for(int i = 0; i < n;) { 
        int val = temp[i].first;
        while(i < n && val > 0) { 
            int idx = temp[i].second;
            res[idx] = c; 
            i++;
            val--;
        }
        c++;
    }
    for(auto &it : res) cout << it << " ";
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}