#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//===================== Main problem Code starts from here =======================//
void solve(){
        ll n;cin >> n;
        string s;cin >> s;
        ll ans=0;
       for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j+=i) {
        if (s[j-1] == '1') break;
        if (s[j-1] == '0') {
          ans += i;
          s[j-1] = '2';
        }
      }
    }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}