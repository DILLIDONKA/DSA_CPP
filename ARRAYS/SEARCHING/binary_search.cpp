#include<bits/stdc++.h>
using namespace std;
// int BinarySearch(int arr[],int n,int k){
//     int a=0,b=n-1;
//     while(a<=b){
//         int mid=(a+b)/2;
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(arr[mid]>k){
//             b=mid-1;
//         }
//         else if(arr[mid]<k){
//             a=mid+1;
//         }
//     }
//     return -1;
// }
int BinarySearch(int arr[],int n,int a, int b, int k){
    if(a>b){
        return -1;
    }
    int mid=(a+b)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        return BinarySearch(arr,n,a,mid-1,k);
    }
    else if(arr[mid]<k){
        return BinarySearch(arr,n,mid+1,b,k);
    }

}

int main(){
    int n,k;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element to be find :";
    cin>>k;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    int a=0;
    int b=n-1;
    cout<<BinarySearch(arr,n,a,b,k);
}