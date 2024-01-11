#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int alpha[30];
        for (int i = 0; i < 27; i++) alpha[i] = 0;
        for (int i = 0; i < s.length(); i++){
            alpha[s[i] - 'A' + 1]++;
        }
        int cnt = 0;
        for (int i = 1; i <= 26; i++) 
            if (alpha[i] >= i) cnt++;
        cout << cnt << endl;
    }
}
