#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {    
    int t; cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        int a[n];
        map<ll, ll> mp;
        bool all_divide_able = true;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % k != 0) all_divide_able = false;
            mp[a[i] % k] ++;
        }
        ll max_fre = 0, min_mod = k - 1; 
        for(auto p : mp) {
            if(max_fre < p.second and p.first) {
                max_fre = p.second;
                min_mod = p.first;
            }
            else if(max_fre == p.second and p.first){
                min_mod = min(min_mod, p.first);
            }
        }
        ll res = 0;
        res = k * max(max_fre - 1, 0ll);
        ll last_row = k - min_mod + 1;
        res += k - min_mod + 1;
        if(all_divide_able) res = 0;
        cout << res << endl;
    }
}
