#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b,c;cin >> a >> b  >> c;
        if(a+b==c || b+c==a || c+a==b) cout << "YES" << endl;
        else cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}