#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m;cin>>n>>m;
    ll d = n-1;
    ll count = 1;
    vector<ll> ans;
    bool place;
    while(count<=n){
       if(ans.size()<2){
        ans.push_back(count);
        count++;
       }
       else{
        place = false;
        
        for(ll i=0;i<ans.size()-1 && !place;i++){
            if(gcd(ans[i], count)!=m && gcd(ans[i+1], count)!=m && (ans[i]+count)%m!=0 && (ans[i+1]+count)%m!=0){
                ans.insert(ans.begin()+i+1,count);
                count++;
                place = true;
                
            }

        }
        if(!place){
            ans.push_back(count++);
        }
       }
    }
    if(gcd(ans[n-1], ans[n-2])!=m && (ans[n-1]+ans[n-2])%m!=0){
    for(ll num : ans){
        cout<<num<<" ";

    }
    }
    else{
        cout<<-1;
    }
    cout<<endl;


    
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