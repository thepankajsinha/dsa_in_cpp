// Input: a[] = [1, 5, 9, 10, 15, 20], b[] = [2, 3, 8, 13]
// Output:
// 1 2 3 5 8 9
// 10 13 15 20
// Explanation: After merging two sorted arrays we get 1 2 3 5 8 9 10 13 15 20.

#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();
        
    int i = n - 1;
    int j = 0;
        
    while(i >= 0 && j < m){
        if(a[i] > b[j]){
            swap(a[i], b[j]);
        }
        j++;
        i--;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
        
}

int main() {
    vector<int> a = {3, 5, 8, 10, 15};
    vector<int> b = {1, 2, 4, 6, 9};
    mergeArrays(a, b);
    
    cout << "Array a after merging: ";
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    
    }
    
    cout << "\nArray b after merging: ";
    for(int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
}

// Array a after merging: 1 2 3 4 5 
// Array b after merging: 6 8 9 10 15 

// Time Complexity: O(nlogn)