//diagonal sum for square matrix
#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int diagonalSum =0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                diagonalSum = diagonalSum + mat[i][j];
            }
            if(i+j == n-1){
                diagonalSum = diagonalSum + mat[i][j];
            }
        }
    }

    if(n % 2 ==0){
        return diagonalSum;
    }
    else{
        return diagonalSum - mat[n/2][n/2];
    }
}

int main(){
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << diagonalSum(mat) << endl;
}

//Output: 25

//Time complexity = O(n^2)