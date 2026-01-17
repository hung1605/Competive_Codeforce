#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        set<int> s;
        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            s.insert(x);
        }
        if(s.size() > k) {
            cout << "-1\n";
            continue;
        }
        vector<int> block(s.begin(), s.end());
        while(block.size() < k) block.push_back(1);
        cout << block.size() * n << endl;
        for(int i = 0; i < n; i++) for(int x : block) cout << x << " ";
        cout << endl;
    }
}
