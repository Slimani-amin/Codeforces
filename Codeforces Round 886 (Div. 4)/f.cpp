#include <bits/stdc++.h>

#define ll long double

using namespace std;




void solve() {
    ll n;cin>>n;
    vector<ll> a(n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<ll> count(n+1);
    ll mx=0;

    for(auto i:mp){
        for(int j=1;j<=n && j*i.first<=n;j++){
        count[i.first*j]+=i.second;
        if(count[i.first*j]>mx){
            mx=count[i.first*j];
        }
        }
    }

    cout<<mx<<endl;

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