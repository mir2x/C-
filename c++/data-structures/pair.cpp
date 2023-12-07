#include<bits/stdc++.h>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

int main() {
    vector<pii> v1;
    v1.pb(mp(1,5));
    v1.pb(mp(2,3));
    for(auto v: v1) {
        cout << v.fi << " " << v.se << "\n";
    }
    cout << v1[0].fi << "\n";

    vector<pii> v3 = v1;

    vector<pii> v2[3];
    v2[0].pb(mp(1,3));
    v2[0].pb(mp(3,5));
    v2[1].pb(mp(2,6));
    v2[2].pb(mp(7, 10));

    for(auto v: v2) 
        for(auto p: v) 
            cout << p.fi << " " << p.se << "\n";
}