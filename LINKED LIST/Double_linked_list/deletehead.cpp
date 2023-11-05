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
        temp->next=NULL;
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
Node *DeleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
    return head;
}
void print_list(Node *head){
    cout<<head<<endl;
    if(head==NULL){
        return;
    }
    Node *current=head;
    while(current!=NULL){
        cout<<current->prev<<" "<<current->data<<" "<<current->next<<endl;
        current=current->next;
    }
}
int main(){
    Node *head=NULL;
    int n,data;
    cout<<"Enter the size of the list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>data;
        head=InsertAtEnd(head,data);
    }
    print_list(head);
    cout<<endl;
    cout<<"After delete first element : "<<endl;
    head=DeleteHead(head);
    print_list(head);
    return 0;
}