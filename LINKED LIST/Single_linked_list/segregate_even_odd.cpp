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
Node *InsertEnd(Node *head,int data){
    Node *temp=new Node (data);
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
Node *segregate_even_odd(Node *head){
    Node *even_start,*even_end,*odd_start,*odd_end=NULL;
    for(Node *current=head;current!=NULL;current=current->next){
        int x=current->data;
        if(x%2==0){
            if(even_start==NULL){
                even_start=even_end=current;
            }
            else{
                even_end->next=current;
                even_end=even_end->next;
            }
        }
        else{
            if(odd_start==NULL){
                odd_start=odd_end=NULL;
            }
            else{
                odd_end->next=current;
                odd_end=odd_end->next;
            }
        }
    }
    even_end->next=odd_start;
    odd_end->next=NULL;
    return even_start;
    
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
    int n,data;
    cout<<"list size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>data;
        head=InsertEnd(head,data);
    }
    print_list(head);
    head=segregate_even_odd(head);
    print_list(head);
    return 0;
    
}