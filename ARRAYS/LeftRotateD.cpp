#include<bits/stdc++.h>
using namespace std;
int Reverse(int arr[],int n,int a, int b){
    for(int i=b-1;i>=a;i--){ 
        arr[b-i+a-1]=arr[i];
    }

}
int LeftRotate(int arr[],int n, int d){
    cout<<Reverse(arr,d,0,d);
    cout<<Reverse(arr,n-d,d,n);
    cout<<Reverse(arr,n,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
        
int main()
{
    int i,n,d;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the value of d :";
    cin>>d;
    cout<<LeftRotate(arr,n,d);
}