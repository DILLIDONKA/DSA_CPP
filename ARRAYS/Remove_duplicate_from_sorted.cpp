#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, a,r;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;++i){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];

    }
    cout<<endl;   
    cout<<"The elements in the arrays is ";
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int rs=0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[rs]){
            rs++;
            arr[rs]=arr[i];
        }
    }
    

    r=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[r-1]){
            arr[r]=arr[i];
            r++;
        }
    }
    cout<<"The size of the modified array is "<<r<<endl;
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }

}
