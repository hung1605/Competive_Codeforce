#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> List[200005];

void dijikstra(){
    
}

int main(){
    int V,E;
    cin >> V >> E;
    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w;
        List[u].push_back({v,w});
    }
}