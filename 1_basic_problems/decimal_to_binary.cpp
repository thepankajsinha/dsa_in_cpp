#include <bits/stdc++.h>
using namespace std;


int decimalToBinary(int n){
    int binary = 0;
    int i = 0;
    
    while(n != 0){
        int lastBit = n & 1; //to get last bit  
        binary = binary + (lastBit * pow(10, i));
        n = n >> 1; 
        i++;
    }
        return binary;
}

int main(){
    int n = 10;
    cout << decimalToBinary(n) << endl;
}

// Output: 1010

// Time Complexity: O(log(n))
// Space Complexity: O(1)