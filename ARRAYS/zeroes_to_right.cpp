#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,c;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"The elements in the array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0){
            arr[c]=arr[i];
            c++;
        }
    }
    for(int i=0;i<c;i++){
        cout<<arr[i]<<" ";

    }
    for(int i=c;i<n;i++){
        cout<<" 0 ";
    }

}
