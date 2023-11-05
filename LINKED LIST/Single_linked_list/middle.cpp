//write a function to insert an element at the end of the circular double linked list.
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *prev;
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
void middle(Node *head){
    if(head==NULL){
        return;
    }
    else{
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<< slow->data;
    
}
}
int main(){
    Node *head=NULL;
    int n,data;
    cout<<"Enter the size of the list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>data;
        head=InsertAtEnd(head,data);
    }
    middle(head);
    return 0;
    
}