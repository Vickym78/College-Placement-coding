#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // The array should have size n-1
    int k = n - 1;
    vector<int> arr(k);

    // Input n-1 numbers
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the first n natural numbers
    int sum = (n * (n + 1)) / 2;
    int x = 0;

    // Sum up the array
    for (int i = 0; i < k; i++) {
        x += arr[i];
    }

    // Output the missing number
    cout << sum - x << endl;

    return 0;
}
