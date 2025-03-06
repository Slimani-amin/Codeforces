#include <bits/stdc++.h>


using namespace std;


int a[8005];

void solve() {
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    if(n<3){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        int l=0;
        int r=1;
        bool f=false;
        int cnt=a[0]+a[1];
        while(l<r && r<i){
            if(cnt==a[i]){
                f=true;
                break;
            }
            if(cnt<a[i]){
                r++;
                if(r<i)cnt+=a[r];
            }
            else{
                cnt-=a[l];
                l++;
            }
            if(l==r && r<i){
                r++;
                if(r<i)cnt+=a[r];
            }
        }
        if(f){
            ans++;
            continue;
        }
        l=i+1;
        r=i+2;
        cnt=a[i+1]+a[i+2];
        while(l<r && r<n){
            if(cnt==a[i]){
                f=true;
                break;
            }
            if(cnt<a[i]){
                r++;
                if(r<n)cnt+=a[r];
            }
            else{
                cnt-=a[l];
                l++;
            }
            if(l==r && r<n){
                r++;
                if(r<n)cnt+=a[r];
            }
        }
        if(f)ans++;
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