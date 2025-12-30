#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    long long dp[n][2];
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[1][0] = dp[0][1] + a[1];
    dp[1][1] = dp[0][0] + b[1];
    for(int i = 2; i < n; i++) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 2][1]) + a[i];
        dp[i][1] = max(dp[i - 1][0], dp[i - 2][0]) + b[i];
    }
    cout << max(dp[n - 1][0], dp[n - 1][1]);
}
