#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    int n; cin>>n;
    ll ans = 0;
    ll count =1;
    ll rest =9;
    ll k = 11;
    
    for(int i = 1; i <= n; i++) {
        if(i%10 ==0 && (i/10)%9 == 0 && (i/10)%k){
            rest+=9;
            k = k*10;
            k++;
            
        }

        ans+=count;
        count++;
       if(count==rest+1){
        count = 1;
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