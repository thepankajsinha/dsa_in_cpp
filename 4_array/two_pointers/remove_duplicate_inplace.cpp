// Input: arr = [1, 2, 4]
// Output: [1, 2, 4]
// Explation:  As the array does not contain any duplicates so you should return 3.

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr) {
    int i = 0;
    int j = 0;
        
    for(int j=0; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main(){
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = removeDuplicates(arr);
    
    cout << "Array after removing duplicates: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Output: Array after removing duplicates: 1 2 3 4 