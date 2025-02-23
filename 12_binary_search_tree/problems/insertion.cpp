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

Node *insert(Node *root, int key)
{
    // if tree is empty
    if (root == NULL)
    {
        Node *temp = new Node(key);
        return temp;
    }

    Node *temp = root;

    while (true)
    {

        if (key > temp->data)
        {

            if (temp->right != NULL)
            {
                temp = temp->right;
            }
            else if (temp->right == NULL)
            {
                temp->right = new Node(key);
                break;
            }
        }
        else if (key < temp->data)
        {

            if (temp->left != NULL)
            {
                temp = temp->left;
            }
            else if (temp->left == NULL)
            {
                temp->left = new Node(key);
                break;
            }
        }
        else
        { // if key if duplicate then not insert
            break;
        }
    }

    return root;
}

void inorder(Node *root)
{
    if (root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main() {

    //       22
    //     /    \
    //   12      30
    //  /  \    /   \
    // 8   20  25   40

    Node *root = new Node(22);
    root->left = new Node(12);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(20);
    root->right->left = new Node(25);
    root->right->right = new Node(40);
    root = insert(root, 21);
    inorder(root);
}

// Output: 8 12 20 21 22 25 30 40
// Time Complexity: O(h) where h is the height of the tree.