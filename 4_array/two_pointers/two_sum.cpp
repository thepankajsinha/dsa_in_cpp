// Problem: check if there are two elements in the array that sum up to the target
#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& arr, int target) {
    int n = arr.size();
        
    int start = 0;
    int end = n-1;
        
    sort(arr.begin(), arr.end());
        
    while(start < end){
        if(arr[start] + arr[end] == target){
            return true;
        }
        else if(arr[start] + arr[end] > target){
            end--;
        }
        else{
            start++;
        }
    }
        
    return false;
        
}


int main(){
    vector<int> a = {1,4,45,6,10,8};

    int target = 16;

    cout << twoSum(a, target) << endl;

}

//Output: 1

//Approach: Two pointers
//Time Complexity: O(nlogn)