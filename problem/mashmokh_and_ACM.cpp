#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
vector<vector<long long>> dp(2001, vector<long long> (2001, 0));

vector<int> uoc_list(int n) {
    vector<int> uoc;
    for(int i = 1; i <= sqrt(n); i++) if(n % i == 0) {
        uoc.push_back(i);
        if(i * i != n) uoc.push_back(n/i);
    } 
    return uoc;
}

int main() {
    int n, k;
    cin >> n >> k;
    map<int, vector<int>> uoc;
    for(int i = 1; i <= n; i++) uoc[i] = uoc_list(i);
    for(int i = 1; i <= n; i++) dp[i][1] = 1;
    for(int i = 1; i <= k; i++) dp[1][i] = 1;
    for(int i = 2; i <= n; i++) {
        for(int j = 2; j <= k; j++) {
            for(int x : uoc[i]) {
                dp[i][j] += dp[x][j - 1];
                dp[i][j] %= mod;
            }
        }
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += dp[i][k];  
        ans %= mod;
    } 
    cout << ans;
}
