#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int key){  //T.C - O(logn)
    int start = 0;
    int end = v.size()-1;
    
    while (start <= end){
        int mid = (start + end)/2;

        if (v[mid]==key){
            return mid;
        }
        else if (v[mid] < key){
            start = mid + 1;
        }
        else if (v[mid] > key){
            end = mid - 1;
        }  
    }
    return -1;    
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    cout << binarySearch(v, key) << endl;
}

// Output: 4

// Time Complexity: O(log(n))