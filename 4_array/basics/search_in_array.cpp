#include <bits/stdc++.h>
using namespace std;

void searchInArray(int arr[], int size, int target){  //T.C - O(n)
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            cout << "Element found at index " << i << endl;
            return;
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 5;
    searchInArray(arr, 5, target);
}

// Output : Element found at index 4