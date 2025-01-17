//Reverse the array 
#include <bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    int arr[] = {5, -3, 8, -7, 2, -6, 1, -4, 9, -2};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr, n);
    
    for(int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
}

//Output: -2 9 -4 1 -6 2 -7 8 -3 5

// Approach
//using two pointers
// Time Complexity: O(n)