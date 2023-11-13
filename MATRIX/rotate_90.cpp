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
void transpose(int *arr[],int m,int n){
     for(int i=0;i<m;i++){
          for(int j=i+1;j<n;j++){
               swap(arr[i][j],arr[j][i]);
          }
     }
}
void rotate_90(int *arr[],int m,int n){
     transpose(arr,m,n);
     for(int i=m-1;i>=0;i--){
          for(int j=0;j<n;j++){
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
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
               arr[i][j]=(i*i+j*j)/(i+1);

          }
     }
     cout<<"original matrix is :"<<endl;
     print_matrix(arr,m,n);
     cout<<"matrix after rotate by 90 degrees is :"<<endl;
     rotate_90(arr,m,n);
     return 0;

}