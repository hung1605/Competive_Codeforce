#include<bits/stdc++.h>
using namespace std;

void testcase(){
    int n; cin >> n;
    int a[n];
    for(auto&i:a) cin >> i;
    /**
     * @brief Represents the next element index in a sequence.
     * 
     * The `nxt` vector stores the index of the next element in a sequence.
     * If there is no next element, the value is set to -1.
     */
    vector<int> nxt(n,1e9);
    map<int,int> mp;
    for(int i = n-2; i >= 0; i--){
        if(a[i] != a[i + 1]){
            nxt[i] = i + 1;
        }
        else{
            nxt[i] = nxt[i + 1];
        }
    }
    int q; cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--; r--;
        // while(nxt[l] <= r and nxt[l] != -1){
        //     l = nxt[l];
        // }
        if(nxt[l] <= r) cout << l + 1 << " " << nxt[l] + 1 << endl;
        else cout << -1 << " " << -1 << endl;
    }
    
}

int main(){
    int t; cin >> t;
    while (t--) testcase();
}