#include <bits/stdc++.h>
#define ll long double
using namespace std;




void solve() {
    int n,k,q;cin>>n>>k>>q;
    vector<ll> a(k+1);
    vector<ll> b(k+1);
    for(int i=1;i<=k;i++) {
        cin>>a[i];
    }
    for(int i=1;i<=k;i++) {
        cin>>b[i];
    }
    while(q--) {
        ll d;cin>>d;
        if(d==0){
            cout<<0<<" ";
            continue;
        }
        auto it=lower_bound(a.begin(),a.end(),d);
        if(a[it-a.begin()]==d) {
            cout<<fixed<<setprecision(0)<<(unsigned int)b[it-a.begin()]<<" ";
            continue;
        }
        it--;
        int id=it-a.begin();
        if(id==k) {
            cout<<b[k]<<" "; 
        }
        else{
            ll v=((ll)(a[id+1]-a[id]))/((ll)(b[id+1]-b[id]));
            cout<<fixed<<setprecision(0)<<(unsigned int)(((ll)b[id]+((ll)(d-a[id])*((ll)(((ll)(b[id+1]-b[id])))))/((ll)(a[id+1]-a[id]))))<<" ";    
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--) {
        solve();cout<<endl;
    }
    return 0;
}