#include <bits/stdc++.h>
using namespace std;

int distinct(vector<int>& arr) {
    set <int> st;
    
    for(int i=0; i<arr.size(); i++){
        st.insert(arr[i]);
    }
    return st.size();
}


int main(){
    vector<int> arr = {1, 2, 3, 3, 4, 4, 5, 5, 5};
    cout << "Number of distinct elements: " << distinct(arr) << endl;
}

//Output: Number of distinct elements: 5

// Time Complexity: O(n)
// Space Complexity: O(1)
