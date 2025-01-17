//Rotate an array by 1 place to the left 
#include <bits/stdc++.h>
using namespace std;


void leftRotateByOne(int arr[], int n){
    int temp = arr[0];

    for(int i = 0; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    leftRotateByOne(arr, n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//Output: 2 3 4 5 1


//approach
//using Linear Search
//Time Complexity: O(n)