#include<bits/stdc++.h>
using namespace std;

long long xoor(long long a, long long b, long long r){
    return abs((a^r) - (b^r));
}

int binaryToDecimal(string binary) {
    long long decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') decimal += pow(2, power);
        power++;
    }
    return decimal;
}

void tc(){
    unsigned long long a, b, r;
    cin >> a >> b >> r;
    long long ans = 1e18;
    string bin_a = bitset<64>(a).to_string();
    string bin_b = bitset<64>(b).to_string();
    string bin_r = bitset<64>(r).to_string();
    cout << "r:" + bin_r << endl;
    string x = "";
    auto it = find(bin_r.begin(), bin_r.end(), '1');
    int first_index = (it != bin_r.end()) ? distance(bin_r.begin(), it) : 64;
    cout << "first index = 1:" + first_index << endl;
    int sum = 0;
    for(int i = 0; i < 64; i++){
        string max_bin_i = "" + bin_r[i];
        if(bin_a[i] == bin_b[i] or i < first_index) x += "0";
        else{
            if(i > first_index){
                if(sum > 0) x += "" + bin_a[i];
                else if(sum < 0) x += "" + bin_b[i];
                else x += "0";
            }
            else x += "0";
        }
    }
    cout << "x:" + x << endl;
    cout << xoor(a, b, binaryToDecimal(x)) << endl;
}

int main(){
    int t; cin >> t;
    while (t--) tc();
}