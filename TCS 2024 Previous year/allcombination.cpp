#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string input;
    getline(cin, input); // Read the entire line of input
    istringstream iss(input);
    
    int n;
    iss >> n; // Read the number of elements expected in the input
    vector<int> arr;

    int temp;
    while (iss >> temp) {
        arr.push_back(temp); // Fill the array
    }

    // Print all subarrays using O(n^2) complexity
    for (int i = 0; i < arr.size(); ++i) { // Starting index of subarray
        for (int j = i; j < arr.size(); ++j) { // Ending index of subarray
            for (int k = i; k <= j; ++k) { // Print elements from index i to j
                cout << arr[k]; // Print current element
                if (k != j) {
                    cout << " "; // Space between elements in the same subarray
                }
            }
            if (j != arr.size() - 1 || i != arr.size() - 1) {
                cout << ","; // Comma after each subarray except the last one
            }
        }
    }

    cout << endl; // New line after all subarrays have been printed
    return 0;
}
