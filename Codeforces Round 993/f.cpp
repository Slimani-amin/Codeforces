#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;




void solve() {
    ll k,l1,r1,l2,r2;
    cin>>k>>l1>>r1>>l2>>r2;
    ll ans = 0;
    for(ll x=l1;x<=r1;x++){
        for(ll n=0;pow(k,n)<pow(10,9);n++){
            ll y = x*pow(k,n);
            if(y>=l2 && y<=r2){
                ans++;
            }
            if(y>=r2){
                break;
            }
        }
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