#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& mat) {
    int row = mat.size();
    int col = mat[0].size();
        
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
}

int main(){
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(mat);
    
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[0].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

//Output:
// 1 4 7 
// 2 5 8 
// 3 6 9 

// Time Complexity: O(n^2)