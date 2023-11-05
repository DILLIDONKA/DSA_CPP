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
void print_list(Node *head){
    Node *current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;

    }
}
Node *InsertAtBeginning(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;

}
int main(){
    Node *head=NULL;
    head=InsertAtBeginning(head,40);
    head=InsertAtBeginning(head,30);
    head=InsertAtBeginning(head,20);
    head=InsertAtBeginning(head,10);
    print_list(head);
    return 0;
}