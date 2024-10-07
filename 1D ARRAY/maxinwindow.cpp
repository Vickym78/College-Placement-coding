#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    vector<int> res;

    // Iterate over each possible subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int maxi = arr[i];  // Assume the first element is the maximum

        // Find the maximum in the current window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > maxi) {
                maxi = arr[j]; // Update maximum
            }
        }

        // Store the result for the current window
        res.push_back(maxi);
    }

    // Output the result
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}
