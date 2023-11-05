#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,p;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The elements in the array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the element that you want to deleted : ";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k){
            p=i;
            for(j=p;j<n-1;j++){
                arr[j]=arr[j+1];
            }
        }
    }
            n=n-1;
            cout<<endl;
            cout<<"The elements in the array is : ";
             for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
             }
        
        return 0;
        
}