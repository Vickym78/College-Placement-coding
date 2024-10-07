#include <bits/stdc++.h>
using namespace std;

int isprime(int n) {
    if (n <= 1) return 0;  // Correct the condition to include 1 and 0
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;  // Correct the condition to check divisibility
    }
    return 1;  // Return 1 for prime
}

int sumof(int n) {
    int sum = 0; 
    while (n > 0) {
        int k = n % 10;
        sum += k;
        n /= 10;
    }
    return sum;
}

int main() {
    int n1, n2; 
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++) {
        if (isprime(i)) {
            int n = sumof(i);
            if (isprime(n)) cout << i << " ";  // Add space for better output formatting
        }
    }
}
