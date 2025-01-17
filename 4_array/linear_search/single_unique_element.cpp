// Description: Given an array of integers, every element appears twice except for one. Find that single one.
#include <bits/stdc++.h>
using namespace std;


int uniqueElementInArray(int arr[], int n){
    int ans = 0;

    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {1,1,8,3,4,3,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unique Element: " << uniqueElementInArray(arr, n) << endl;
}

//Output: Unique Element: 8


// Approach
// 1. XOR of a number with itself is 0 ex: 1^1 = 0
// 2. XOR of a number with 0 is the number itself ex: 1^0 = 1
// 3. XOR is commutative and associative ex: 1^2^3 = 3^2^1
// 4. XOR of all elements in the array will give the unique element in the array

// Time Complexity: O(n)