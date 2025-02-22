#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    for(int i=n-2; i>=0; i--) {
        arr[i] = arr[i] + arr[i+1];
    }
}

//Output: 15, 14, 12, 9, 5