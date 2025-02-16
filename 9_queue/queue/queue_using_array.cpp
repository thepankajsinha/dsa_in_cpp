//array implementation of queue operations
#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int* arr; //dynamic array declaration
    int front, back, size;

    public:
    Queue(int n){
        arr = new int[n]; //dynamic array initialization
        front = -1;
        back = -1;
        size = n;
    }

    bool isEmpty(){
        if (front == -1) return true;
        else return false;
    }

    bool isFull(){
        if (back == size-1) return true;
        else return false;
    }

    void push(int val){
        if(isEmpty()){ //if queue is empty
            front = 0;
            back = 0;
            arr[back] = val;
        }
        else if(isFull()){ //if queue is full
            cout<<"Queue is full."<<endl;
            return;
        }
        else{
            back++;
            arr[back] = val;
        }
    }

    void pop(){
        if(isEmpty()){ //if queue is empty
            cout<<"Queue is empty."<<endl;
            return;
        }
        else if(front == back){ //if only one element is present in queue
            front = -1;
            back = -1;
        }
        else{
            front++;
        }
    }

    int Front(){
        if(isEmpty()){
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return arr[front];
    }
};


int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.Front()<<endl; //Output: 1
    q.pop();
    cout<<q.Front()<<endl; //Output: 2
    q.pop();
    cout<<q.Front()<<endl; //Output: 3
}