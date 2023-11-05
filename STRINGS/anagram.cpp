#include<bits/stdc++.h>
using namespace std;
bool anagram(string &str1,string &str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    int count[256]={0};
    for(int i=0;i<str1.length();i++){
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i=0;i<str1.length();i++){
        if(count[str1[i]]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string str1;
    string str2;
    cout<<"Enter the string 1 :";
    getline(cin,str1);
    cout<<"Enter the string 2 :";
    getline(cin,str2);
    if(anagram(str1,str2)==1){
        cout<<"They follows anagram.";
    }
    else{
        cout<<"They doesnot follow anagram.";
    }
    return 0;
}