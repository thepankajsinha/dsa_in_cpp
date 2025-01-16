#include <bits/stdc++.h>
using namespace std;

pair<int, int> get(int a, int b){
    a = a ^ b;
        
    b = a ^ b;
        
    a = a ^ b;
        
    return {a ,b};
}

int main(){
    int a = 10, b = 20;
    pair<int, int> ans = get(a, b);
    cout << ans.first << " " << ans.second << endl;
}

// Output: 20 10

// Time Complexity: O(1)
// Space Complexity: O(1)