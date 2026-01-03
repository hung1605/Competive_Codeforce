#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll mid, ll a[], ll k, ll n) {
    ll sum = 0;
    for(int i = n / 2; i < n; i++) {
        if(mid <= a[i]) break;
        sum += mid - a[i];
    }
    return k >= sum;
}

int main() {
    ll n, k; cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll low = a[n / 2], high = a[n / 2] + k;
    ll ans = 0;
    while(low <= high) {
        ll mid = (low + high) / 2;
        bool flag = check(mid, a, k ,n);
        if(flag) {
            low = mid + 1;
            ans = max(ans, mid);
        }
        else high = mid - 1;
    }
    cout << ans;
}
