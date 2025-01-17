//remove duplicate elements from sorted array in place without using extra array

#include <bits/stdc++.h>
using namespace std;

// Approach 1
// using Set
// Time Complexity: O(nlogn) because insert operation in set takes logn time complexity and we are inserting n elements in set

int removeDuplicateUsingSet(int arr[], int n){
   set <int> st;

   for(int i =0; i<n; i++){
    st.insert(arr[i]);
   }

   int index = 0;
   for(auto it: st){
    arr[index]= it;
    index++;
   }

   int k = st.size(); //number of unique elements
   return k;
    
}

// Approach 2
// using Two Pointers
// Time Complexity: O(n)

int removeDuplicate(int arr[], int n){

    int i = 0;

    for(int j =1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    return i+1; //number of unique elements
}


int main(){
    int arr[] = {1,1,2,2,2,3,3};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = removeDuplicate(arr, n);

    for(int i = 0; i <k; i++){
        cout << arr[i] << " ";
    }
}

//Output: 1 2 3