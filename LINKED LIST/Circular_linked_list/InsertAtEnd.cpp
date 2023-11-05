//Insert At Beginning in circular single linked list
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
// Node *InsertAtEnd(Node *head, int data){
//     Node *temp=new Node(data);
//     if(head==NULL){
//         temp->next=temp;
//         return temp;
//     }
//     else{
//         Node *current=head;
//         while(current->next!=head){
//             current=current->next;
//         }
//         temp->next=head;
//         current->next=temp;
        

//         return head;
//     }
    
    
// }
Node *InsertAtEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;
    }
    
}
void Print_List(Node *head){
    cout<<head<<endl;
    
    if (head==NULL){
        return ;
    }
        cout<<head->data<<"-"<<head->next<<endl;
        for(Node *p=head->next;p!=head;p=p->next){
            cout<<p->data<<"-"<<p->next<<endl;
        }
}
int main(){
    Node *head=NULL;
    int n,data;
    cout<<"Enter the size of the linked list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>data;
        head=InsertAtEnd(head,data);
    }
    Print_List(head);
    return 0;
}