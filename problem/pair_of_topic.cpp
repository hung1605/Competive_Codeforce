#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long a[n], b[n], c[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) c[i] = a[i] - b[i];
    sort(c, c + n);
    long long ans = 0;
    for(int i = 0; i < n; i ++) {
        if(c[i] > 0) ans += n - i - 1;
        else {
            auto ptr = lower_bound(c + i, c + n, -c[i] + 1);
            if(ptr != c + n) {
                long long index = ptr - c;
                ans += n - index;
            }
        }
    }
    cout << ans;
}
