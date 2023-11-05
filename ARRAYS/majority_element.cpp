#include<bits/stdc++.h>
using namespace std;
int majority(int arr[],int n){
    int result=0,count=1;
    for(int i=1;i<n;i++){
        if(arr[result]==arr[i]){
            count++;
        }
        else{
            count--;                   //find the index of the major element. 
        }
        if(count==0){
            count=1;
            result=i;
        }
    }


    int c=0;
    for(int i=0;i<n;i++){
        if(arr[result]==arr[i]){
            c++;
        }
    }                                              //check whether the number is major element or not.
    if(c<=n/2){
        return -1;

    }
    else {
        return result;
    }

}
int main(){
    int n;
    cout<<"enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];

    }
    cout<<"the index of the majority element is "<<majority(arr,n)<<".";

}