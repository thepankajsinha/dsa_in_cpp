// Description: Linear Search Algorithm
#include <bits/stdc++.h>
using namespace std;


int linearSearch(int arr[], int n, int target){
    for(int i =0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int arr[] = {5, -3, 8, -7, 2, -6, 1, -4, 9, -2};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 10;

    if(linearSearch(arr, n, target) == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at index: " << linearSearch(arr, n, target) << endl;
    }
}

//Output: Element not found

//Linear Search
// Time Complexity: O(n)