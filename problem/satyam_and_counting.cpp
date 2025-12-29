#include <iostream>
#include <ostream>

struct point {
    int x, y;
};

point points[200005];
int x_count[200005], y_count[200005];

int main() {
    freopen("in.txt", "r", stdin);
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        for(int i = 0; i < n; i++) {
            std::cin >> points[i].x >> points[i].y;
            x_count[points[i].x] ++;
            y_count[points[i].y] ++;
        } 

        int count = 0;
        for(int i = 0; i < n; i++) {
            count += (x_count[points[i].x] - 1) * (y_count[points[i].y - 1]);
        }
        std::cout << count << std::endl;
    }
}
