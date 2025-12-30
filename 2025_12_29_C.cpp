#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    int a[n + 1], b[n + 1];
    int pos_in_b[n + 1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        cin >> b[i];   
        pos_in_b[b[i]] = i;
    }
    int ans = 0;
    map<int, int> votes;
    for(int i = 0; i < n; i ++) {
        int val = a[i];
        int shiff_needed = (pos_in_b[val] - i + n) % n;
        votes[shiff_needed] ++;
        ans = max(ans, votes[shiff_needed]);
    }
    cout << ans << endl;
}
