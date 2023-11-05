#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev=next=NULL;
    }
};
Node *InsertAtBeginning(Node *head, int data){
    Node *temp=new Node(data);
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    return temp;
}

void print_list(Node *head){
    Node *current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
}
int main(){
    Node *head=NULL;
    head=InsertAtBeginning(head,30);
    head=InsertAtBeginning(head,20);
    head=InsertAtBeginning(head,10);
    head=InsertAtBeginning(head,5);
    print_list(head);
    return 0;
}