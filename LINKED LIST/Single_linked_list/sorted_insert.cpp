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
Node *sortedinsert(Node *head,int data){
    Node *temp=new Node (data);
    if(head==NULL){
        return temp;
    }
    if(head->data>temp->data){
        temp->next=head;
        return temp;
    }
    Node *current=head;
    while(current->next!=NULL&&current->next->data<temp->data){
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;
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
    int n,data,k;
    cout<<"Enter the size of the list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<< i+1<<": ";
        cin>>data;
        head=sortedinsert(head,data);
    }
    print_list(head);
    cout<<endl;
    cout<<"Enter the value to be insert :";
    cin>>k;
    head=sortedinsert(head,k);
    print_list(head);
    return 0;
}