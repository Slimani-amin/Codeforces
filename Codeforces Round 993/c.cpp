#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll m,a,b,c;cin>>m>>a>>b>>c;
    ll ans = 0;
    if(m-a>=0){
        ans+=a;
        ans+=min(c,m-a);
        c -= min(c,m-a);
    }
    else{
        ans+=m;
    }
    if(m-b>=0){
        ans+=b;
        ans+=min(c,m-b);
    }
    else{
        ans+=m;
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