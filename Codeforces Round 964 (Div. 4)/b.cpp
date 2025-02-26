#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {

    ll a,b,c,d;cin>>a>>b>>c>>d;

    int ans = 0;
    if(a>c && b>d){
        ans ++;

    }
    if(a==c && b>d){
        ans++;
    }
    if(a>d && b>c){
        ans++;
    }
    if(a==d && b>c){
        ans++;
    }
    if(a>c && b==d){
        ans++;
    }
    if(a>d && b==c){
        ans++;
    }

    cout<<ans*2<<endl;


    
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