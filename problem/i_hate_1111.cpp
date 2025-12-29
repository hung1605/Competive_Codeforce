#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool ans = ((111 * (n % 11)) <= n);
        cout << (ans ? "YES\n" : "NO\n");
    }
}
