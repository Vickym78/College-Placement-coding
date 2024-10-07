#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is an Armstrong number
bool checkarm(int n) {
    int sum = 0;
    int t = n;
    while (n > 0) {
        int k = n % 10;
        sum += (k * k * k);  // Sum of cubes of digits
        n /= 10;
    }
    return sum == t;  // Return true if Armstrong, else false
}

int main() {
    string s; 
    getline(cin, s);  // Input a string of comma-separated numbers
    vector<string> arr;
    
    // Split the string by commas
    size_t pos = 0;
    while ((pos = s.find(',')) != string::npos) {
        arr.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    arr.push_back(s);  // Push the last element after the final comma

    bool flag = false;

    // Check each number in the array for Armstrong condition
    for (int i = 0; i < arr.size(); i++) {
        int n = stoi(arr[i]);  // Convert string to integer
        if (checkarm(n)) {
            cout << arr[i] << " ";  // Print the Armstrong number
            flag = true;
        }
    }

    // Output the flag (true if at least one Armstrong number was found)
    cout << flag;

    return 0;
}
