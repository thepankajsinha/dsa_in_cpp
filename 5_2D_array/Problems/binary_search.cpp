//search in row and column wise sorted matrix
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(const vector<int>& row, int x) {
    int left = 0, right = row.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (row[mid] == x) {
            return true;
        } else if (row[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &mat, int x) {
    int row = mat.size();
    int col = mat[0].size();
        
    for(int i=0; i<row; i++){
        if(binarySearch(mat[i], x)){
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    
    int target = 9;
    if(searchMatrix(mat, target)){
        cout << "Element found in the matrix." << endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }
}

//Output: Element found in the matrix.

//Time Complexity: O((row)logn)