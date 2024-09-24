#include<bits/stdc++.h>
using namespace std;

void testcase(){
    int a, b, k; cin >> a >> b >> k;
    set<int> A, B;
    for(int i = 0; i < a; i++){
        int x; cin >> x;
        A.insert(x);
    }
    for(int i = 0; i < b; i++){
        int x; cin >> x;
        B.insert(x);
    }
    
    int cna = 0, cnb = 0;
    for(int i = 1; i <= k; i++){
        if(A.count(i) == 0 and B.count(i) == 0){
            cout << "no" << endl;
            return;
        }
        if(A.count(i) > 0 and B.count(i) == 0){
            cna++;
            if(cna > k / 2) {
                cout << "no" << endl;
                return;}
        }
        if(A.count(i) == 0 and B.count(i) > 0){
            cnb++;
            if(cnb > k / 2) {
                cout << "no" << endl;
                return;}
        }
    }
    cout << "yes" << endl;  
}

int main(){
    int t; cin >> t;
    while (t--) testcase();
}