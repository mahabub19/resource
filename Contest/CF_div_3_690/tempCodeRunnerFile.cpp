#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        string s;cin >> s;
        ll sum=n;
        for(ll i=0;i<s.size()-1;i++){
            if(s[i]=='1' && s[i+1]=='0'){
                 sum++;
                 i++;
            }
        }
        ll ct=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0' && s[i+1]=='1'){
                 ct=i+1;
            }
        }
        if(ct!=n-1 && ct!=0 ) sum++;
        sum+=ct;
        cout << sum;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}