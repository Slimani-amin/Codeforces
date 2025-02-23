#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {

    int n;cin>>n;
    vector<int> a(n);
    set<int> s;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    for(int i=0;i<n;i++) {
        int t;
        cin>>t;
        if(s.count(t)==0){
            a[i] = *s.begin();
            s.erase(s.begin());
        }
        else {
            a[i] = t;
            s.erase(t);
        }
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}