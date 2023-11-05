#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *InsertAtEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        return temp;
    }
    Node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=temp;
    return head;
}
Node *DeletePosition(Node *head,int k){
    if(head==NULL){
        cout<<"The list is empty.";
    }
    if(k==1){
        Node *temp=head->next;
        delete head;
        return temp;
    }
    Node *current=head;
    while(current->next->data!=k){
        current=current->next;
    }
    Node *temp=current->next;
    current->next=current->next->next;
    delete temp;
    return head;
    
    
}
void print_list(Node *head){
    if(head==NULL){
        return ;
    }
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *head=NULL;
    int data,n,k;
    cout<<"Enter the size of the list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>data;
        head=InsertAtEnd(head,data);
    }
    cout<<"Enter the position to be delete :";
    cin>>k;
    head=DeletePosition(head,k);
    print_list(head);
    return 0;
}
