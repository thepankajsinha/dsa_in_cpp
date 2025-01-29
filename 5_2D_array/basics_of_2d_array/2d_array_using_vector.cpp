#include <bits/stdc++.h>
using namespace std;

int main(){

    //Declarations and initialization of 2D vectors
    vector< vector<int> > arr = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; //this is equal as int arr[4][3]


    //no of rows in vector
    cout<<arr.size()<<endl; //4


    //no of columns in vector
    cout<<arr[0].size()<<endl; //3
    

    //how to print the vector
    for (int  i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // 1 2 3 
    // 4 5 6 
    // 7 8 9 
    // 10 11 12 


    //input vector with row and column
    int row, col;
    cin>>row>>col;
    vector< vector<int> > v1(row, vector<int>(col));
    for (int  i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>v1[i][j];
        }
    }
}