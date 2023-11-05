#include<bits/stdc++.h>    //Traversal  of the linked list using recursion 
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
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    print_list(head->next);

}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    print_list(head);
    return 0;
}

