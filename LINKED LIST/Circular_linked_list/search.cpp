
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
Node *InsertAtEnd(Node *head, int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=NULL;
        return temp;
    }
    else{
        Node *current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        temp->next=NULL;
        current->next=temp;
        return head;
    }
    
}
int position(Node *head, int x){
    int count=1;
    for(Node *current=head;current!=NULL;current=current->next){
        if(current->data==x){
            return count;
        }
        else{
            count++;
        }
    }
    return -1;
}

int main(){
    Node *head=NULL;
    int n,data,x;
    cout<<"Enter the size of the linked list :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>data;
        head=InsertAtEnd(head,data);
    }
    cout<<"Enter the element to be search :";
    cin>>x;
    cout<<position(head,x);
    return 0;
}



//RECURSIVE


// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node *next;
//     Node(int x){
//         data=x;
//         next=NULL;
        
//     }
// };
// Node *InsertAtEnd(Node *head, int data){
//     Node *temp=new Node(data);
//     if(head==NULL){
//         temp->next=NULL;
//         return temp;
//     }
//     Node *current=head;
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     temp->next=current->next;
//     current->next=temp;
//     return head;
    
// }
// int search(Node *head,int x){
//     if(head==NULL){
//         return -1;
//     }
//     if(head->data==x){
//         return 1;
//     }
//     else{
//         int res=search(head->next,x);
//         if(res==-1){
//             return -1;
//         }
//         else{
//             return res+1;
//         }
//     }
    
// }
// int main(){
//     Node *head=NULL;
//     int n,data,x;
//     cout<<"Enter the size of the list :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Enter the element "<<i+1<<" : ";
//         cin>>data;
//         head=InsertAtEnd(head,data);
//     }
//     cout<<"enter the element to be search :";
//     cin>>x;
//     cout<<search(head,x);
//     return 0;
// }