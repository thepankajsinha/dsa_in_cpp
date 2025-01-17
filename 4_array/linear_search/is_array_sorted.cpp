// Description: Check if the array is sorted or not.
#include <bits/stdc++.h>
using namespace std;


bool isArraySorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {1,3,4,6,8,10,20};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if(isArraySorted(arr, n)==true){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
}

//Output: Array is sorted

// Approach
//using Linear Search
// Time Complexity: O(n)