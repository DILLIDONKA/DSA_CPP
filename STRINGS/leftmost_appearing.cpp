#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int leftmost_appearing(string &str){
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]>1){
            return i;
        }
    }
    return -1;
}
int main(){
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    cout<<"your string is :"<<str<<endl;
    cout<<"The leftmost occurence of the repeating element is "<<leftmost_appearing(str);
    return 0;
}