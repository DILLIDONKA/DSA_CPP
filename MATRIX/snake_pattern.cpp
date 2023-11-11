#include<bits/stdc++.h>
using namespace std;
void print_matrix(int *arr[],int m,int n){
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }
}
void snake_pattern(int *arr[],int m,int n){
     for(int i=0;i<m;i++){
          if(i%2==0){
               for(int j=0;j<n;i++){
                    cout<<arr[i][j]<<" ";
               }
          }
          else{
               for(int j=n-1;j>=0;j--){ 
                    cout<<arr[i][j]<<" ";
               }
          }
     }
}
int main(){
     int m,n;
     cout<<"Enter the no.of rows :";
     cin>>m;
     cout<<"Enter the no.of columns :";
     cin>>n;
     int *arr[m];
     for(int i=0;i<m;i++){
          arr[i]=new int[n];      
          for(int j=0;j<n;j++){
               arr[i][j]=i+j+2;
          }
          
     }
     print_matrix(arr,m,n);
     snake_pattern(arr,m,n);
     return 0;
}
