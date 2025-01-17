#include <bits/stdc++.h>
using namespace std;

void sortZeroOneTwo(vector<int>& nums) {

    int n = nums.size();

    int countZeros = 0;
    int countOnes = 0;
    int countTwos = 0;

    for(int i = 0; i<n; i++){
        if(nums[i]==0){
            countZeros++;
        }else if(nums[i]==1){
            countOnes++;
        }else{
            countTwos++;
        }
    }

        //fill Zeros
    for(int i = 0; i<countZeros; i++){
        nums[i] = 0;
    }

        //fill Ones
    for(int i = countZeros; i<countZeros + countOnes; i++){
        nums[i] = 1;
    }

        //fill Twos
    for(int i = countZeros + countOnes ; i<n; i++){
        nums[i] = 2;
    }
}


int main(){
    vector<int> a = {0,1,0,2,1,2,0,1};

    sortZeroOneTwo(a);

    for(int i = 0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

}

//Output: 0 0 0 1 1 1 2 2

//Approach: Count the number of 0s, 1s and 2s in the array. Then fill the array with 0s, 1s and 2s according to the count of 0s, 1s and 2s.
//Time Complexity: O(n)