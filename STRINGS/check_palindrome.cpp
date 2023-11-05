#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string &str){
    int start=0;
    int end=str.length()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    cout<<"The string is "<<str<<endl;
    if(ispalindrome(str)==1){
        cout<<"the given string is palindrome.";
    }
    else{
        cout<<"the given string is not a palindrome.";
    }
    return 0;
}