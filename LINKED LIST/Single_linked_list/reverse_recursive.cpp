//write a program to reverse the single linked list in a recursive way
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
Node *InsertEnd(Node *head,int data){
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
Node *reverse(Node *current,Node *prev){
    if(current==NULL){
        return prev;
    }
    Node *next=current->next;
    current->next=prev;
    return reverse(next,current);
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
    int data,n;
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
    cout<<"Reversed list is :";
    head=reverse(head,nullptr);
    print_list(head);
    return 0;
}