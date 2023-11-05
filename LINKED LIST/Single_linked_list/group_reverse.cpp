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
Node *Insertend(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        return temp;
    }
    Node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;
    return head;
}
Node *groupreverse(Node *head,int k){
    Node *current=head;
    Node *prev=NULL;
    Node *next=NULL;
    int count=0;
    while(current!=NULL&&count<k){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }
    if(next!=NULL){
        Node *rest_head=groupreverse(next,k);
        head->next=rest_head;
    }
    return prev;
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
    int n,data,k;
    cout<<"Enter the size of the list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>data;
        head=Insertend(head,data);
    }
    cout<<"original list is ";
    print_list(head);
    cout<<endl;
    cout<<"Enter the size to be reversed :";
    cin>>k;
    cout<<"After reversing them into group of size "<<k<<" is ";
    head=groupreverse(head,k);
    print_list(head);
    return 0;
}
