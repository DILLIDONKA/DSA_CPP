#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x){
        data=x;
        next=NULL;
    }
};
Node *InsertAtPosition(Node *head, int position,int data){
    Node *temp=new Node(data);
    if(position==1){
        temp->next=head;
        return temp;
    }
    Node *current=head;
    for(int i=1;i<=position-2&&current!=NULL;i++){
        current=current->next;
    }
    if(current==NULL){
        return head;
    }
    temp->next=current->next;
    current->next=temp;
    return head;
    
}
void print_list(Node *head){
    if (head==NULL){
        return ;
    }
    Node *current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    
}
int main(){
    int data,position;
    Node *head=new Node(5);
    Node *temp1=new Node(10);
    Node *temp2=new Node(20);
    Node *temp3=new Node(30);
    Node *temp4=new Node(40);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    cout<<"Enter the element to be insert :";
    cin>>data;
    cout<<"Enter the position at insert :";
    cin>>position;
    head=InsertAtPosition(head,position,data);
    print_list(head);
    return 0;
}
