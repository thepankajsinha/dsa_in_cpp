#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();
        
    for(int i = 0; i<n-1; i++){
        int minIdx = i;
            
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }

}
int main(){
    vector<int> arr = {10, 20, 5, 8, 2, 1};
    selectionSort(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Output: 1 2 5 8 10 20

// Time Complexity: O(n^2)
// Space Complexity: O(1)