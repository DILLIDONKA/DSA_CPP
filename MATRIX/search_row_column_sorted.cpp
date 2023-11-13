#include<bits/stdc++.h>
using namespace std;
void search(int *arr[],int m,int n,int x){
     int i=0;
     int j=n-1;
     while(i<m&&j>=0){
          if(arr[i][j]==x){
               cout<<"The position is "<<i+1<<" row and "<<j+1<<" column.";
               return;
          }
          else if(arr[i][j]>x){
               j--;

          }
          else{
               i++;
          }   
     }
     cout<<"The element is not present in the matrix.";
}
void print_matrix(int *arr[],int m,int n){
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               cout<<arr[i][j]<<"  ";
          }
          cout<<endl;
     }
}
int main(){
     int m,n,x;
     cout<<"Enter the no.of rows :";
     cin>>m;
     cout<<"Enter the no.of columns :";
     cin>>n;
     int *arr[m];
     for(int i=0;i<m;i++){
          arr[i]=new int[n];
          for(int j=0;j<n;j++){
               arr[i][j]=i*i+j*j;
          }
     }
     print_matrix(arr,m,n);
     cout<<endl;
     cout<<"Enter the element to search :";
     cin>>x;
     search(arr,m,n,x);
     return 0;
}