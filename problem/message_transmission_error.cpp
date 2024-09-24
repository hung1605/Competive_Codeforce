#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    for (int length = s.size() / 2 + 1; length < s.size(); length++) {
        if (s.substr(0, length) == s.substr(s.size() - length, length)) {
            cout << "YES\n" << s.substr(0, length);
            return 0;
        }
    }
    cout << "NO";
}
