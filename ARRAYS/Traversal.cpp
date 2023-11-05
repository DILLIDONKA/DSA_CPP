#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"Enter the size of the array:";
    cin>>n;
    int i=0;
    for(i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"The array elements are: ";
    for (i=0;i<n;i++)
    {   if(i==0){
        cout<<"[";
        cout<<arr[0]<<",";
    }
    else{
        cout<<arr[i]<<" , ";
    }
    
    }
    cout<<arr[i-1];
    cout<<"]";

       return 0; 
}
    
        
