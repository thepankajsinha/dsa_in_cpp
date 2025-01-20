#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& mat) {
    int row = mat.size();
    int col = mat[0].size();
        
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            if(i != j){
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
}

int main(){
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    
    vector<vector<int>> mat(row, vector<int>(col));
    
    cout << "Enter the elements of the matrix: " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> mat[i][j];
        }
    
    }
    
    cout << "Original Matrix: " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    transpose(mat);
    
    cout << "Transpose Matrix: " << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}