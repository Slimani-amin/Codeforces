#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {

    ll k,l1,r1,l2,r2;
    cin>>k>>l1>>r1>>l2>>r2;
    ll ans = 0;
    ll yk=1;
    for(ll yk=1;yk<=1000000000;yk*=k){
        ll l=l1,r=r1;
        ll x1=-1;
        ll x2=LLONG_MAX;
        while (l<=r)
        {
            ll mid=(l+r)/2;
            ll y=yk*mid;
            if(y>=l2 && y<=r2){
                x1=max(mid,x1);
                l=mid+1;
            }
            else if(y<l2){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(x1==-1) continue;
        l=l1,r=r1;
        while (l<=r)
        {
            ll mid=(l+r)/2;
            ll y=yk*mid;
            if(y>=l2 && y<=r2){
                x2=min(mid,x2);
                r=mid-1;
            }
            else if(y>r2){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(x2==LLONG_MAX) continue;
        //cout<<n<<" "<<x1<<" "<<x2<<endl;
        ans+=x1-x2+1;
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