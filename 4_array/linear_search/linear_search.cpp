// Description: Linear Search Algorithm
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int x) {
    int n = arr.size();
        
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2, 3, 4, 10, 40};
    int x = 10;
    int result = search(arr, x);
    (result == -1)? cout<<"Element not found": cout<<"Element found at index "<<result;
    return 0;
}

//Output: Element found at index 3


// Time Complexity: O(n)
 // Space Complexity: O(1)
