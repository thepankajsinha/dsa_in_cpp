//Rotate an array by k places to the left using extra space 
#include <bits/stdc++.h>
using namespace std;


void leftRotateByKPlaces(int arr[], int n, int d){
    
        d = d % n;
        
        if(n==0 || d == 0 || d % n == 0) return;
        
        
        int temp[d];
        
        for(int i =0; i<d; i++ ){
            temp[i] = arr[i];
        }
        
        for(int i = d; i<n; i++){
            arr[i-d] = arr[i];
        }
        
        int index = 0;
        
        for(int i = n-d; i <n ; i++){
            arr[i] = temp[index];
            index++;
        }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int d = 2;

    int n = sizeof(arr)/sizeof(arr[0]);

    leftRotateByKPlaces(arr, n, d);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//Output: 3 4 5 1 2

//approach
//Time Complexity: O(n)