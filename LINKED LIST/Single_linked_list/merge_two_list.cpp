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
Node *InsertEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        return temp;
    }
    Node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    temp->next=current;
    current->next=temp;
    return head;
}
Node *merge_two_list(Node *a,Node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node *start,*end=NULL;
    if(a->data<=b->data){
        start=end=a;
        a=a->next;
    }
    else{
        start=end=b;
        b=b->next;
    }
    while(a!=NULL&&b!=NULL){
        if(a->data<=b->data){
            end->next=a;
            end=a;
            a=a->next;
        }
        else{
            end->next=b;
            end=b;
            b=b->next;
        }
    }
    if(a==NULL){
        end->next=b;
    }
    if(b==NULL){
        end->next=a;
    }
    return start;
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
    
    Node *head=NULL,*head1=NULL,*head2=NULL;
    int n,data,k;
    cout<<"Enter the size of the first list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>data;
        head1=InsertEnd(head1,data);
    }
    cout<<"The first list is :";
    print_list(head1);
    cout<<endl;
    cout<<"Enter the size of the second list :";
    cin>>k;
    for(int j=0;j<k;j++){
        cout<<"Element "<<j+1<<": ";
        cin>>data;
        head2=InsertEnd(head2,data);
    }
    cout<<"The second list is :";
    print_list(head2);
    cout<<endl;
    cout<<"The resultant linked list is :";
    head=merge_two_list(head1,head2);
    print_list(head);
    return 0;
}