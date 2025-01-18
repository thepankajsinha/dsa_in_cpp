// Description: Union of 2 sorted arrays
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {

    set <int> st;
        
    for(int i=0; i<a.size(); i++){
        st.insert(a[i]);
    }
        
    for(int i=0; i<b.size(); i++){
        st.insert(b[i]);
    }
        
    vector<int> ans(st.size());
        
        
    int index = 0;
    for(auto it: st){
        ans[index] = it;
        index++;
    }
        
    return ans;
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};

    vector<int> b = {1, 2, 3};

    vector<int> ans = findUnion(a, b);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

//Output: 1 2 3 4 5

//Approach: We can use set to store the elements of both the arrays and then return the elements of set as vector.
//Time Complexity: O(nlogn)