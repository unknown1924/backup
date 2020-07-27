#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

void levelOrder(Node * root){
    if(root == NULL) return;
    Node * temp = root;
    queue<Node *> q;
    q.push(temp);
    while(!q.empty()){
        Node * front = q.front();
        cout << front->data << ' ';
        q.pop();
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
}
void inorder(Node * root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data <<' ';
    inorder(root->right);
}
Node* insert(Node * root, int data){
    if(root == NULL){
        Node * child = new Node(data);
        root = child;
    }
    else if(data > root->data){
        root->right = insert(root->right, data);
    }
    else{
        root->left = insert(root->left, data);
    }
    return root;
}
stack<int> topView(Node * root){
    stack<int> s;
    Node * troot = root;
    while(troot){
        s.push(troot->data);
        troot = troot->left;
    }
    return s;
}
queue<int> f(Node * root){
    queue<int> q;
    while(root){
        q.push(root->data);
        root = root->right;
    }
    return q;
}
void printStack(stack<int> s){
    while(!s.empty()){
        cout <<s.top() << ' ';
        s.pop();
    }
}
void printQueue(queue<int> q){
    while(!q.empty()){
        cout <<q.front() << ' ';
        q.pop();
    }
}
int main(){
    Node * root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    //insert(root, 1);
    //levelOrder(root);
    stack<int> s = topView(root);
    queue<int> q = f(root);
    printStack(s);
    q.pop();
    printQueue(q);  
}
