#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
        ll n,data;cin >> n;
        set<ll> s;
        for(ll i=0;i<n;i++){
            cin >> data;
            s.insert(data);
        }
        cout << 1 << endl << s.size() << endl;
    return 0;
}