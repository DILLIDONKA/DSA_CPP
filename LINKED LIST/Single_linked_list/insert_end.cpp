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
Node *Insert_At_End(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *current=head;
    while(current->next!=NULL){
        current =current->next;
    }
    current->next=temp;
    return head;
}
void Print_list(Node *head){
    Node *current=head;
    while(current !=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
}

int main(){
    Node *head=NULL;
    head=Insert_At_End(head,10);
    head=Insert_At_End(head,20);
    head=Insert_At_End(head,30);
    Print_list(head);
    return 0;

}