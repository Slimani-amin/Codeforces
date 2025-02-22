#include <bits/stdc++.h>

using namespace std;




void solve() {
    string s;cin>>s;
    int n=s.size();
    int ans=0;
    int cnt=0;
    for(int i=0;i<n-1;i++) {
        if(s[i]=='1' && s[i+1]=='0') {
            ans++;
        }
        if(s[i]=='0' && s[i+1]=='1') {
            cnt++;
        }

    }
    if(ans==0){
        cout<<1<<endl;
    }
    else{
        if(cnt<2) {
            cout<<ans+1<<endl;
        }
        else{
            cout<<ans+cnt<<endl;
        }
    }
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