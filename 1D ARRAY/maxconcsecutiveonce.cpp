#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize variables
    int current = 0, maxi = 0;

    for (int i = 0; i < n; i++) {
        
        if (arr[i] == 1) {
            current++;
            maxi = max(current, maxi);  
        } else {
            current = 0;  // Reset count if a 0 is encountered
        }
    }

    cout << maxi;

    return 0;
}
