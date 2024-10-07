#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isprime(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; 
    }
    return true; // n is prime
}

int main() {
    int n; 
    cin >> n;  
    for (int i = 0; i < n; i++) { 
        if (isprime(i))
            cout << i << " "; 
    }
    cout << endl;
    return 0;
}