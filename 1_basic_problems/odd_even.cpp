#include <bits/stdc++.h>
using namespace std;

bool oddOrEven(int n) {
    if(n % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num = 15;
    cout<<oddOrEven(num)<<endl;
}

//Output: 0

// Time Complexity: O(1)
//Space Complexity: O(1)