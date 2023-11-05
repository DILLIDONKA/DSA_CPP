#include<iostream>
#include <string>
using namespace std;
bool IsPalindrome(string &str, int  start, int end)
{
    if (start >= end){
        return true;
    }
    else{
        return (str[start]==str[end]&& IsPalindrome(str,start+1,end-1));
}

    }
    

int main(){
    int start=0,n,end,p;
    string str;
    cout<<"Enter the string:";
    cin>>str;
    p=str.length();
    end=n-1;
    cout<<IsPalindrome(str,start,end);
    return 0;
}