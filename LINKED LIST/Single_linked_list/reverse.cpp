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
Node *InsertEnd(Node *head, int data){
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
Node *reverse(Node *head){
    Node *current=head;
    Node *prev=NULL;
    while(current!=NULL){
        Node *next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
    
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
        head=InsertEnd(head,data);
    }
    cout<<"The list is :";
    print_list(head);
    cout<<endl;
    cout<<"reverse of the list is ;";
    head=reverse(head);
    print_list(head);
    return 0;
}