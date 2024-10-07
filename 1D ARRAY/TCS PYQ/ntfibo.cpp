#include<bits/stdc++.h>
using namespace std;

// Efficient Fibonacci calculation using dynamic programming
int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev2 = 0, prev1 = 1, current;
    
    // Calculate Fibonacci numbers iteratively
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main() {
    int n;
    cin >> n;
    int sum = 0;

    // Sum the first n Fibonacci numbers
    for (int i = 0; i < n; i++) {
        sum += fibo(i);  // Calculate the ith Fibonacci number
    }

    cout << sum;
    return 0;
}
