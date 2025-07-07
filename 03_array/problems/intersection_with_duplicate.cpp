#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
    set <int> st;
    vector <int> ans;
        
    for(int i=0; i<a.size(); i++){
        st.insert(a[i]);
    }
        
    for(int i=0; i<b.size(); i++){
        if(st.find(b[i]) != st.end()){
            ans.push_back(b[i]);
        }
        st.erase(b[i]);
    }
    return ans;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 4, 4, 4, 5};
    vector<int> b = {4, 4, 5, 5, 6, 7, 8, 9};

    vector<int> ans = intersectionWithDuplicates(a, b);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}

//Output: 4,5

//Time Complexity: O(n+m)
//System Complexity: O(n+m)