#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
public:
    int *arr;
    int front, back, size;

public:
    CircularQueue(int n){
        arr = new int[n]; 
        front = -1;
        back = -1;
        size = n;
    }

    bool isEmpty(){
        if (front == -1) return true;
        else return false;
    }

    bool isFull(){
        if ((back + 1) % size == front) return true; //this is the condition for circular queue
        else return false;
    }

    void push(int val){
        if (isEmpty()){ 
            front = 0;
            back = 0;
            arr[back] = val;
        }
        else if (isFull()){ 
            cout << "Queue is full." << endl;
            return;
        }
        else{
            back++;
            arr[back] = val;
        }
    }

    void pop(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
            return;
        }
        else if (front == back){
            front = -1;
            back = -1;
        }
        else{
            front = (front + 1) % size; // this is the condition for circular queue
        }
    }

    int Front(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    CircularQueue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.Front() << endl; // Output: 1
    q.pop();
    cout << q.Front() << endl; // Output: 2
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(6);
    cout << q.Front() << endl; // Output: 6
}