#include<bits/stdc++.h>
using namespace std;
int OccurenceSorted(int arr[],int n,int k){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            res++;
        }
    }
    return res;
}
int main(){
    int n,k;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the element :";
    cin>>k;
    cout<<OccurenceSorted(arr,n,k);


}