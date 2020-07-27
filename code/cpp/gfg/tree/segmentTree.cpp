#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int key){
        data = key;
        left = NULL;
        right = NULL;
    }
};

Node* build(int a[]){
    Node* root = new Node(-1);
    return root;
}

int main(){
    int a[] = {1,3,5,7,9,11};
    Node *root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    build(a);
    //cout << root->data << endl;
    //cout << root->left->data << endl;
    //cout << root->right->data << endl;
}
