#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(vector<int>& arr) {
    int i=0;
        
    for(int j=0; j<arr.size(); j++){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main(){
    vector<int> arr = {1, 0, 2, 0, 3, 0, 4, 5};
    pushZerosToEnd(arr);
    
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    
    }
}

// Output: 1 2 3 4 5 0 0 0

// Time Complexity: O(n)