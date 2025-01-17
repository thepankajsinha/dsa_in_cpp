#include <bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int> &arr) {
    int n = arr.size();
        
    int start = 0;
    int end = n - 1;
        
    while(start<=end){
        if(arr[start]==1 && arr[end]==0){
            swap(arr[start], arr[end]);
        }
        else if(arr[start]==0){
            start++;
        }
        else if(arr[end]==1){
            end--;
        }
    }
}


int main(){
    vector<int> arr = {0, 1, 0, 1, 0, 1, 0, 1};
    segregate0and1(arr);
    for (int i : arr){
        cout << i << " ";
    }
}

//output : 0 0 0 0 1 1 1 1

//Time complexity: O(n)
//Space complexity: O(1)