#include <cmath>
#include <iostream>
#include <ostream>
#include <ctime>
bool is_prime[100000];

void sang_nguyen_to() {
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= 100000; i++) {
        is_prime[i] = true;
    }
    for(int i = 2; i <= (int)sqrt(100000); i++) {
        for(int j = i * i; j <= 100000; j += i) {
            is_prime[j] = false;
        }
    }
}

int main() {
    sang_nguyen_to();
    std::srand(static_cast<unsigned>(std::time(0)));
    int x = std::rand() % 50;
    std::cout << x;
    std::cout << (is_prime[x] ? " la so nguyen to" : " khong la so nguyen to"); 
}
