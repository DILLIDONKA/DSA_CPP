#include<bits/stdc++.h>
using namespace std;
bool is_subsequence(string &str1,string &str2,int m,int n){
    int j=0;
    for(int i=0;i<m && j<n;i++){
        if(str1[i]==str2[j]){
            j++;
        }
    }
    return (j==n); //this condition is important to remember.
}
int main(){
    string str1,str2;
    int m,n;
    cout<<"Enter the string 1 :";
    getline(cin,str1);
    cout<<"Enter the string 2 :";
    getline(cin,str2);
    m=str1.length();
    n=str2.length();
    if(is_subsequence(str1,str2,m,n)==1){
        cout<<"The string 2 is the subsequence of the string 1.";
    }
    else{
        cout<<"The string 2 is not the subsequence of the string 1.";
    }
    
    return 0;
}