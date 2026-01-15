#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, string> mp;
    int a[4] = {2, 3, 5, 7};
    for(int i = 0; i < 4; i++) mp[a[i]] = to_string(a[i]);
    mp[4] = "322";
    mp[6] = "53";
    mp[8] = "7222";
    mp[9] = "7332";
    vector<int> d(10);
    for(int i = 0; i < n; i++) {
        string tmp = mp[s[i] - '0'];
        for(int j = 0; j < tmp.length(); j++) d[tmp[j] - '0'] ++;
    }
    for(int i = 9; i > 1; i--) if(d[i]) {
        for(int j = 0; j < d[i]; j++) cout << i;
    }
}
