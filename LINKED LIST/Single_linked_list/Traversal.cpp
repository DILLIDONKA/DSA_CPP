#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void print_list(Node *head){
    cout<<head;
    Node *current=head;
    while(current!=NULL){
        cout<<current->data<<" "<<current->next<<endl;
        current=current->next;
    }

}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    print_list(head);
    return 0;
}

