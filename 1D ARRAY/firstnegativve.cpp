#include<bits/stdc++.h>
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

    vector<int> res(n - k + 1);  // Corrected size
    queue<int> que;

    // Process the first window of size k
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            que.push(arr[i]);
        }
    }

    // Store the result for the first window
    res[0] = que.empty() ? 0 : que.front();

    // Sliding the window
    for (int i = 1; i < n - k + 1; i++) {
        // Remove the element going out of the window
        if (arr[i - 1] < 0) {
            que.pop();
        }
        // Add the new element coming into the window
        if (arr[i + k - 1] < 0) {
            que.push(arr[i + k - 1]);
        }
        // Store the result for the current window
        res[i] = que.empty() ? 0 : que.front();
    }

    // Output the result
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}
