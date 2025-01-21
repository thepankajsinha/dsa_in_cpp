#include <bits/stdc++.h>
using namespace std;

//given matrix -> inplace transpose -> rowwise reverse the matrix
void rotateMatrix90Clockwise(vector<vector<int> >& mat) {
    // Your code goes here
    
    int row = mat.size();
    int col = mat[0].size();
    
    //transpose the matrix
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    
    //reverse each row
    for(int i=0; i<row; i++){
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main(){
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateMatrix90Clockwise(mat);
    
    for(auto row : mat){
        for(int num : row){
            cout << num << " ";
        }
        cout << endl;
    }
}

//Output:
// 7 4 1 
// 8 5 2 
// 9 6 3 

//Time complexity - O(n^2)