#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[n],k,x,a,i;
    cout<<"enter the capacity of the array:";
    cin>>n;
    cout<<"Enter the present size of the array:";
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cout<<"Enter the element "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"The array elements are :";
    for(i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the position of the inserted element:";
    cin>>x;
    int p=x-1;
    cout<<"Enter the element to be insert:";
    cin>>a;
    
    if(n==k){
        cout<<"Insertion is not possible";
    }
    else{
        for (i=k-1;i>=p;i--){
            arr[i+1]=arr[i];
        }
        arr[p]=a;
    }

    cout<<"The new array is :";
    for (i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}