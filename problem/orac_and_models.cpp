#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n + 1];
        int dp[n + 1];
        int ans = 1;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            dp[i] = 1;
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 2; j <= n / i; j++)
                if(a[j*i]> a[i]) dp[j*i] = max(dp[j*i], dp[i] + 1);
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
}
