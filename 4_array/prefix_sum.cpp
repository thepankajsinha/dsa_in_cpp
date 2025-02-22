#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    for(int i=1; i<n; i++) {
        arr[i] = arr[i] + arr[i-1];
    }
}

//Output: 1, 3, 6, 10, 15