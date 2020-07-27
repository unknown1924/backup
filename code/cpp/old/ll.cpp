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
    while(head){
        cout << head->data << "->";
        head = head->next;
    }
    cout<<endl;
}
void insertfirst(node* head, int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
    display(head);
}

void insertend(node* head, int data){
    node* temp = head;
    node* end = new node(data);
    while(temp->next){
        temp = temp->next;
    }
    temp->next = end;
    display(head);
}

int main(){
    cout << "Linked List\n";
    node *head = new node(1);
    node *sec = new node(2);
    head->next = sec;
    insertfirst(head,0);
    insertend(head,3);
    //display(head);
    
    //cout << head->data <<"->"<< head->next->data;
}
