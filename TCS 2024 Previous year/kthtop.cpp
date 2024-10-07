#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // Read the entire input line

    stringstream ss(input);
    vector<pair<int, string>> students;

    // Parse the input
    while (ss) {
        int marks;
        string name;
        ss >> marks >> name;
        if (ss) { // Ensure valid input is parsed
            students.push_back({marks, name});
        }
    }

    // Sort the students based on marks in descending order
    sort(students.rbegin(), students.rend());

    // Print the top 3 students (or less if fewer than 3)
    int count = 0;
    for (auto &student : students) {
        if (count < 3) {
            cout << student.second << " ";
            count++;
        } else {
            break;
        }
    }

    return 0;
}
