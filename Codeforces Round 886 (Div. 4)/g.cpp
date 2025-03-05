#include <bits/stdc++.h>

#define ll long long

using namespace std;




void solve() {
    map<pair<ll,ll>,ll>mp;
    ll n;cin>>n;
    vector<pair<ll,ll>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        mp[{a[i].first,INT_MIN}]++;
        mp[{0,a[i].second}]++;
        mp[{1,a[i].second-a[i].first}]++;
        mp[{-1,a[i].second+a[i].first}]++;
    }
    ll ans=0;
    for(auto x:mp){
        ans+=x.second*(x.second-1);
    }
    cout<<ans<<endl;
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