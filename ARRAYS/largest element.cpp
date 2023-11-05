#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The array elements are: ";
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for (int i=1;i<n ;i++){
        if(arr[i]>arr[a])
        {
            a=i;
        }
        
    }
    cout<<"The largest element is "<<arr[a]<<" with index value "<<a;


    return 0;
}