// Description: Move all zeros to the end of the array without changing the order of non-zero elements.

#include <bits/stdc++.h>
using namespace std;


void moveZeros(int arr[], int n){
     int i = 0;
        for(int j = 0; j<n; j++){
            if(arr[j] != 0){
                swap(arr[i], arr[j]);
                i++;
            }
        }   
}

int main(){
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    moveZeros(arr, n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//Output: 1 9 8 4 2 7 6 9 0 0 0 0 0

//Approach:
//Two pointers i and j are used. i points to the first zero element and j points to the first non-zero element.

// Time Complexity: O(n)