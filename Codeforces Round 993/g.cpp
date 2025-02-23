#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n,m,q;
    cin >> n >> m >> q;
    vector<ll>a(n),b(m);
    ll sumA = 0;
    ll sumB = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sumA += a[i];
    }
    for(int i=0;i<m;i++) {
        cin >> b[i];
        sumB += b[i];
    }
    set<ll>A,B;
    for(int i=0;i<n;i++) {
        A.insert(sumA - a[i]);
    }
    for(int i=0;i<m;i++) {
        B.insert(sumB - b[i]);
    }
    while(q--) {
        ll xq;cin >> xq;
        bool found = false;

        for(ll i=1;i*i<=abs(xq) && !found;i++) {
            if(xq % i == 0) {
                if(A.find(i) != A.end() && B.find(xq/i) != B.end()) {
                    cout << "YES\n";
                    found = true;
                }
                else if(A.find(xq/i) != A.end() && B.find(i) != B.end()) {
                    cout << "YES\n";
                    found = true;
                }
                else if(A.find(-i) != A.end() && B.find(-xq/i) != B.end()) {
                    cout << "YES\n";
                    found = true;
                }
                else if(A.find(-xq/i) != A.end() && B.find(-i) != B.end()) {
                    cout << "YES\n";
                    found = true;
                }
            }
                
                
        }
        if(!found) {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        solve();
    
    return 0;
}
