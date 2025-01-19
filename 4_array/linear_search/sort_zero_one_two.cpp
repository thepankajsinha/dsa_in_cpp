#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int>& arr) {
        
    int n = arr.size();
        
    int noOfZeros = 0;
    int noOfOnes = 0;
    int noOfTwos = 0;
        
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            noOfZeros++;
        }
        else if(arr[i]==1){
            noOfOnes++;
        }else{
            noOfTwos++;
        }
    }
        
    //fill zeros
    for(int i=0; i<noOfZeros; i++){
        arr[i]=0;
    }
        
    //fill ones
    for(int i=noOfZeros; i<noOfZeros + noOfOnes; i++){
        arr[i]=1;
    }
        
    //fill twos
    for(int i=noOfZeros + noOfOnes; i<n; i++){
        arr[i]=2;
    }
}

int main(){
    vector<int> arr = {0,1,0,2,1,2,0,1};
    sort012(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

//Output: 0 0 0 1 1 1 2 2 

//Time Complexity: O(n)