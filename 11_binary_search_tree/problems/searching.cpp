#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data){ 
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


bool search(Node *root, int x)
{
    // Your code here
    if (root == NULL){
        return false;
    }
    else if (root->data == x){
        return true;
    }
    else if (root->data > x){
        search(root->left, x);
    }
    else{
        search(root->right, x);
    }
}


int main() {

        //       22
        //     /    \
        //   12      30  
        //  /  \    /   \
        // 8   20  25   40
        
    Node* root = new Node(22);
    root->left = new Node(12);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(20);
    root->right->left = new Node(25);
    root->right->right = new Node(40);
    cout << search(root, 20) << endl; //1
    cout << search(root, 21) << endl; //0
    return 0;
}