#include<bits/stdc++.h>
using namespace std;

void tc(){
    int n; cin >> n;
    pair<int,int> pairs[n];
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        pairs[i].first = tmp;
    }
    for(int i = 0; i < n; i++){
        cin >> tmp;
        pairs[i].second = tmp;
    }
    sort(pairs, pairs + n, [](pair<int, int> a, pair<int, int> b){
        return a.first < b.first;
    });
    for(auto i : pairs) cout << i.first << " ";
    cout << endl;
    for(auto i : pairs) cout << i.second << " ";
    cout << endl;    
}

int main(){
    int t; cin >> t;
    while (t--) tc();
}