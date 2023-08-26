//You are given a binary tree. A binary tree is considered balanced if the heights of the two subtrees of any node never differ by more than 1. Write a code to determine if a given binary tree is balanced or not.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{

    public:

        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }

};

void inorder(Node* node){

    if(node == NULL){

        return;

    }

    inorder(node->left);

    cout<<node->data<<" ";

    inorder(node->right);

}

int isBalanced(Node* node)
{
    if (node == NULL){

        return 0;

    }

    int lh = isBalanced(node->left);
    if (lh == -1)
        return -1;

    int rh = isBalanced(node->right);
    if (rh == -1)
        return -1;
 
    if (abs(lh - rh) > 1)
        return -1;
    else
        return max(lh, rh) + 1;
}


int main(){
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    inorder(root);
    cout<<endl;

    if (isBalanced(root) > 0)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}    
