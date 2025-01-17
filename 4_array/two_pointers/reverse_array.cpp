#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr) {
    int n = arr.size();
        
    int start = 0;
    int end = n - 1;
        
    while(start <= end){
        swap(arr[start], arr[end]);
            
        start++;
        end--;
    }
}

int main(){
    vector<int> arr = {3, 5, 2, 8, 7, 1, 6, 9, 4};
    reverseArray(arr);
    
    for (int i : arr){
        cout << i << " ";
    }
    return 0;
}

//Output: 4 9 6 1 7 8 2 5 3 


// Time Complexity: O(n)
//Space Complexity: O(1)