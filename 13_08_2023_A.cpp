#include <bits/stdc++.h>
using namespace std;

long long a[200005], sum[200005];
set<long long> s;

void testcase(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main(){
    a[1] = 2; sum[1] = 2;
    s.insert(2);
    for(int i = 2; i <= 2*100000; i++){
        for(long long j = 1; j <= 100000; j++){
            long long temp = (i+1) * (sum[i-1]/(i + 1)+j) - sum[i - 1];
            if(s.count(temp) == 0 and temp > 0){
                a[i] = temp;
                s.insert(a[i]);
                break;
            }
        }
        sum[i] = sum[i - 1] + a[i];
    }
    int t; cin >> t;
    while(t--) testcase();
}