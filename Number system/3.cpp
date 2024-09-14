#include<bits/stdc++.h>
using namespace std; 

int main(){
    int row1, col1, row2, col2; 
    cin >> row1 >> col1 >> row2 >> col2;

    // Check if the matrices can be multiplied
    if (col1 != row2) {
        cout << "Matrices cannot be multiplied due to incompatible dimensions." << endl;
        return 0;
    }

    int arr[row1][col1]; 
    int brr[row2][col2];

    // Input for the first matrix
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cin >> arr[i][j];
        }
    }

    // Input for the second matrix
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            cin >> brr[i][j];
        }
    }

    // Resultant matrix
    int res[row1][col2];


    // Matrix multiplication logic
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col2; j++){
            res[i][j]=0;
            for(int k = 0; k < col1; k++){ // or k < row2 since col1 == row2
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    // Output the resultant matrix
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col2; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
