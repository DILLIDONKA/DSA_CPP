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
void Print_list(Node *head){
    if(head==NULL){
        cout<<"The list is empty .";
    }
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    Node *head=NULL;
    head->next=new Node(10);
    head->next->next=new Node(20);
    head->next->next->next=new Node(30);
    head->next->next->next->next=NULL;
    Print_list(head);
    return 0;
}