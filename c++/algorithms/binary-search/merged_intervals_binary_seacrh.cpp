#include<bits/stdc++.h>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

vector<pii> merged_intervals(vector<pii> &v) {
    sort(v.begin(), v.end());
    vector<pii> merged;
    merged.pb(v[0]);
    for(int i = 1; i < v.size(); i++) {
        if(v[i].fi <= merged.back().se) 
            merged.back().se = max(v[i].se, merged.back().se);
        else
            merged.pb(v[i]);
    }
    return merged;
}

bool contains_value(pii &p, int x) {
    return x >= p.fi && x <= p.se;
}


int binary_search(vector<pii> &v, int x) {
    int min = 0;
    int max = v.size() - 1;
    while(min <= max) {
        int p = (min + max) / 2;
        if(contains_value(v[p], x)) return p;
        else if(x > v[p].se ) min = p + 1;
        else if(x < v[p].fi) max = p - 1;
    }
    return -1;
}

int main() {
    vector<pii> v;
    v.pb(mp(6,14));
    v.pb(mp(1,8));
    v.pb(mp(16,22));

    for(auto v: v){
        cout << v.fi << " " << v.se << "\n";
    }
    v = merged_intervals(v);

    for(auto v: v){
        cout << v.fi << " " << v.se << "\n";
    }
    int x = 10;
    int r = binary_search(v, x);
    if(r != -1) 
        cout << v[r].se << "\n";
    else
        cout << x << "\n";
}   