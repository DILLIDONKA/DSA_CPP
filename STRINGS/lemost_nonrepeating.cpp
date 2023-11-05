#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int leftmost_nonrepeating(string &str1){
    int count[CHAR]={0};
    for(int i=0;i<str1.length();i++){
        count[str1[i]]++;
    }
    for(int i=0;i<str1.length();i++){
        if(count[str1[i]]==1){
            return i;
        }
    }
    return -1;
}

int main(){
    string str1;
    cout<<"Enter the string 1 :";
    getline(cin,str1);
    cout<<"The index of the leftmost non repeating element is :"<<leftmost_nonrepeating(str1);
    return 0;
}