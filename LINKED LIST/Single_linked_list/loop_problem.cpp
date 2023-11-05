#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int size(Node *head,Node *slow,Node *fast){
    Node *current=slow->next;
    int count=1;
    while(current!=fast){
        count++;
        current=current->next;
    }
    if(current==fast){
    cout<<"The size of the loop is "<<count<<endl;
    }
}
int startnode(Node*head,Node *slow,Node *fast){
    Node *current=head;
    while(current!=fast){
        current=current->next;
        fast=fast->next;
    }
    if(current==fast){
        cout<<"Head of the loop is "<<current->data<<endl;
    }
}

void removeloop(Node *head,Node *slow,Node *fast){
    Node *current=head;
    while(current->next!=fast->next){
        current=current->next;
        fast=fast->next;
    }
    fast->next=NULL;
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
int isloop(Node *head){
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            Node *start=slow;
            Node *end=fast;
            cout<<"The loop is present in the list."<<endl;
            size(head,start,end);
            startnode(head,start,end);
            removeloop(head,start,end);
            cout<<"The modified loop is : ";
            print_list(head);
        }
    }
    
    
}
int main(){
    Node *head=new Node (10);
    head->next=new Node(20);
    head->next->next=new Node (30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node (50);
    head->next->next->next->next->next=new Node (60);
    head->next->next->next->next->next->next=new Node(70);
    head->next->next->next->next->next->next->next=head->next->next->next;
    isloop(head);
    return 0;
}
