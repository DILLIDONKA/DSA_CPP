#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node *prev;
    Node (int x){
        data=x;
        next=prev=NULL;
    }
};
Node *InsertAtEnd(Node *head,int value){
    Node *temp=new Node(value);
    if(head==NULL){
        return temp;
    }
    Node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;
    temp->prev=current;
    return head;
}
void print_reverse(Node *head){
    if (head==NULL){
        return ;
    }
    Node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->prev;
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
    print_reverse(head);
    return 0;
}
