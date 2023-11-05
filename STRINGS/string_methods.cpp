#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string s="dillidonka";
    cout<<s.length()<<endl;
    //cout<<sizeof(s)<<endl;
    s=s+"8245";
    cout<<s.length()<<endl;
    cout<<s<<endl;
    cout<<s.substr(4,5)<<endl;
    cout<<s.find("i")<<endl;
    s=s+"@gmail.com";
    cout<<s<<endl;
    cout<<"Enter your name :";
    getline(cin,a,'k');
    cout<<"your name is "<<a<<endl;
    for(int i=0;i<a.length();i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}