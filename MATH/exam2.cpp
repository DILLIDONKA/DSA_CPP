#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,aq,i,j,m,r,w,d;
    cout<<"Enter the total no. of questions:";
    cin>>n;
    cout<<"Enter the no. of attempted questions:";
    cin>>aq;
    cout<<"Enter the score for each right answer question:";
    cin>>r;
    cout<<"Enter the score of the each wrong answer question:";
    cin>>w;
    cout<<"Total marks you got is :";
    cin>>m;
    if(n<0){
        cout<<"Enter valid value";
    }
    else{
        for (int i=0;i<aq;i++){
            j=aq-i;
            d= i*r-j*w;
            if(m==d){
                cout<<"The right answered questions are "<<i<<" "<<"and the wrong answered questions are "<<j<<endl;
            }
        }
    
}
}