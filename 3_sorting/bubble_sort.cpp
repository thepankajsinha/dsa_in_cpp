#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
        
    for(int i = 0; i< n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
        
}

int main(){
    vector<int> arr = {5, 4, 3, 2, 1};
    bubbleSort(arr);
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Output: 1 2 3 4 5

// Time Complexity: O(n^2)
// Space Complexity: O(1)