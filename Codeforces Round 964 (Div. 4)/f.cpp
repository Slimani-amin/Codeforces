#include <bits/stdc++.h>
#define ll long long
using namespace std;


void subsequence(ll i, ll a, ll k, vector<int> &v, ll count, ll &ans){


    if(count>a/2){
        ans+=(v.size()-i);
    }

    else{

    for(ll j=i+1;j<v.size()-k;j++){
         if(v[j]!=1){
            subsequence(j, a,k-1,v,count, ans);
         }
         else{
            count++;
            
            subsequence(j, a,k-1,v,count, ans);
           
         }
    }
   

}
}

void solve() {

    ll n,k; cin>>n>>k;
    vector<int> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll ans =0;
    ll count = 0;
    for(ll i=0;i<n-k && count<k/2; i++){
        if(v[i]!=1){
            subsequence(i, k,k-1,v,count, ans);
        }
        else{
            count++;
            subsequence(i, k,k-1,v,count, ans);
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