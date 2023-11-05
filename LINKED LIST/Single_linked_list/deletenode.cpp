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
Node *InsertBegin(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        return temp;
    }
    temp->next=head;
    return temp;
}
void delete_node(Node *ptr){
    Node *temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete temp;
}
void print_list(Node *head){
    if(head==NULL){
        return;
    }
    Node *current=head;
    while(current!=NULL){
        cout<<current->data<<"->"<<current->next<<endl;
        current=current->next;
    }
}
int main(){
    Node *head=NULL;
    Node *ptr=NULL;
    int n,data;
    cout<<"Enter the size :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>data;
        head=InsertBegin(head,data);
    }
    print_list(head);
    cout<<endl;
    cout<<"Enter the adress of the node to be delete :";
    cin>>Node *ptr;
    delete_node(ptr);
    print_list(head);
    return 0;
}