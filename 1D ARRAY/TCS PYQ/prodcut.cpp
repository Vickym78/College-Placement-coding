#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<string> val(n); 
    vector<string> product(n); // Products
    vector<double> unitcost(n); // Unit costs
    vector<int> quant(n); // Quantities

    // Reading input lines
    for (int i = 0; i < n; i++) {
        getline(cin, val[i]);
    }

    // Parsing each line and extracting product, unit cost, and quantity
    for (int i = 0; i < n; i++) {
        stringstream ss(val[i]);
        string temp;

        // Extract product name
        getline(ss, product[i], ',');

        // Extract unit cost as double
        getline(ss, temp, ',');
        unitcost[i] = stod(temp);

        // Extract quantity as integer
        getline(ss, temp, ',');
        quant[i] = stoi(temp);
    }

    // Now, calculating total sale, average sale, and finding the best-selling product
    double total_sale = 0;
    int max_sale = 0;
    int best_product_index = -1;

    for (int i = 0; i < n; i++) {
        total_sale += unitcost[i] * quant[i];
        if (unitcost[i] * quant[i] > max_sale) {
            max_sale = unitcost[i] * quant[i];
            best_product_index = i;
        }
    }

    cout << "Total Sale: " << total_sale << endl;

    // Average sale calculation
    int total_quant = accumulate(quant.begin(), quant.end(), 0);
    double avg_sale = total_sale / total_quant;
    cout << "Average Sale per unit: " << avg_sale << endl;

    // Best-selling product
    cout << "Best-selling product: " << product[best_product_index] << endl;

    return 0;
}
