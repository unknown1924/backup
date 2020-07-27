#include <iostream>
using namespace std;



class node{
    public:
    int data;
    node* next;
    
    node(int info){
        data = info;
        next = NULL;
    }
};

void display(node* head){
    node* temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void deletenode(node* head, int n){
    node* temp = head;
    if(n == 1){
        head = head->next;
    }
    else{
        for(int i = 1; i<n-1; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;

    }
    display(head);
}

void makell(node* head){
    node* first = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    head = first;
    display(head);
    cout<<endl;
    deletenode(head, 1);
}

int main(){
    cout << "delete nth element in linked list\n";
    node* head;
    makell(head);
    //display(head);
}