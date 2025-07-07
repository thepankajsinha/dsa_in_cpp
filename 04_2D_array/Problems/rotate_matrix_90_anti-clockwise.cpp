#include <bits/stdc++.h>
using namespace std;

void rotateMatrix90Anticlockwise(vector<vector<int>>& mat) {
        
    int row = mat.size();
    int col = mat[0].size();
        
    //transpose the given matrix
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
        
    //reverse col
    reverse(mat.begin(), mat.end());
}

int main(){
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
    rotateMatrix90Anticlockwise(mat);
    
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[0].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}