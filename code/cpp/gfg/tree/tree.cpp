#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

struct Node{
    Node* left;
    Node* right;
    int data;

   Node(int key){
        data = key;
        left = NULL;
        right = NULL;
    }
};

void postorder(Node* root){
    if(root){
        postorder(root->right);
        cout << root->data << " ";
        postorder(root->left);
        cout << endl;
    }
}


void levelOrder(Node* root){
    vector<vector<int>> list;
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> currentlvl;
        int size = q.size();
        for(int i =0; i < size; ++i){
            Node* current = q.front();
            q.pop();
            currentlvl.push_back(current->data);

            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        list.push_back(currentlvl);
    }
    for(auto& i:list){
        cout << '[';
        for(auto& j:i) cout << j << ' ';
        cout << ']' << endl;
    }
    //checking top view elements
    //for(auto& i:list){
        //cout << i[0] << ' ' << i[i.size()-1];
        //cout << endl;
    //}
    
    vector<int> temp;
    for(auto& i: list){
        if(i.size() == 1) temp.push_back(i[0]);
        else{
            temp.insert(temp.begin(), i[0]);
            temp.push_back(i[i.size()-1]);
        }
    }
    for(auto& i:temp) cout << i << ' ';
    cout << endl;
}
void left(Node* root, vector<int>& v){
    if(root){
        v.insert(v.begin(), root->data);
        left(root->left, v);
    }
    //else{
        //++l;
        //left(root->left, v);
    //}
}
void right(Node* root, vector<int>& v){
    if(root){
        v.push_back(root->data);
        right(root->right, v);
    }
    //else{
        //++r;
        //right(root->right, v);
    //}
}

void topView(Node* root){
    int l=0, r=0;
    vector<int> tv;
    //tv.push_back(root->data);
    left(root, tv);
    right(root, tv);
    vector<int>::iterator it = find(tv.begin(), tv.end(), root->data);
    tv.erase(it);
    for(auto& i:tv) cout << i << ' ';
    cout << endl;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    topView(root);

    //postorder(root);
    //levelOrder(root);
    //cout << q.front();
    //q.pop();
    //cout << q.front();
    //while(!q.empty()){
    //cout << q.front()<< ' ';
    //q.pop();
    //}

}
