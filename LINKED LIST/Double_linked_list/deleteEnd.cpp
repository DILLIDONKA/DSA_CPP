#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=prev=NULL;
    }
};
Node *InsertAtEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->prev=NULL;
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
Node *DeleteEnd(Node *head){
    if(head==NULL){
        cout<<"The list is empty.";
    }
    Node *current=head;
    while(current->next->next!=NULL){
        current=current->next;
    }
    Node *temp=current->next;
    current->next=NULL;
    delete temp;
    return head;
    
    
}
void print_list(Node *head){
    if(head==NULL){
        return;
    }
    Node *current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
}
int main(){
    Node *head=NULL;
    int data,n;
    cout<<"Enter the size of the list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>data;
        head=InsertAtEnd(head,data);
    }
    head=DeleteEnd(head);
    print_list(head);
    return 0;
}
