#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node (int x){
        data=x;
        prev=next=NULL;
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
Node *DeletePosition(Node *head,int position){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return NULL;
    }
    if(position==1){
        Node *temp=head;
        head=head->next;
        delete temp;
        return head;
        
    }
    Node *current=head;
    for(int i=1;i<=position-2&&current->next->next!=NULL;i++){
        current=current->next;
    }
    if(current->next->next==NULL){
        Node *temp=current->next;
        current->next=NULL;
        delete temp;
        return head;
    }
    Node *temp=current->next;
    current->next=current->next->next;
    current->next->next->prev=current;
    return head;
    
    
}
void print_list(Node *head){
    if(head==NULL){
        return ;
    }
    Node *current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
}
int main(){
    Node *head=NULL;
    int n, data,k;
    cout<<"Enter the size of the list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>data;
        head=InsertAtEnd(head,data);
    }
    print_list(head);
    cout<<endl;
    cout<<"Enter the positoin of the element to delete :";
    cin>>k;
    cout<<"The modified linked list is :";
    head=DeletePosition(head,k);
    print_list(head);
    return 0;
}