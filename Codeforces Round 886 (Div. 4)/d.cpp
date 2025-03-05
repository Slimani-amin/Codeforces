#include <bits/stdc++.h>

#define ll long long

using namespace std;




void solve() {
    ll n, k;cin>>n>>k;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin>>a[i];
    sort(a.begin(), a.end());
    vector<ll> c;
    ll count = 1;
    for (int i = 1; i < n; ++i) {
        if(a[i]-a[i-1]<=k){
            count++;
        }
        else{
            c.push_back(count);
            count = 1;
        }

    }
    c.push_back(count);
    sort(c.begin(), c.end());
    c.pop_back();
    ll ans = 0;
    for (int i = 0; i < c.size(); ++i) {
        ans += c[i];
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