#include <cmath>
#include <cstdio>
#include <iostream>
#include <ostream>

struct point {
    int x, y;
};

int distance(point a, point b) {
    return pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
}

bool check_right_triangle(double a, double b, double c) {
    return (a == b + c) or (b == a + c) or (c == a + b); 
}

int main() {
    // freopen("in.txt", "r", stdin);
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        point points[200005];
        for(int i = 0; i < n; i++) {
            int x, y;
            std::cin >> x >> y;
            points[i] = {x, y};
        }

        int count  = 0;
        for(int a = 0; a < n - 2; a++) {
            for(int b = a + 1; b < n - 1; b++) {
                for(int c = b + 1; c < n; c++) {
                    double ab = distance(points[a], points[b]);
                    double bc = distance(points[b], points[c]);
                    double ac = distance(points[a], points[c]);
                    // std::cout << ab << " " << bc << " " << ac << std::endl;
                    count += (check_right_triangle(ab, bc, ac) ? 1 : 0);
                }
            }
        }
        std::cout << count << std::endl;
    }
}
