#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), [](auto a, auto b){
        if(a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });
    vector<int> res(n);
    res[0] = v[0].second;
    for(int i = 1; i < n; i++) {
        res[i] = v[i].first;
        if(v[i].second >= res[i - 1]) res[i] = v[i].second;
    }
    cout << res[n - 1];
}
