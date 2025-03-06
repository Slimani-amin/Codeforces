#include <bits/stdc++.h>

#define ll long double

using namespace std;




void solve() {
    ll n,k;cin>>n>>k;
    ll ans=k;
    while(k>0.0001){
        k/=n;
        ans+=k;
    }
    cout<<(int)floor(ans)<<endl;
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