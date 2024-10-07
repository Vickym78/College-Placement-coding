#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str); // Input a space-separated string of numbers
    stringstream ss(str);
    vector<int> arr;
    int number;
    
    // Reading the space-separated numbers into the array
    while (ss >> number) {
        arr.push_back(number);
    }
    
    int k;
    cin >> k; // Input the target sum
    int count = 0;
   /* vector<vector<int>> v; // To store subarrays with sum == k

    // Find all subarrays with sum == k
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if (sum == k) {
                count++;
                // Store the subarray from index i to j
                v.push_back(vector<int>(arr.begin() + i, arr.begin() + j + 1));
            }
        }
    }

    // Output the count of subarrays
    cout << count << endl;

    // Uncomment if you want to print the subarrays
    /*
    for (const auto& subarray : v) {
        for (int num : subarray) {
            cout << num << " ";
        }
        cout << endl;
    }
    */

   map<int,int>mpp;
   mpp[0] =1;
   int presum = 0 ;
   for(int i = 0;i<arr.size();i++){
    presum+=arr[i];
    int remove =  presum- k;
     count +=mpp[remove];
    mpp[ presum]++;
   } 
   cout<<count;

    return 0;
}
