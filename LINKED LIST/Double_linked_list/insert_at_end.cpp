#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        prev=next=NULL;
    }
};
Node *InsertAtEnd(Node *head, int data){
    Node *temp=new Node(data);
    if(head==NULL){
        return temp;
    }
    Node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=temp;
    temp->prev=current;
    return head;

}
void print_list(Node *head){
    Node *current=head;
    while(current!=NULL){
        cout<<current->data<<" -> ";
        current= current->next;
    }
    cout<<"NULL";
}
int main(){
    Node *head=NULL;
    head=InsertAtEnd(head,10);
    head=InsertAtEnd(head,20);
    head=InsertAtEnd(head,30);
    head=InsertAtEnd(head,40);
    print_list(head);
    return 0;
}