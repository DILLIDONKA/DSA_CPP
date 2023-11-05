#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node (int x){
        data=x;
        next=NULL;
    }
};
Node *insertend(Node *head,int data){
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
void RemoveDuplicates(Node *head){
    Node *current=head;
    while(current->next!=NULL){
        if(current->data!=current->next->data){
            current=current->next;
        }
        else{
            Node *temp=current->next;
            current->next=current->next->next;
            delete temp;
        }
        
    }
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
    int n,data;
    cout<<"Enter the size of the list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>data;
        head=insertend(head,data);
    }
    cout<<"The original list is :";
    print_list(head);
    cout<<endl;
    cout<<"The list after remove duplicates is :";
    RemoveDuplicates(head);
    print_list(head);
    return 0;
}
    