#include<bits/stdc++.h>
using namespace std;

void testcase(){
    int n; cin >> n;
    string s; cin >> s;
    int l = 0, r = 0;
    for(int i = 0;i < n; i++){
        if(s[i] == 'B'){
            l = i; break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'B'){
            r = i;break;
        }
    }
    cout << r-l+1 << endl;
}

int main(){
    int t; cin >> t;
    while (t--) testcase();
}