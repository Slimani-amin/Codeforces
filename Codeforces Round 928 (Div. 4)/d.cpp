#include <bits/stdc++.h>
#define ll long long

using namespace std;




void solve() {
  ll n; cin>>n;
  ll ans =n;
   map<int, int> m;

   
  for(ll i = 0; i < n; i++){
    int x;cin>>x;
    if(m[2147483647 ^ x ]==0){
        m[x]++;
      
    }
    else{
        ans--;
        m[2147483647 ^ x]--;

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