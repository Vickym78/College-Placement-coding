#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    // Remove the square brackets
    str = str.substr(1, str.size() - 2);

    vector<int> arr;
    stringstream ss(str);
    string temp;

    while (getline(ss, temp, ',')) {
        arr.push_back(stoi(temp));
    }

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
