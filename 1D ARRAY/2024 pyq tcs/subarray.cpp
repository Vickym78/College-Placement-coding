#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    int val;

    while (cin >> val) {
        arr.push_back(val);
        if (cin.peek() == '\n') break; // Stop when Enter is pressed
    }

    // Print the array
    cout << "Array elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Input the target sum
    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    vector<vector<int>> subarrays; // To store subarrays that sum to target

    // Find all subarrays that sum to target
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0; 
        for (int j = i; j < arr.size(); j++) { // Use j to iterate correctly
            sum += arr[j];
            if (sum == target) {
                // Store the subarray from index i to j
                subarrays.push_back(vector<int>(arr.begin() + i, arr.begin() + j + 1));
            }
        }
    }

    // Print the found subarrays
    cout << "Subarrays that sum to " << target << ":\n";
    for (const auto& subarray : subarrays) {
        for (auto num : subarray) {
            cout << num << " ";
        }
        cout << endl; // New line for each subarray
    }

    return 0;
}
