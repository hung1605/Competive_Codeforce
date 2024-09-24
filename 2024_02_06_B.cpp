#include<bits/stdc++.h>
using namespace std;

void testcase(){
    int n; cin >> n;

    vector<int> adj[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        adj[x].push_back(i);
    }
    vector<char> res(n);
    for(auto i : adj){
        char c = 'a';
        for(auto x : i){
            res[x] = c++;
        }
    }
    for(auto i : res){
        cout << i;
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while (t--) testcase();
}