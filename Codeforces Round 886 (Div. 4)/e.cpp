#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;




void solve() {
    ll n,c;cin>>n>>c;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll l=1;
    ll r=1e9;
    ll ans=0;
    while(l<=r){
        ll mid=(l+r)/2;
        ll sum=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(sum>c)break;
            ll b=sum;
            sum=sum+(a[i]+2LL*mid)*(a[i]+2LL*mid);
            if(sum<b){
                flag=true;
                break;
            }
        }
        if(sum==c){
            cout<<mid<<endl;
            return;
        }
        if(sum>c){
            r=mid-1;
        }
        else{
            l=mid+1;
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