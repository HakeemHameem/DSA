#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool canBeSumOfTwoPrimes(int n) {
    // Check if `n` can be written as sum of two primes
    for (int i = 2; i <= n / 2; i++) { // Loop only till `n/2` to avoid redundant checks
        if (isPrime(i) && isPrime(n - i)) {
            return true; // If found, return true
        }
    }
    return false; // No such pair found
}

int main() {
    int n = 74;

    if (canBeSumOfTwoPrimes(n)) {
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }

    return 0;
}
