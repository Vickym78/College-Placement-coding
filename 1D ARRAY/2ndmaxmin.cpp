#include<bits/stdc++.h>
using namespace std; 

void smaxmin(int arr[], int n) {
    int smax = INT_MIN, max = INT_MIN;
    int smin = INT_MAX, min = INT_MAX;

    // Finding max and second max
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            smax = max;   // update smax before max
            max = arr[i]; // update max
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i]; // update smax if arr[i] is between max and smax
        }
    }

    // Finding min and second min
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            smin = min;   // update smin before min
            min = arr[i]; // update min
        } else if (arr[i] < smin && arr[i] != min) {
            smin = arr[i]; // update smin if arr[i] is between min and smin
        }
    }

    // Handle the case where no second max/min exists
    if (smax == INT_MIN) smax = max;
    if (smin == INT_MAX) smin = min;

    cout << "Second Max: " << smax << " and Second Min: " << smin << endl;
}

int main() {
    int n; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    smaxmin(arr, n);
}
