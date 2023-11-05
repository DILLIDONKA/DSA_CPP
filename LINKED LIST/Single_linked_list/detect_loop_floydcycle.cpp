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

bool isloop(Node *head){
    Node *slow =head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow->data==fast->data){
            return true;
        }
    }
    return false;
}
int main(){
    Node *head=new Node (10);
    head->next=new Node(20);
    head->next->next=new Node (30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node (50);
    head->next->next->next->next->next=head->next->next;
    if(isloop(head)==1){
        cout<<"There is a loop in the list.";
    }
    else{
        cout<<"No loop is present in the list.";
    }
}
