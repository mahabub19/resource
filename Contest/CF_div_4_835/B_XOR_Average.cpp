#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        if(n&1)
            for(int i=1;i<=n;i++) cout << 3  << " ";
        else{
            cout << 1 << " " << 3 << " ";
            for(int i=2;i<n;i++) cout << 2 << " ";
        }
        cout << endl;
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}