#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

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
