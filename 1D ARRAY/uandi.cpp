#include<bits/stdc++.h>
using namespace std; 

// Function to find the union of two arrays
void findunion(vector<int> &arr1, vector<int> &arr2) {
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    vector<int> ans;

    int i = 0, j = 0;
    
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            ans.push_back(arr2[j]);
            j++;
        } else {
            ans.push_back(arr1[i]);
            i++; j++;
        }
    }

    // Insert remaining elements from arr1
    while (i < arr1.size()) {
        ans.push_back(arr1[i]);
        i++;
    }

    // Insert remaining elements from arr2
    while (j < arr2.size()) {
        ans.push_back(arr2[j]);
        j++;
    }

    // Print the result for union
    cout << "Union: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

// Function to find the intersection of two arrays
void findintersection(vector<int> arr1, vector<int> arr2) {
    vector<int> ans; 
    
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++; j++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            i++;
        }
    }

    // Print the result for intersection
    cout << "Intersection: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr1(n), arr2(m); 
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    findunion(arr1, arr2);
    findintersection(arr1, arr2);
}
