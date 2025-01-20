#include <bits/stdc++.h>
using namespace std;

void Addition(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
    int row = matrixA.size();
    int col = matrixA[0].size();
        
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            matrixA[i][j] = matrixA[i][j] + matrixB[i][j]; 
        }
    }
}

int main(){
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    
    vector<vector<int>> matrixA(row, vector<int>(col));
    vector<vector<int>> matrixB(row, vector<int>(col));
    
    cout << "Enter elements of matrix A:" << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrixA[i][j];
        }
    }
    
    cout << "Enter elements of matrix B:" << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrixB[i][j];
        }
    }
    
    Addition(matrixA, matrixB);
    
    cout << "Addition of matrices A and B:" << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
}