#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string &b) {
    int decimal = 0; 
    int n = b.length();  
    int idx = n-1;   
    int i = 0;
        
    while(idx >= 0){
        int lastDigit = b[idx] - '0';      
        decimal = decimal + (lastDigit * pow(2,i));     
        idx--;
        i++;
    }
    return decimal;
}

int main(){
    string binary = "1010";
    cout << binaryToDecimal(binary) << endl;
}

// Output: 10

// Time Complexity: O(n)
// Space Complexity: O(1)