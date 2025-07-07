// Description: Find the second largest element in an array.
#include <bits/stdc++.h>
using namespace std;


int secondLargestElement(int arr[], int n){
    int largest = INT_MIN;

    for(int i=0; i<n; i++){
        largest = max(arr[i], largest);
    }

    int secondLargest = INT_MIN;

    for(int i =0; i<n; i++){
        if(arr[i] == largest){
            
        }
        else{
            secondLargest = max(arr[i], secondLargest);
        }
    }
    return secondLargest;
}

int main(){
    int arr[] = {5, -3, 8, -7, 2, -6, 1, -4, 9, -2};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Second Largest Element: " << secondLargestElement(arr, n) << endl;
}

//Output:
//Second Largest Element: 8


// Approach
// using Linear Search
// Time Complexity: O(n)