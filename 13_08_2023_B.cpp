#include <bits/stdc++.h>
using namespace std;

void testcase(){
    string s; cin >> s;
    int n; cin >> n;
    string W[n];
    for(int i = 0; i < n; i++)
        cin >> W[i];
    int res = 0;
    for(string word : W){
        int i = 0, j = 0;
        int cnt = 0;
        while(i < s.size() and j < word.size()){
            if(s[i] == word[j]){
                cnt++;
                i++;
                j++;
            }
            else i++;
        }
        if(cnt >= word.size()) res++;
    }
    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--) testcase();
}